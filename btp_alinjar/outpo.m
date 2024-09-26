function [eb1g,eb2g,eb3g,ab1g,ab2g,cmb1g,cmb2g,cmb3g] = outpo(qhb,qab,Qquat,qkb)
%%
lower_leg_length = 10;
upper_leg_length = 10;
foot_offset=[-1; 0; 0];

%%
Qd0g=quat2rotm(Qquat);
Qd10=[cos(qhb) 0 sin(qhb);
      0 1 0 ;
      -sin(qhb) 0 cos(qhb)];
Qd1g=Qd10*Qd0g;
  
Qd21=[cos(qkb) 0 sin(qkb);
      0 1 0 ;
      -sin(qkb) 0 cos(qkb)];
  
Qd32=[1 0 0;
      0 cos(qab) -sin(qab);
      0 sin(qab) cos(qab)];
  
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
eb1g = Qd1g*ed1l;
eb2g = Qd2g*ed2l;
eb3g = Qd3g*ed3l;

%link vector in global frame
ab1g = Qd1g*ad1l;
ab2g = Qd2g*ad2l;

%COM distances in base frame
cmb1g=ab1g/2;
cmb2g=ab2g/2;
cmb3g=Qd3g*foot_offset;


end

