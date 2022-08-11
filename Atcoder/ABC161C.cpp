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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int n,k,lo=0,telo=0;
    cin >> n>>k;
    cout << min(n%k,abs(n%k-k));
    /*
    while(1){
        lo=min(lo,abs(lo-k));
        if(lo==telo){
            break;
        }
        telo=lo;
    }
    cout <<lo<<endl;*/
}

