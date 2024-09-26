function x=tddopt(mu_s,h,M,v_torso,N,h_dot,t2d)
tddfun= @(x) norm(M*x);
C=[1 0 0];
A = C*h_dot*pinv(h)*pinv(C)*M;
b = mu_s*N-N+C*h_dot*pinv(h)*pinv(C)*C*v_torso*M-C*h*t2d;
Aeq = [];
beq = [];
lb = [];
ub =[];
x0 = 0;
options=optimoptions('fmincon', 'Algorithm', 'sqp');
x= fmincon(tddfun,x0,A,b,[],[],[],[],[],options);
%theta_d_des=pinv(h)*(M*[x;0;0]-M*v_torso);
end