t = int(input())

while(t):

    n = int(input())
    s = input()
    q=0
    a=0
    for i in range(0,len(s)):
        if(s[i]=='Q'):
            q+=1
        if(s[i]=='A'):
            if(q!=0):
                q-=1
    if(q==0):
        print("Yes")
    else :
        print("No")
    t-=1
