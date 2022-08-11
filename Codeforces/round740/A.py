n = int(input())
x=[]
for i in range(0,n):
    r=1
    l=int(input())
    x =list(map(int, input().split()))
    y = sorted(x)
    while(x!=y):
        for k in range(0,len(x)-1):
            #print(k)
            if(x[k]>x[k+1]):
                temp=x[k]
                x[k]=x[k+1]
                x[k+1]=temp
                #print(x)
        r+=1
    if(r==1):
        r-=1
    print(r)


          


