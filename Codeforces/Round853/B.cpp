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
        int flag=0,flag2=0;
        for(int i =0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                if(flag2){
                    flag = -1;
                    break;
                }
                flag++;
            }
            else{
                if(flag) flag2=1;
            }
        }
        if(flag==-1){
            cout <<"No\n";
        }
        else {
            cout <<"Yes\n";
        }

    }
}

