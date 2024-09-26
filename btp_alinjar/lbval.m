function [ed1g,ed2g,ed3g,ad1g,ad2g,cmd1g,cmd2g,cmd3g,Qd3g] = lbval(qhd,qad,Qquat, qkd)
%%
lower_leg_length = 10;
upper_leg_length = 10;
foot_offset=[-1; 0; 0];

%%
Qd0g=quat2rotm([Qquat(1) Qquat(2) Qquat(3) Qquat(4)]);
Qd10=[cos(qhd) 0 sin(qhd);
      0 1 0 ;
      -sin(qhd) 0 cos(qhd)];
Qd1g=Qd10*Qd0g;
  
Qd21=[cos(qkd) 0 sin(qkd);
      0 1 0 ;
      -sin(qkd) 0 cos(qkd)];
  
Qd32=[1 0 0;
      0 cos(qad) -sin(qad);
      0 sin(qad) cos(qad)];
  
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
ed1g = Qd1g*ed1l;
ed2g = Qd2g*ed2l;
ed3g = Qd3g*ed3l;

%link vector in global frame
ad1g = Qd1g*ad1l;
ad2g = Qd2g*ad2l;

%COM distances in base frame
cmd1g=ad1g/2;
cmd2g=ad2g/2;
cmd3g=Qd3g*foot_offset;


end

