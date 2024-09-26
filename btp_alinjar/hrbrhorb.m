function [hRB,rhoRB] = hrbrhorb(ec10g, ec20g, ac10g, cmc2, cmc1, cmc3, ec30g, ac20g)
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
scf=zeros(3,3);
sof=zeros(3,3);
rhoRB=zeros(3,3,3);
scf(:,1)=cmc1;
scf(:,2)=ac10g+cmc2;
scf(:,3)=ac10g+ac20g+cmc3;
sof(:,1)=[0;0;0];
sof(:,2)=ac10g;
sof(:,3)=ac10g+ac20g;
for i=1:3
    for j=1:3
        if j<i
rhoRB(:,j,i)=zeros(3,1);
        else
rhoRB(:,j,i)=scf(:,j)-sof(:,i);
        end
    end
end
h1=(m_ul*cross(ec10g,rhoRB(:,1,1)))+(m_ll*cross(ec10g,rhoRB(:,2,1)))+(m_foot*cross(ec10g,rhoRB(:,3,1)));
h2=(m_ll*cross(ec20g,rhoRB(:,2,2)))+(m_foot*cross(ec20g,rhoRB(:,3,2)));
h3=m_foot*(cross(ec30g,rhoRB(:,3,3)));

hRB =[h1 h2 h3];



end
