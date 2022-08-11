#include <iostream>

using namespace std;

int main(){
    int x,y,a[6][6];
    bool found=false;
    for(int i = 0 ; i < 5 ; i++){
        for(int j =0  ; j < 5 ; j++){
            cin >>a[i][j] ;
            if(a[i][j]>0){
                x=i;
                y=j;
            }
        }
    }
    cout << abs(x-2)+abs(y-2);
}




