t=int(input())

for q in range(t):
    n=int(input())
    x=[]
    for w in range(n):
        a=input()
        x.append(a)

    for i in range(0,n):
        s=[]
        for j in range(0,n):
            if(i==j):
                continue
            if(x[j] in x[i]):
                s.append(s[j])
