function sumodd(N)

sum=0;
count=1;
while ne(count,N)
    if ne(mod(count,2),0)
        sum=sum+count;
    else 
        sum=sum;
    end
    count=count+1;
end
end

