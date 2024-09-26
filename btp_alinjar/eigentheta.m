function [VR,D]=eigentheta(h)
 A=transpose(h)*h;
% [V,D]=eig(A);
% VR=real(V);
V=null(A);
VR=real(V);
D=eye(9,9);
end