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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> x(n);
        int lo=99999999;
        for(int i=0;i<n;i++){
            cin >> x[i];
            lo=min(x[i],lo);
        }
        int tot=0;
        for(int i=0;i<n;i++){
            if(x[i]!=lo){
                tot+=abs(x[i]-lo);
            }
        }
        cout << tot <<endl;

    }
}

