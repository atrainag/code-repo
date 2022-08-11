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
    int temp=0,tar=753,lo=999999999;
    for(int i=0;i<s.size()-2;i++){
        temp+=(s[i]-'0')*100;
        temp+=(s[i+1]-'0')*10;
        temp+=s[i+2]-'0';
        //cout << temp <<" "<<tar<<endl;
        lo=min(abs(temp-tar),lo);
        temp=0;
    }
    cout <<lo<<endl;
}



