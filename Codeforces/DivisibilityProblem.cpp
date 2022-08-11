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
    int n,x,y,t;
    cin >> n;
    rep(i,n){
        cin >> x >> y;
        if(x%y==0){
            cout << 0 <<endl;
        }
        else{

            cout << (x/y+1) *y-x<<endl;
        }
    }
}

