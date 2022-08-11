#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

bool prime(int x){
    int d=2;
    while(d<=sqrt(x)){
        if(x%d==0){
            return false;
        }
        d++;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i=4;
    cin >> n;
    while(i<n){

        if( !prime(i) && !prime(n-i)){
            cout << i << " " << n-i<<endl;
            break;
        }
        i++;
    }
}

