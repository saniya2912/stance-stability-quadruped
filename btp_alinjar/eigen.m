function VR=eigen(h)
 A=transpose(h)*h;
[V,D]=eig(A);
VR=real(V);
end