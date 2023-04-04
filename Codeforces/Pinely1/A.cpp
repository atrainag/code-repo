#include <iostream>

using namespace std;

int main(){
    int n,t;
    int a,b;
    cin >> t;
    while(t--){
        cin >> n >> a >>b;
        if(a==n && b==n){
            cout <<"Yes\n";
        }
        else if(n<=3){
            cout <<"No\n";
        }
        else if(n%2==0){
            if((n-3>=a && n-5>=b || n-3>=b && n-5>=a ) && a+b<=n-2){
                cout <<"Yes\n";
            }
            else if(a== n/2 - 1 && b==n/2-1){
                cout <<"Yes\n";
            }
            else{
                cout <<"No\n";
            }
        }
        else if(n%2!=0){
            if((n-3>=a && n-4>=b || n-3>=b && n-4>=a  )&& a+b<=n-2){
                cout <<"Yes\n";
            }
            else{
                cout <<"No\n";
            }
        }

    }
}
