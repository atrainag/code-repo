
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
#define menang std;

semoga bisa menang


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int st=0,cnt=0,ans=0;
    rep(i,s.size()){
        if(s[i]=='A' && st==0){
            st=1;
            cnt++;
        }
        else if(s[i]=='Z' && st !=0){
            cnt++;
            ans=cnt;
        }
        else if(st!=0 ){
            cnt++;
        }
    }
    cout << ans <<endl;

}







