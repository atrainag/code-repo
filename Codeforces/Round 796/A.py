for i in range(int(input())):
    x=int(input())
    y=1
    while(1):
        if(x&y>0 and x^y>0):
            break
        y+=1
    print(y)
