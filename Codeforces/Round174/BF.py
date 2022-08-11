n=int(input())

for i in range(1,n):
    for j in range(1,n):
        for k in range (1,n):
            d1=abs(i-j)
            d2=abs(j-k)
            d3=abs(k-i)
            if(i+j+k>=d1*2+k and i+j+k>=d2*2+i and i+j+k>=d3*2+j ):
                print(i,j,k)
