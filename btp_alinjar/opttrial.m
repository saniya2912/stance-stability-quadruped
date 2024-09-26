for i = 1:13917
H=h.data(:,:,i);
H_dot=h_dot.data(:,:,i);
T2d=transpose(t2d.data(i,:));
%V_torso=v_torso.data(:,:,1);
V_torso=transpose(v_torso.data(i,:));
NN=N.data(i,:);
Mu_s=0.8;
MM=4.12;

tddfun= @(X) norm(MM*X);
C=[1 0 0];
A = C*H_dot*pinv(H)*pinv(C)*MM;
b = Mu_s*NN-NN+C*H_dot*pinv(H)*pinv(C)*C*V_torso*MM-C*H*T2d;
Aeq = [];
beq = [];
lb = 0;
ub =1;
X0 = 0.1;
options=optimoptions('fmincon', 'Algorithm', 'sqp');
X(i)= fmincon(tddfun,X0,A,b,[],[],[],lb,ub,options);
end
plot(X)
% 
% h=h(:,:,1);
% h_dot=h_dot(:,:,1);
% t2d=t2d(:,:,1);
% v_torso=v_torso(:,:,1);
% N=N(1,1,1);
% mu_s=0.8;
% M=4.12;
% x=tddopt(mu_s,h,M,v_torso,N,h_dot,t2d)