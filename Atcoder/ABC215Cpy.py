s,n = input().split()

from itertools import permutations
a=permutations(list(s))

b=[]
for i in list(sorted(a)):
    print(i)
    x=i
    x=str(x)
    x=x.replace('\'',"")
    x=x.replace("(","")
    x=x.replace(')',"")
    x=x.replace(' ',"")
    x=x.replace(',',"")
    b.append(x)

j=0
while(j<len(b)-1):
    if(b[j]==b[j+1]):
        b.remove(b[j+1])
    else:
        j+=1
bug = True
for i in range(0,len(b)):
    #print(b[i])
    if(i==int(n)-1):
        print(b[i])
        bug = False
        break
'''
if(bug):
    #print(b[len(b)-1])
fak w ga bs pek
'''
