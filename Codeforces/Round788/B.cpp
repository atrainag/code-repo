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
        int n,k;
        string s;
        cin >> n>>s;
        cin >> k;
        vector<char> x(k);
        bool skip=true;
        for(int i=0 ; i <k;i++){
            cin >>x[i];
            for(int j=0 ; j < s.size();j++){
                if(x[i]==s[j]){
                    s[j]='1';
                }
            }
        }
        int cnt=-1,temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt=max(cnt,temp);
                temp=1;
            }
            else{
                temp++;
            }
        }
        cout << cnt <<endl;
    }
}

