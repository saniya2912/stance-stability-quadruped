function [ea1g,ea2g,ea3g,aa1g,aa2g,cma1g,cma2g,cma3g,Qd3g] = rfval(qha,qaa,Qquat,qka)
%%
lower_leg_length = 10;
upper_leg_length = 10;
foot_offset=[-1; 0; 0];

%%
Qd0g=quat2rotm([Qquat(1) Qquat(2) Qquat(3) Qquat(4)]);
Qd10=[cos(qha) 0 sin(qha);
      0 1 0 ;
      -sin(qha) 0 cos(qha)];
Qd1g=Qd10*Qd0g;
  
Qd21=[cos(qka) 0 sin(qka);
      0 1 0 ;
      -sin(qka) 0 cos(qka)];
  
Qd32=[1 0 0;
      0 cos(qaa) -sin(qaa);
      0 sin(qaa) cos(qaa)];
  
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
ea1g = Qd1g*ed1l;
ea2g = Qd2g*ed2l;
ea3g = Qd3g*ed3l;

%link vector in global frame
aa1g = Qd1g*ad1l;
aa2g = Qd2g*ad2l;

%COM distances in base frame
cma1g=aa1g/2;
cma2g=aa2g/2;
cma3g=Qd3g*foot_offset;


end

