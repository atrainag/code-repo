n=int(input())

for i in range (0,n):
    x=input()
    t=input()
    pos=[]
    sus=1
    if(len(x)==1):
        if(x==t):
            sus=0;
    else:
        for j in range(0,len(x)):
            if(x[j]==t):
                pos.append(j)
        
        for j in pos:
            #print(j , (len(x)+1)/2-1)
            if(j%2==0):
                sus=0
                break
            
    if(not sus):
        print("YES")
    else:
        print("NO")
