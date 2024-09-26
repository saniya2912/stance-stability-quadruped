function h_dotRF = hdotrf(ea_dg1,ea1g, ea2g, ea3g, ea_dg2, ea_dg3, rho_dotRF, rhoRF)
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
h1_dot=(m_ul*cross(ea1g,rho_dotRF(:,1,1)))+(m_ul*cross(ea_dg1,rhoRF(:,1,1)))+(m_ll*cross(ea1g,rho_dotRF(:,2,1)))+(m_ll*cross(ea_dg1,rhoRF(:,2,1)))+(m_foot*cross(ea1g,rho_dotRF(:,3,1)))+(m_foot*cross(ea_dg1,rhoRF(:,3,1)));
h2_dot=(m_ll*cross(ea2g,rho_dotRF(:,2,2)))+(m_ll*cross(ea_dg2,rhoRF(:,2,2)))+(m_foot*cross(ea2g,rho_dotRF(:,3,2)))+(m_foot*cross(ea_dg2,rhoRF(:,3,2)));
h3_dot=m_foot*(cross(ea3g,rho_dotRF(:,3,3)))+m_foot*(cross(ea_dg3,rhoRF(:,3,3)));

h_dotRF =[h1_dot h2_dot h3_dot];



end
