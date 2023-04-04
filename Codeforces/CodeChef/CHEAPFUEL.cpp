#include <iostream>

using namespace std;

int main(){
    int t,x,y,a,b,k;
    cin >> t ;
    for(int i =0 ; i <t ; i++){
        cin >> x >> y >> a >> b  >>k;
        for(int j=0 ; j < k ; j++){
            x+=a;
            y+=b;
        }
        if(x<y){
            printf("PETROL\n");
        }
        else if (x>y){
            printf("DIESEL\n");
        }
        else{
            printf("SAME PRICE\n");
        }
    }
}