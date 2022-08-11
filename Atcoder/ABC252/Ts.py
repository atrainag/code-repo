cnt=0
for a in range(1,10):
    for b in range(1,10):
        if(b>a or a==1 ):
            for c in range(1,10):
                if(c>b or b==1):
                    for d in range(1,10):
                        if(d>c or c==1):
                            for e in range(1,10):
                                if(e>d or d==1):
                                    for f in range(1,10):
                                        if(f>e or e==1):
                                            for g in range(1,10):
                                                if(g>f or f==1):
                                                    for h in range(1,10):
                                                        if(h>g or g==1):
                                                            for i in range(1,10):
                                                                if(i>h or h==1):
                                                                    for j in range(1,10):
                                                                        if(j>i or i==1):
                                                                            for k in range(1,10):
                                                                                if(k>j):
                                                                                    cnt+=1
                                                                                print(a,b,c,d,e,f,g,h,i,j,k)

