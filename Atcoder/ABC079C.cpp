#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    int x;
    cin >> x;
    char e='+',f='+',g='+';
    d=x%10;
    x/=10;
    c=x%10;
    x/=10;
    b=x%10;
    x/=10;
    a=x;
    int ans=0;
    for(int i=0;i<2;i++){
        if(i==1)e='-';
        else e='+';
        for(int j=0;j<2;j++){
            if(j==1)f='-';
            else f='+';
            for(int k=0;k<2;k++){
                if(k==1)g='-';
                else g='+';
                int tot = a;
                if(e=='+'){
                    tot+=b;
                }
                else{
                    tot-=b;
                }
                if(f=='+'){
                    tot+=c;
                }
                else{
                    tot-=c;
                }
                if(g=='+'){
                    tot+=d;
                }
                else{
                    tot-=d;
                }
                //cout << e<<f<<g<<" "<<tot <<endl;
                if(tot==7){
                    ans=1;
                    break;
                }
            }
            if(ans)break;
        }
        if(ans)break;
    }
    cout << a << e<<b<<f<<c<<g<<d<<"=7\n";

}
