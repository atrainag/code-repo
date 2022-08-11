x=1
n=int(input())
y=[int (i) for i in input().split()]
for a in y:
    x*=a

t=0
x-=1
for i in range(0,len(y)):
    t+=x%y[i]

print(t)
