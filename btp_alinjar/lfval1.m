function [eb_dg1,eb_dg2,eb_dg3,rho_dotLF] = lfval1(eb1g,eb2g,ab1g,ab2g, eb3g, vlinks, w_torso, td1, v_torso, td2, td3)
w0=w_torso;
w1=w0+eb1g*td1;
w2=w1+eb2g*td2;
w3=w2+eb3g*td3;

eb_dg1=cross(w1,eb1g);
eb_dg2=cross(w2,eb2g);
eb_dg3=cross(w3,eb3g);


vcf=zeros(3,3);
vof=zeros(3,3);
rho_dotLF=zeros(3,3,3);
vcf(:,1)=vlinks(4);
vcf(:,2)=vlinks(5);
vcf(:,3)=vlinks(6);
vof(:,1)=v_torso;
vof(:,2)=vof(:,1)+cross(w1,ab1g);
vof(:,3)=vof(:,2)+cross(w2,ab2g);
for i=1:3
    for j=1:3
        if j<i
rho_dotLF(:,j,i)=zeros(3,1);
        else
rho_dotLF(:,j,i)=vcf(:,j)-vof(:,i);
        end
    end
end

end
