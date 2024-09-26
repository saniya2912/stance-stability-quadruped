function [tddRF,tddLF,tddRB,tddLB,h,h_dot,theta_d_des,M] = fcn(hLF, hRB, hLB, h_dotLF, hRF,h_dotRF, v_torso, h_dotRB, h_dotLB)
% tddRF = zeros([3 1], 'double');
% tddLF = zeros([3 1], 'double');
% tddRB = zeros([3 1], 'double');
% tddLB = zeros([3 1], 'double');
% h = zeros([3 12], 'double');
% h_dot = zeros([3 12], 'double');
% theta_d_des = zeros([12 1], 'double');
% M = zeros(1, 'double');
% coder.extrinsic('theta_d_des_mex');
% [tddRF,tddLF,tddRB,tddLB,h,h_dot,theta_d_des,M] = theta_d_des_mex(hLF, hRB, hLB, h_dotLF, hRF,h_dotRF, v_torso, h_dotRB, h_dotLB);
lower_leg_length = 10;
upper_leg_length = 10;
density = 1000;
foot_density=2000;
leg_radius = 0.75;
foot_x = 8;
foot_y = 6;
foot_z = 1;
torso_y = 16;
torso_x = 25;
torso_z = 10;
m_ul=density*leg_radius*leg_radius*upper_leg_length*3.141592653589*0.01*0.01*0.01;
m_ll=density*leg_radius*leg_radius*lower_leg_length*3.141592653589*0.01*0.01*0.01;
m_foot=foot_density*foot_x*foot_y*foot_z*0.000001;
m_torso=density*torso_x*torso_y*torso_z*0.000001;
M=m_torso+(4*(m_ul+m_ll+m_foot));
%%
h=[hRF hLF hRB hLB];
A=transpose(h)*h;
[V,D]=eig(A);
VR=real(V);
%coder.extrinsic('chooseJVoptimize');
h_dot=[h_dotRF h_dotLF h_dotRB h_dotLB];
%theta_d_des=chooseJVoptimize(h,h_dot,v_torso, M);
% 

% % theta_d_des=zeros(12,1);
% x=zeros(12,9);
% y=zeros(12,9);
% ynorm=zeros(9,1);
% for i=1:9
%     x(:,i)=M*(-pinv(h)*v_torso)+real(V(:,i));
%     y(:,i)=pinv(h)*(-h_dot*x(:,i));
%     ynorm(i)=norm(y(:,i));
% end
% ynormmin=min(ynorm);
% 
% for i=1:9
%     if ynorm(i)==ynormmin
%         theta_d_des=x(:,i);
%     end
% end
w=zeros(9,1);
%w = [0.01;0.03;0.05;0.01;0.03;0.04;0.05;0.02;0.06];
Va=VR(:,1:9);
tddfun = @(w) norm(-pinv(h)*h_dot*M*(-pinv(h)*v_torso+Va*w));
A = [1;1;0]^T*hdot*Va;
b = mu*[N;N;0]-[1;1;0]^T*h*ddth;
%Aeq = [transpose(x(2:10))*x(2:10)*ones(12,1),(x(1)*eye(12,12)-pinv(Reh)*Rehdot)*Va];
Aeq = [];

beq = [];
lb = [];
ub =[];
%nonlcon =norm(w)-1;
w0 = [0.01;0.03;0.05;0.01;0.03;0.04;0.05;0.02;0.06];
options=optimoptions('fmincon', 'Algorithm', 'sqp');
 w= fmincon(tddfun,w0,A,b,[],[],[],[],[],options);
theta_d_des=Va*w;
 
 
tddRF_hip=theta_d_des(1);
tddRF_knee=theta_d_des(2);
tddRF_ankle=theta_d_des(3);
tddLF_hip=theta_d_des(4);
tddLF_knee=theta_d_des(5);
tddLF_ankle=theta_d_des(6);
tddRB_hip=theta_d_des(7);
tddRB_knee=theta_d_des(8);
tddRB_ankle=theta_d_des(9);
tddLB_hip=theta_d_des(10);
tddLB_knee=theta_d_des(11);
tddLB_ankle=theta_d_des(12);

tddRF=[tddRF_hip tddRF_knee tddRF_ankle];
tddLF=[tddLF_hip tddLF_knee tddLF_ankle];
tddRB=[tddRB_hip tddRB_knee tddRB_ankle];
tddLB=[tddLB_hip tddLB_knee tddLB_ankle];
end
