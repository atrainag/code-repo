import random

n= int(input())
k="1"*n
x=random.randint(10**(n-1),9*int(k))
x=str(x)
o=0
e=0

while(1):
    e=0
    o=0
    for i in range(0,len(x)):
        if(int(x[i])%2==0):
            e+=1
        else:
            o+=1
    if(o==e or abs(o-e)==1):
        break
    else:
        x=random.randint(10**(n-1),9*int(k))
        x=str(x)
for i in x:
    print(i,end=" ")
print("odd:",o,"even:",e)
