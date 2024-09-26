function theta_2d_des = theta_2d_des(theta_d_des, h_dot, h, a_torso, M, f)
g=[0; 0; -9.80665];
theta_2d_des=pinv(h)*((-h_dot*theta_d_des)-M*a_torso+M*g+f);
end
