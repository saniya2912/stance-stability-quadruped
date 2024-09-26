function [w]=scalopt(u)
w=1;
cvx_begin
    variables w
    minimize(w^2+2*w+norm(u));
    subject to
        w<2;
cvx_end
