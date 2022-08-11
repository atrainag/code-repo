
poww=[ 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648, 4294967296]

for j in range(int(input())):
    count=0
    cannot=0
    input()
    a=[int(i) for i in input().split()]
    for i in range(len(a)-1,0,-1):
        #print(a[i],a[i-1])
        if(a[i]>a[i-1]):
            continue
        for k in range(0,32):
            if(a[i-1]//poww[k]<a[i]):
                #print(a[i-1],poww[k],a[i])
                a[i-1]//=poww[k]
                count+=k+1
                break
            if(a[i]==0):
                cannot=1
                break
        if(cannot):
            break
        print(a)
    if(cannot):
        print(-1)
    else:
        print(count)
