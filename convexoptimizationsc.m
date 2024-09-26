function [w]=convexoptimizationsc(out)
h=out(1:3,1:12);
h_dot=out(4:6,1:12);
V=out(7:18,1:12);
VR=real(V);
% theta_d_des=M*(-pinv(h)*v_torso)+VR(:,1);
Va=VR(:,1:9);
w1=1;w2=2;w3=3;w4=4;w5=5;w6=6;w7=7;w8=8;w9=9;
cvx_begin
    variables w1 w2 w3 w4 w5 w6 w7 w8 w9
    minimize(norm(-pinv(h)*h_dot*(Va*[w1;w2;w3;w4;w5;w6;w7;w8;w9])));
    subject to
        Va*[w1;w2;w3;w4;w5;w6;w7;w8;w9]<0.5*ones(12,1);
cvx_end
w=[w1 w2];