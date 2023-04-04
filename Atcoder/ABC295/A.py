n = int(input())

s = [i for i in input().split()]

flg = ["and", "not", "that", "the","you"]
ans=0
for i in s:
    if (i in flg):
        ans+=1
if(ans>=1):
    print("Yes")
else:
    print("No")
