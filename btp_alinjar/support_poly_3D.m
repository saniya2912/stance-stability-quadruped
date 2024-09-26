%i=7000;
for i=2000
    T=pplot.time(i) 
    x=pplot.data(1,:,i);
    y=pplot.data(2,:,i);
    z=[zeros(1,8),3*ones(1,8)];
    %plot(x,y)
    %P=transpose([x;y;z]);
    [k1,av1] = convhull(x,y,z);

    trisurf(k1,x,y,z,'FaceColor','cyan')
    %axis equal
    xlabel('X');
    ylabel('Y');
    zlabel('Z');

    hold on 
    zmp=zmp_fromN.data(i,:);
    plot(zmp(1),zmp(2),'*')
    hold on
    
end
