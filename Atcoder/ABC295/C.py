n = int(input())

s = [int(i) for i in input().split()]

flg = []
ans=0
for i in s:
    #print(ans,i,flg)
    if (i in flg):
        flg.remove(i)
        ans+=1
    else:
        flg.append(i)

print(ans)
