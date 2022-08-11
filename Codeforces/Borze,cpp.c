#include <stdio.h>

int len(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    char s[201],x[201]={};
    scanf("%s",s);
    int sz=len(s);
    int idx=0;
    for(int i=0 ; i <sz ;i++){
        if(s[i]=='-'){
            if(s[i+1]=='-'){
                x[idx]='2';
                i++;
            }
            else{
                x[idx]='1';
                i++;
            }
        }
        else if(s[i]=='.'){
            x[idx]='0';
        }
        idx++;
    }
    printf("%s\n",x);
}
