for i=1:10000
    a1(:,i)=aRF.data(:,1,i);
     a2(:,i)=aRF.data(:,2,i);
     a1norm(i)=norm(a1(:,i));
       a2norm(i)=norm(a2(:,i));
end