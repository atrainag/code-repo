n,x,y=[int(i) for i in input().split()]

ans= (n//y)*x+ n- y*(n//y)
print(max(ans,n))
