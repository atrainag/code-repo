n=int(input())

for i in range(0,n):
    lst=[]
    x=int(input())
    j=0
    while(len(str(x))>0 and  x!=0):
        #print(x)
        if(x%(10**(j+1))!=0):
            lst.append(x%(10**(j+1)))
            x-=x%(10**(j+1))
        elif(j==len(str(x))):
            lst.append(x)
            break
        j+=1
    print(len(lst))
    for i in lst:
        print(i,end=" ")
    print()
            
            
        
        
