t = int(input())


while(t):
    a=[]
    b=[]
    x=[]
    n= int(input())
    an=n//2
    if(n%2!=0):
        an+=1
    bn = n-an
    
    for i in range(an-1,-1,-1):
        a.append(i+1)
    for i in range(n-1,bn-1,-1):
        b.append(i+1)
        
    aidx=0
    bidx=0

    for i in range(0,n):
        if(i%2==0):
            x.append(a[aidx])
            aidx+=1
        else:
            x.append(b[bidx])
            bidx+=1

    for i in range(0,n):
        print(x[i],end="")
        if(i!=n-1):
            print(" ",end="")
    print()
    t-=1
