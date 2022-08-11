#include <iostream>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;

int main(){
    int s,t,q=0;
    cin >> s>>t;
    int n = max(s,t)+1;
    rep(i,n){
        rep(j,n){
            rep(k,n){
                if(i*j*k <= t && i+j+k<=s){
                        cout << i<<" "<<j<<" "<<k<<" : "<< i*j*k << " "<< i+j+k<<endl;
                    q++;
                }
            }
        }
    }
    cout << q<<endl;
}

