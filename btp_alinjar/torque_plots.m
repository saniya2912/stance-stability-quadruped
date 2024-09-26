%%
%Left_leg_torques
plot(LAnkle_measures.torque)
xlabel('time(s)')

hold on
plot(LKnee_measures.torque)
xlabel('time(s)')

hold on
plot(LHip_measures.torque_hip)
xlabel('time(s)')
ylabel('torques(N-m)')
%%
%Right_leg_torques
plot(RAnkle_measures.torque)
xlabel('time(s)')

hold on
plot(RKnee_measures.torque_knee)
xlabel('time(s)')

hold on
plot(RHip_measures.torque)
xlabel('time(s)')
ylabel('torques(N-m)')
legend('Right ankle','Right knee','Right hip')
%%
%Left leg angular velocity
plot(LAnkle_measures.speed)
xlabel('time(s)')

hold on
plot(LKnee_measures.velocity)
xlabel('time(s)')

hold on
plot(LHip_measures.velocity_hip)
xlabel('time(s)')
ylabel('angularvelocity(rad/s)')
legend('Left ankle','Left knee','Left hip')
%%
%Right_leg_angularvelocity
plot(RAnkle_measures.speed)
xlabel('time(s)')

hold on
plot(RKnee_measures.velocity_knee)
xlabel('time(s)')

hold on
plot(RHip_measures.velocity)
xlabel('time(s)')
ylabel('angularvelocity(rad/s)')
legend('Right ankle','Right knee','Right hip')
%%
%Left leg angular velocity
plot(LAnkle_measures.angle)
xlabel('time(s)')
hold on
plot(RAnkle_measures.angle)
xlabel('time(s)')
ylabel('angulardisplacement(rad)')
legend('Left ankle','Right ankle')
