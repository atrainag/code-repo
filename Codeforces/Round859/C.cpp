
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
#include <cstring>

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
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while(t--){
        cin >>n ;
        string s;
        cin >> s;
        vector<char> o,e;
        for(int i =0;i<n;i++){
            if(i%2==0){
                e.push_back(s[i]);
            }
            else o.push_back(s[i]);
        }
        int ans=1;
        for(int i = 0;i<e.size();i++){
            for(int j = 0;j<o.size();j++){
                if(e[i]==o[j]){
                    ans=0;
                }
            }
        }
        if(ans)cout << "YES\n";
        else cout <<"NO\n";
    }
}

