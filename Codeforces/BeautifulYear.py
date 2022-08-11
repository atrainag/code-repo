n=int(input())
n+=1
def dist(x):
    x=str(x)
    temp=[]
    for i in range(0,len(x)):
        temp.append(x[i])
    temp=sorted(temp)
    dupe=False
    for i in range(0,len(temp)-1):
        #print(temp[i],temp[i+1])
        if(temp[i]==temp[i+1]):
            dupe=True
            break
    return dupe

while (dist(n)):
    n+=1

print(n)


        
