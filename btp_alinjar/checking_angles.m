p=[];
for i=1:length(theta1)
    p(i)=l1*sin(theta1(i))+l2*sin(theta1(i)+theta2(i))+l3*sin(theta1(i)+theta2(i)+theta3(i))+l4*sin(theta1(i)+theta2(i)+theta3(i)+theta4(i))+l5*sin(theta1(i)+theta2(i)+theta3(i)+theta4(i)+theta5(i))+l6*sin(theta1(i)+theta2(i)+theta3(i)+theta4(i)+theta5(i)+theta6(i));
   if (p(i))^2<0.001 
       break
   end
i
p(i)
 q(i)=l1*cos(theta1(i))+l2*cos(theta1(i)+theta2(i))+l3*cos(theta1(i)+theta2(i)+theta3(i))+l4*cos(theta1(i)+theta2(i)+theta3(i)+theta4(i))+l5*cos(theta1(i)+theta2(i)+theta3(i)+theta4(i)+theta5(i))+l6*cos(theta1(i)+theta2(i)+theta3(i)+theta4(i)+theta5(i)+theta6(i));
end