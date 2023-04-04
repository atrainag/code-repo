#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x<0){
        x*=-1;
    }
    printf("%d",x);
}
