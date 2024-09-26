function [ed_dg1,ed_dg2,ed_dg3,rho_dotLB] = lbval1(ed1g,ed2g,ad1g,ad2g, ed3g, vlinks, w_torso, td1, v_torso, td2, td3)
w0=w_torso;
w1=w0+ed1g*td1;
w2=w1+ed2g*td2;
w3=w2+ed3g*td3;

ed_dg1=cross(w1,ed1g);
ed_dg2=cross(w2,ed2g);
ed_dg3=cross(w3,ed3g);


vcf=zeros(3,3);
vof=zeros(3,3);
rho_dotLB=zeros(3,3,3);
vcf(:,1)=vlinks(10);
vcf(:,2)=vlinks(11);
vcf(:,3)=vlinks(12);
vof(:,1)=v_torso;
vof(:,2)=vof(:,1)+cross(w1,ad1g);
vof(:,3)=vof(:,2)+cross(w2,ad2g);
for i=1:3
    for j=1:3
        if j<i
rho_dotLB(:,j,i)=zeros(3,1);
        else
rho_dotLB(:,j,i)=vcf(:,j)-vof(:,i);
        end
    end
end

end
