function h_dotLF = hdotlf( eb_dg1,eb1g, eb2g, eb3g, eb_dg2, eb_dg3, rho_dotLF, rhoLF)
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
h1_dot=(m_ul*cross(eb1g,rho_dotLF(:,1,1)))+(m_ul*cross(eb_dg1,rhoLF(:,1,1)))+(m_ll*cross(eb1g,rho_dotLF(:,2,1)))+(m_ll*cross(eb_dg1,rhoLF(:,2,1)))+(m_foot*cross(eb1g,rho_dotLF(:,3,1)))+(m_foot*cross(eb_dg1,rhoLF(:,3,1)));
h2_dot=(m_ll*cross(eb2g,rho_dotLF(:,2,2)))+(m_ll*cross(eb_dg2,rhoLF(:,2,2)))+(m_foot*cross(eb2g,rho_dotLF(:,3,2)))+(m_foot*cross(eb_dg2,rhoLF(:,3,2)));
h3_dot=m_foot*(cross(eb3g,rho_dotLF(:,3,3)))+m_foot*(cross(eb_dg3,rhoLF(:,3,3)));

h_dotLF =[h1_dot h2_dot h3_dot];



end
