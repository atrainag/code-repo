#include <iostream>

using namespace std;

int main(){
    long long int t,x,y,r=0;
    cin >> t;
    for(int i =0 ; i < t ;i++){
        cin >> x >>y;
        if(x==0 && y%2==1){
            cout << "NO\n";
        }
        else if( x%2==0){
            cout <<"YES\n";
            
        }
        else{
            cout << "NO\n";
        }
    }
}