import sys
sys.setrecursionlimit(100005)

n,m=[int(i) for i in input().split()]

u=[]
vis=[]
def check(g):
    global vis
    global u
    global n
    if(vis[g]==1):
        return
    vis[g]=1
    for i in u[g]:
        check(i)
    return
        
    
for i in range(0,n):
    u.append([])
    vis.append(0)
    
for i in range(0,m):
    a,b=[int(i) for i in input().split()]
    u[a-1].append(b-1)
    u[b-1].append(a-1)
    
if(n!=m+1):
    print("No")

else:
    on=0
    to=0

    for i in range(0,n):
        if(len(u[i])==1):
            on+=1
        elif(len(u[i])==2):
            to+=1

    if(on==2 and to==n-2):
        
        check(0)
        if(vis.count(1)!=n):
            print("No")
        else:
            print("Yes")
    else:
        print("No")
