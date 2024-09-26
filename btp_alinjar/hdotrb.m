function h_dotRB = hdotrb( ec_dg1,ec1g, ec2g, ec3g, ec_dg2, ec_dg3, rho_dotRB, rhoRB)
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
h1_dot=(m_ul*cross(ec1g,rho_dotRB(:,1,1)))+(m_ul*cross(ec_dg1,rhoRB(:,1,1)))+(m_ll*cross(ec1g,rho_dotRB(:,2,1)))+(m_ll*cross(ec_dg1,rhoRB(:,2,1)))+(m_foot*cross(ec1g,rho_dotRB(:,3,1)))+(m_foot*cross(ec_dg1,rhoRB(:,3,1)));
h2_dot=(m_ll*cross(ec2g,rho_dotRB(:,2,2)))+(m_ll*cross(ec_dg2,rhoRB(:,2,2)))+(m_foot*cross(ec2g,rho_dotRB(:,3,2)))+(m_foot*cross(ec_dg2,rhoRB(:,3,2)));
h3_dot=m_foot*(cross(ec3g,rho_dotRB(:,3,3)))+m_foot*(cross(ec_dg3,rhoRB(:,3,3)));

h_dotRB =[h1_dot h2_dot h3_dot];



end
