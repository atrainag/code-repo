#include <stdio.h>
#include <math.h>

int isPrime(int x){
    int d=2;
    while(d<=floor(sqrt(x))){
        if(x%d==0){
            return 0;
        }
        d++;
    }
    return 1;
}
void main(){
    int i;
    int changeline=0;
    for(i =2;i<100;i++){
        if(isPrime(i)){
            printf("%-10d",i);
            changeline++;
            if(changeline==5){
                printf("\n");
                changeline=0;
            }
        }
    }
}
