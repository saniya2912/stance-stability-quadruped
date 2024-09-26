function [ec_dg1,ec_dg2,ec_dg3,rho_dotRB] = rbval1(ec1g,ec2g,ac1g,ac2g, ec3g, vlinks, w_torso, td1, v_torso, td2, td3)
w0=w_torso;
w1=w0+ec1g*td1;
w2=w1+ec2g*td2;
w3=w2+ec3g*td3;

ec_dg1=cross(w1,ec1g);
ec_dg2=cross(w2,ec2g);
ec_dg3=cross(w3,ec3g);


vcf=zeros(3,3);
vof=zeros(3,3);
rho_dotRB=zeros(3,3,3);
vcf(:,1)=vlinks(7);
vcf(:,2)=vlinks(8);
vcf(:,3)=vlinks(9);
vof(:,1)=v_torso;
vof(:,2)=vof(:,1)+cross(w1,ac1g);
vof(:,3)=vof(:,2)+cross(w2,ac2g);
for i=1:3
    for j=1:3
        if j<i
rho_dotRB(:,j,i)=zeros(3,1);
        else
rho_dotRB(:,j,i)=vcf(:,j)-vof(:,i);
        end
    end
end

end
