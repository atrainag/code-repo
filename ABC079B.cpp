#include <cstdio>

int main(){
    long long int a=2,b=1;
    long long int ans=0;
    int x;
    scanf("%d",&x);
    if(x==1) printf("%lld\n",b);
    else if(x==2) printf("%lld\n",a+b);
    else{
        ans=a+b;
        for(int i =2;i<x;i++){
            ans=ans+b;
            b=ans-b;
        }
        printf("%lld\n",ans);
    }
}
