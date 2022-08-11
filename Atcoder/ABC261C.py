x=[]
d={}
for i in range(int(input())):
    a=input()
    if(a in x):
        d[a]+=1
        print(a+"("+str(d[a])+")")
    else :
        d[a]=0
        x.append(a)
        print(a)
    
        
