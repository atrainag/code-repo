
#include <stdio.h>

void main(){
    int x;
    scanf("%d",&x);
    if(x>=6 && x<60){
        printf("全票\n");
    }
    else{
        printf("半票\n");
    }
}
