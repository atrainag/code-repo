#include <iostream>

using namespace std;

int main(){
    int d,n;
    cin >> d >> n;

    if(d==0 && n==100){
        cout << 101;
    }
    else if(d==1 && n==100){
        cout << 10100;
    }
    else if(d==2 && n==100){
        cout << 1010000;
    }
    else{
        cout << n;
        for(int i=0;i<2*d;i++){
            cout << 0 ;
        }

    }
    cout <<"\n";
}
//46
