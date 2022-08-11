#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>
#include <string>

#define all(x) x.begin(),x.end()
#define last(x) x.size()-1
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define semoga using
#define bisa namespace
#define menang std;

semoga bisa menang

int dif(string a, string b){
    int diff=0;
    for(int i=0;i< a.size();i++){
        diff+=abs((int)a[i]-(int)b[i]);
    }
    return diff;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<string> x(n);
        for(int i=0;i<n;i++){
            cin >> x[i];
        }
        int lo=99999999;
        for(int i=0;i<n ;i++){
            for(int j=i+1;j<n;j++){
                lo=min(lo,dif(x[i],x[j]));
            }
        }
        cout << lo <<endl;
    }
}

