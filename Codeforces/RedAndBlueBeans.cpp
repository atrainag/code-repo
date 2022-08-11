#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,r,b,d,ans;
    cin >> n;
    for(int i = 0 ; i < n ;i++){
        cin >> r >> b >> d;
        if(r==b||d==0){

            if(r==b&&d==0){
                cout <<"YES\n";
            }
            else{cout <<"NO\n";}
        }
        else if(r-b==1){
            if(d==0){
                cout <<"YES";
            }
            else{
                cout <<"NO";
            }
        }
        else if(abs(max(r,b)/min(r,b)-1) <=d){
            cout <<"YES\n";
        }
        else{cout <<"NO\n";}
    }
}

