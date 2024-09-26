%i=7000;
for i=20624
    
    T=pplot.time(i);
    x=pplot.data(1,:,i);
    y=pplot.data(2,:,i);
    %plot(x,y)
    P=transpose([x;y]);
    k=convhull(P);
    plot(P(k,1),P(k,2));

    hold on 
    zmp=zmp_fromN.data(i,:);
    plot(zmp(1),zmp(2),'*')
    hold on
end