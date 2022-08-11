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
    int n;
    string a,b,s,t;
    cin >> s>>t;
    a=s;
    b=t;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a!=b ){
        cout <<"No\n";
        return 0;
    }
    else{
        n=a.size();
        for(int i=0;i<n;i++){
            //cout << s <<" "<<t<<endl;
            if(s==t){

                cout <<"Yes\n";
                return 0;
            }
            char temp;
            temp=s[n-1];
            s=temp+s.substr(0,n-1);
        }
        cout <<"No\n";
        return 0;
    }
}





