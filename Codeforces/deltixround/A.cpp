#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;

int main(){
    int n,a,b,c,d;
    cin >> n;
    rep(i,n){
        a=0;b=0;
        cin >> c >>d;
        if(c==d && c==0){
            cout <<0;
        }
        else if(c==d){cout <<1;}
        else if (abs(c-d)%2==0){
            cout << 2;
        }
        else if(abs(c-d)%2==1){
            cout << -1;
        }
        cout <<"\n";
    }
}
