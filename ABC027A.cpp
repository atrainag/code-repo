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
    int x,n;
    cin >> n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(x==a[i]){
                ans++;
            }
        }
        else if(x>=a[i]){
            x-=a[i];
            ans++;
        }

    }
    cout << ans <<endl;
}






