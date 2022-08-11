import math
n,k=input().split()
n=int(n)
k=int(k)

x=[int(i) for i in input().split()]
a=[]
b=[]

for i in range(0,n):
    q,r=input().split()
    a.append(int(q))
    b.append(int(r))

ma=-1

temp=0
for i in range(0,n):
    mi=9999999999
    for j in range(0,k):
        if(i+1 in x):
            continue
        
        temp=math.sqrt( abs(a[x[j]-1]-a[i])**2+abs(b[x[j]-1]-b[i])**2)
        #print(a[x[j]-1],b[x[j]-1],a[i],b[i],temp,mi)
        if(mi>temp):
            mi=temp
    if(ma<mi and mi != 9999999999):
        ma=mi
    #print (ma)

print(ma)
