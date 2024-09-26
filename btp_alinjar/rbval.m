function [ec1g,ec2g,ec3g,ac1g,ac2g,cmc1g,cmc2g,cmc3g,Qd3g] = rbval(qhc,qac,Qquat,qkc)
%%
lower_leg_length = 10;
upper_leg_length = 10;
foot_offset=[-1; 0; 0];

%%
Qd0g=quat2rotm([Qquat(1) Qquat(2) Qquat(3) Qquat(4)]);
Qd10=[cos(qhc) 0 sin(qhc);
      0 1 0 ;
      -sin(qhc) 0 cos(qhc)];
Qd1g=Qd10*Qd0g;
  
Qd21=[cos(qkc) 0 sin(qkc);
      0 1 0 ;
      -sin(qkc) 0 cos(qkc)];
  
Qd32=[1 0 0;
      0 cos(qac) -sin(qac);
      0 sin(qac) cos(qac)];
  
Qd20 = Qd21* Qd10;
Qd30=Qd32*Qd20;
Qd2g=Qd20*Qd0g;
Qd3g=Qd30*Qd0g;

%axis in local frames
ed1l=[0;
      1;
      0];
ed2l=[0;
      1;
      0];
ed3l=[0;
     0;
     1];
  
%link vector in local frame
ad1l=[0;
      0;
      -upper_leg_length];
   
ad2l=[0;
      0;
      -lower_leg_length];
         
%axis in global frames
ec1g = Qd1g*ed1l;
ec2g = Qd2g*ed2l;
ec3g = Qd3g*ed3l;

%link vector in global frame
ac1g = Qd1g*ad1l;
ac2g = Qd2g*ad2l;

%COM distances in base frame
cmc1g=ac1g/2;
cmc2g=ac2g/2;
cmc3g=Qd3g*foot_offset;


end

