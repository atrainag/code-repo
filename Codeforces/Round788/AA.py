for x in range(int(input())):
    can = True
    re = False
    minus = 0
    slope = 0
    input()
    a = [int(i) for i in input().split()]
    for i in a:
        if i < 0:
            minus += 1
            a[a.index(i)] = abs(i)
    if a[0] > a[1]:
        re = True
        slope = 1
    for i in range (0, len(a) - 1):
        if a[i] < a[i+1] and not re:
            continue
        elif a[i] > a[i+1] and re:
            slope += 1
            continue
        elif re:
            re = False
        else:
            can = False
    if minus != slope:
        can = False
    print("YES") if can else print("NO")
