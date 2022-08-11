n=int(input())

def chk(s):
    if(s[0]==s[4] and s[1]==s[3]):
        return True
    return False

for i in range(n):
    s=input()
    a,b=s.split()
    b=int(b)
    ans=0
    ini=a
    while(1):
        #print(a , ini)
        if(chk(a)):
            ans+=1
        h,m=a.split(":")
        m=int(m)+b
        r=0
        if(m>=60):
            r=m//60
            m-=60*r
        if(m<10):
            m='0'+str(m)
        else:
            m=str(m)
        h=int(h)+r
        if(h>24):
            h-=24
        if(h<10):
            h='0'+str(h)
        elif(h==24):
            h="00"
        else:
            h=str(h)
        a=h+":"+m
        if(ini==a):
            break
    print(ans)

        
