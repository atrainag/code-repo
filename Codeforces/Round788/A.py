for i in range(int(input())):
    input()
    x=[int(i) for i in input().split()]
    neg=0
    for i in x:
        if(i<0):
            neg+=1
            a=x.index(i)
            x[a]=abs(x[a])
    for i in range(0,neg):
        x[i]*=-1
    ans=1
    for i in range(0,len(x)-1):
        if(x[i]>x[i+1]):
            ans=0
    if(ans):
        print("YES")
    else:
        print("NO")
            
    
