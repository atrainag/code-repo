n=int(input())
for i in range(n):
    near=True
    a,b=input().split()
    a=int(a)
    b=int(b)
    c=a*b
    x=[]
    j=1
    while(1):
        if(j>10**6):
            near=False
            break
        x.append(c*j)
        for i in range(0,len(x)):
            print(x[j-1]-a*i,a*i,x[j-1])
            if((x[j-1]-a*i)%a==0) and (x[j-1]-a*i != a*i):
                c=x[j-1]
                b=a*i
                a=x[j-1]-a*i
                break
        j+=1
    if(near):
        print("YES")
        print(a,b,c)
    else:
        print("NO")
