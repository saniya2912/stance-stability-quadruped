Y= theta_d_des.data;
T=linspace(0,2,length(Y));
% plot(T,Y);
% figure
% Y= torqueRFknee.data;
% T=linspace(0,0.665,length(Y));
% plot(T,Y);
figure
 xxx=pos_com.data(1,:,:);



zz(:,1)=xxx(1,1,:);
zz(:,2)=xxx(1,2,:);
zz(:,3)=xxx(1,3,:);
plot(T,zz)