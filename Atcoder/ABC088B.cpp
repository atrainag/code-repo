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
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n){
        cin >>x[i];
    }
    sort(x.begin(),x.end());
    int sum=0,alt=0;
    rep(i,n){
        if(alt==0){
            sum+=x[n-i-1];
            alt=1;
        }
        else{
            sum-=x[n-i-1];
            alt=0;
        }
    }
    cout << sum<<endl;
}

