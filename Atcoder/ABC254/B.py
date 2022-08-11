import math

n=int(input())

def f(n):
    return math.factorial(n)

def com(n,r):
    return f(n)/(f(n-r)*f(r))

for i in range(0,n):
    for j in range(0,i+1):
        print(int(com(i,j)),end=" ")
    print()
