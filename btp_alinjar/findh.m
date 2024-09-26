function [ht2d,h_dottd,htd,ht2ddes,hdtddes] = findh(h,h_dot, td, t2d,theta_d_des,theta_2d_des)
ht2d=h*t2d;
htd=h*td;
h_dottd=h_dot*td;
ht2ddes=h*theta_2d_des;
hdtddes=h_dot*theta_d_des;
end
