function [tddRF,tddLF,tddRB,tddLB] = check(hLF, hRB, hLB, hRF, v_torso)
%%
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

[ve,D]=eig(transpose(h)*h);

theta_dot_desired=M*(-pinv(h)*v_torso)+ve(:,1);
xx=-pinv(h)*v_torso

tddRF_hip=theta_dot_desired(1);
tddRF_knee=theta_dot_desired(2);
tddRF_ankle=theta_dot_desired(3);
tddLF_hip=theta_dot_desired(4);
tddLF_knee=theta_dot_desired(5);
tddLF_ankle=theta_dot_desired(6);
tddRB_hip=theta_dot_desired(7);
tddRB_knee=theta_dot_desired(8);
tddRB_ankle=theta_dot_desired(9);
tddLB_hip=theta_dot_desired(10);
tddLB_knee=theta_dot_desired(11);
tddLB_ankle=theta_dot_desired(12);

tddRF=[tddRF_hip tddRF_knee tddRF_ankle];
tddLF=[tddLF_hip tddLF_knee tddLF_ankle];
tddRB=[tddRB_hip tddRB_knee tddRB_ankle];
tddLB=[tddLB_hip tddLB_knee tddLB_ankle];
end
