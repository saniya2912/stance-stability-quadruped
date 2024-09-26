function [ea_dg1,ea_dg2,ea_dg3,rho_dotRF] = rfval1(ea1g,ea2g,aa1g,aa2g, ea3g, vlinks, w_torso, td1, v_torso, td2, td3)
w0=w_torso;
w1=w0+ea1g*td1;
w2=w1+ea2g*td2;
w3=w2+ea3g*td3;
%e dot = omega X e
ea_dg1=cross(w1,ea1g);
ea_dg2=cross(w2,ea2g);
ea_dg3=cross(w3,ea3g);


vcf=zeros(3,3);
vof=zeros(3,3);
rho_dotRF=zeros(3,3,3);
vcf(:,1)=vlinks(1);
vcf(:,2)=vlinks(2);
vcf(:,3)=vlinks(3);
vof(:,1)=v_torso;
vof(:,2)=vof(:,1)+cross(w1,aa1g);
vof(:,3)=vof(:,2)+cross(w2,aa2g);
for i=1:3
    for j=1:3
        if j<i
rho_dotRF(:,j,i)=zeros(3,1);
        else
rho_dotRF(:,j,i)=vcf(:,j)-vof(:,i);
        end
    end
end

end
