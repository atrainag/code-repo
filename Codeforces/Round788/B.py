for i in range(int(input())):
    input()
    s=input()
    x=input().split()
    k=x[0]
    x.remove(x[0])
    skip=1
    for i in x:
        #print(i)
        if(i in s):
            skip=0
            break
    if(skip):
        print(0)
        continue
    temp=""
    cnt=0
    end=False
    while(1):
        end=False
        for i in range(0,len(s)-1):
            if(not s[i+1] in x):
                temp+=s[i]
            else:
                end=True
        temp+=s[-1:]
        if(not end):
            break
        s=temp
        temp=""
        cnt+=1
        #print(s)
    print(cnt)
