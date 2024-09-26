function h_dotLB = hdotlb( ed_dg1,ed1g, ed2g, ed3g, ed_dg2, ed_dg3, rho_dotLB, rhoLB)
%%
lower_leg_length = 10;
upper_leg_length = 10;
density = 1000;
foot_density=2000;
leg_radius = 0.75;
foot_x = 8;
foot_y = 6;
foot_z = 1;
m_ul=density*leg_radius*leg_radius*upper_leg_length*3.141592653589*0.01*0.01*0.01;
m_ll=density*leg_radius*leg_radius*lower_leg_length*3.141592653589*0.01*0.01*0.01;
m_foot=foot_density*foot_x*foot_y*foot_z*0.000001;

%%
h1_dot=(m_ul*cross(ed1g,rho_dotLB(:,1,1)))+(m_ul*cross(ed_dg1,rhoLB(:,1,1)))+(m_ll*cross(ed1g,rho_dotLB(:,2,1)))+(m_ll*cross(ed_dg1,rhoLB(:,2,1)))+(m_foot*cross(ed1g,rho_dotLB(:,3,1)))+(m_foot*cross(ed_dg1,rhoLB(:,3,1)));
h2_dot=(m_ll*cross(ed2g,rho_dotLB(:,2,2)))+(m_ll*cross(ed_dg2,rhoLB(:,2,2)))+(m_foot*cross(ed2g,rho_dotLB(:,3,2)))+(m_foot*cross(ed_dg2,rhoLB(:,3,2)));
h3_dot=m_foot*(cross(ed3g,rho_dotLB(:,3,3)))+m_foot*(cross(ed_dg3,rhoLB(:,3,3)));

h_dotLB =[h1_dot h2_dot h3_dot];



end
