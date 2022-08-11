#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>

#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)

using namespace std;

int main(){
    long long int n,x;
    cin >> n;
    rep(i,n){
        cin >> x;
        if(x==1||x==2){
            cout << 0<<endl;
        }
        else{
            if(x%2==0){
                cout <<x/2-1<<endl;
            }
            else{
                cout <<x/2<<endl;
            }
        }
    }
}

