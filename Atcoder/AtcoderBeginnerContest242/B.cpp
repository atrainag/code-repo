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
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<char> x;
    string s;
    cin >> s;
    rep(i,s.size()){
        x.push_back(s[i]);
    }
    sort(x.begin(),x.end());
    rep(i,s.size()){
        cout << x[i];
    }
}

