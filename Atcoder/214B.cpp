#include <iostream>
#include <cmath>
#define rep(i,n) for(int i = 1;i<n;i++)
using namespace std;

int main(){
    int s,t,q=0;
    cin >> s>>t;

    int x =  ((3)*(powl(s,2)) + (3) *s)/2+ 1;
    rep(i,s){
        rep(j,s){
            rep(k,s){
                if(i*j*k <= t && i+j+k<=s){
                   //cout << i<<" "<<j<<" "<<k<<" : "<< i*j*k << " "<< i+j+k<<endl;
                    q++;
                }
            }
        }
    }
    cout << q+x<<endl;
}


