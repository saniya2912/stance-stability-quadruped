function [hLF,rhoLF] = hlfrholf(eb10g, eb20g, ab10g, cmb2, cmb1, cmb3, eb30g, ab20g)
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
rhoLF=zeros(3,3,3);
scf(:,1)=cmb1;
scf(:,2)=ab10g+cmb2;
scf(:,3)=ab10g+ab20g+cmb3;
sof(:,1)=[0;0;0];
sof(:,2)=ab10g;
sof(:,3)=ab10g+ab20g;
for i=1:3
    for j=1:3
        if j<i
rhoLF(:,j,i)=zeros(3,1);
        else
rhoLF(:,j,i)=scf(:,j)-sof(:,i);
        end
    end
end
h1=(m_ul*cross(eb10g,rhoLF(:,1,1)))+(m_ll*cross(eb10g,rhoLF(:,2,1)))+(m_foot*cross(eb10g,rhoLF(:,3,1)));
h2=(m_ll*cross(eb20g,rhoLF(:,2,2)))+(m_foot*cross(eb20g,rhoLF(:,3,2)));
h3=m_foot*(cross(eb30g,rhoLF(:,3,3)));

hLF =[h1 h2 h3];



end
