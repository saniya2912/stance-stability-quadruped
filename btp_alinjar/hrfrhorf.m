function [hRF,rhoRF] = hrfrhorf(ea10g, ea20g, aa10g, cma2, cma1, cma3, ea30g, aa20g)
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
rhoRF=zeros(3,3,3);
scf(:,1)=cma1;
scf(:,2)=aa10g+cma2;
scf(:,3)=aa10g+aa20g+cma3;
sof(:,1)=[0;0;0];
sof(:,2)=aa10g;
sof(:,3)=aa10g+aa20g;
for i=1:3
    for j=1:3
        if j<i
rhoRF(:,j,i)=zeros(3,1);
        else
rhoRF(:,j,i)=scf(:,j)-sof(:,i);
        end
    end
end
h1=(m_ul*cross(ea10g,rhoRF(:,1,1)))+(m_ll*cross(ea10g,rhoRF(:,2,1)))+(m_foot*cross(ea10g,rhoRF(:,3,1)));
h2=(m_ll*cross(ea20g,rhoRF(:,2,2)))+(m_foot*cross(ea20g,rhoRF(:,3,2)));
h3=m_foot*(cross(ea30g,rhoRF(:,3,3)));

hRF =[h1 h2 h3];



end
