Va=V(:,1:9);
fun = @(w) norm(-pinv(h)*hdot*M*(-pinv(h)*v_torso+VR*w))^2;
A = Va;
b = 0.02*ones(12,1);
%Aeq = [transpose(x(2:10))*x(2:10)*ones(12,1),(x(1)*eye(12,12)-pinv(Reh)*Rehdot)*Va];
Aeq = [];

beq = [];
lb = -0.01*ones(9,1);
ub = 0.01*ones(9,1);
%nonlcon =norm(w)-1;
w0 = [0.01;0.03;0.05;0.01;0.03;0.04;0.05;0.02;0.06];
 w= fmincon(fun,w0,A,b,Aeq,beq,lb,ub);
 dqdesired=Va*w;