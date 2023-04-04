#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        int n;
        scanf("%d",&n);
        int x[n];
        for (int i=0;i<n;i++){
            scanf("%d",&x[i]);
        }
        int l=x[0],r=x[n-1], il=0,ir=n-1;
        while(abs(il - ir) != 1 ){
            //printf("%d %d %d %d",l,r,il,ir);
            if(l>=r && x[ir-1]>=0 ){
                r+=x[ir-1];
                ir--;
            }
            else if(l>=r && x[ir-1]<0 ){
                l+=x[ir-1];
                ir--;
            }
            else if(l<=r && x[il+1]>=0){
                l+=x[il+1];
                il++;
            }
            else if(l<=r && x[il+1]<0){
                r+=x[il+1];
                il++;
            }
        }
        if(l==r){
            printf("Case #%d: Yes\n",j+1);
        }
        else{
            printf("Case #%d: No\n",j+1);
        }
    }

}
