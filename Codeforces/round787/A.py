n=int(input())
for i in range(n):
    a,b,c,d,e=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    d=int(d)
    e=int(e)
    cat=1
    dog=1
    if(a>=d):
        dog=1
    elif(a+c>=d):
        c-=(d-a)
    else:
        dog=0
    if(b>=e):
        cat=1
    elif(b+c>=e):
        cat=1
    else:
        cat=0
    if(cat and dog):
        print("YES")
    else:
        print("NO")
