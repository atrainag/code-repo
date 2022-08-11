#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,a,n) for(int i=a ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,n,x;
    cin >> a>>b;
    n=max(a,b);
    x=min(a,b);
    if((n+x)%2==0){
        if(n==x){
            cout << n<<" "<<0;
        }
        else{
            cout <<x  <<" "<< (n-x)/2;
        }
    }else{
        cout <<  x<<" "<< (n-x)/2;
    }
}

