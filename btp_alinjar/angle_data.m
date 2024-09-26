theta1=LAnkle_measures.angle.data;
theta2=LKnee_measures.angle.data;
theta3=LHip_measures.angle.data;
theta4=RHip_measures.angle.data;
theta5=RKnee_measures.angle.data;
theta6=RAnkle_measures.angle.data;
%%
dtheta1=LAnkle_measures.speed.data;
dtheta2=LKnee_measures.velocity.data;
dtheta3=LHip_measures.velocity_hip.data;
dtheta4=RHip_measures.velocity.data;
dtheta5=RKnee_measures.velocity_knee.data;
dtheta6=RAnkle_measures.speed.data;
%theta1 and theta6 are conforming limit cycle-dynamic stability confirmed
%%

%%
% figure
% plot(theta1(13000:14179),dtheta1(13000:14179))
% figure
% plot(theta6(13000:14179),dtheta6(13000:14179))
figure


% plot(theta1(7000:7920),dtheta1(7000:7920))
% axis('equal')