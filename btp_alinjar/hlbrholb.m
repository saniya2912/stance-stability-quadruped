function [hLB,rhoLB] = hlbrholb(ed10g, ed20g, ad10g, cmd2, cmd1, cmd3, ed30g, ad20g)
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
rhoLB=zeros(3,3,3);
scf(:,1)=cmd1;
scf(:,2)=ad10g+cmd2;
scf(:,3)=ad10g+ad20g+cmd3;
sof(:,1)=[0;0;0];
sof(:,2)=ad10g;
sof(:,3)=ad10g+ad20g;
for i=1:3
    for j=1:3
        if j<i
rhoLB(:,j,i)=zeros(3,1);
        else
rhoLB(:,j,i)=scf(:,j)-sof(:,i);
        end
    end
end
h1=(m_ul*cross(ed10g,rhoLB(:,1,1)))+(m_ll*cross(ed10g,rhoLB(:,2,1)))+(m_foot*cross(ed10g,rhoLB(:,3,1)));
h2=(m_ll*cross(ed20g,rhoLB(:,2,2)))+(m_foot*cross(ed20g,rhoLB(:,3,2)));
h3=m_foot*(cross(ed30g,rhoLB(:,3,3)));

hLB =[h1 h2 h3];



end
