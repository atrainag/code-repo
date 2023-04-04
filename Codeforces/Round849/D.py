t = int(input())

while(t):
    t-=1
    n=int(input())
    s = input()
    h = []
    cnt=[]
    cur=0
    ans=[]
    for i in range(0,len(s)):
        print(i)    
        if(not s[i] in h ):
            h.append(s[i])
            cur+=1
            cnt.append(cur)
        else:
            ans.append(cur) 
            cur=1
            h=[]
            h.append(s[i])
            cnt.append(cur)
        if(i==len(s)-1):
            ans.append(cur)
    print(ans)      
    ans=sorted(ans)
    if(len(ans)==1):
        print(ans[0])
    else :
        print(ans[len(ans)-1]+ans[len(ans)-2])
    
