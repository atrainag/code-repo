n=int(input())

x=[2,3,3,3,3,3,3,3,2]
y=[]
cnt=0

if(n==2):
    for i in range(0,9):
        cnt+=x[i]
    print(cnt)
else:
    for j in range(0,n-2):
        y=[]
        for i in range(0,9):
            if(i==0):
                y.append((x[0]+x[1])%998244353)
            elif(i==8):
                y.append((x[8]+x[7])%998244353)
            else:
                y.append((x[i-1]+x[i]+x[i+1])%998244353)
       
        x=y
     
    for i in range(0,9):
        cnt=(cnt+y[i])%998244353
    print(cnt)
