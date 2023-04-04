
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
    int n,k;
    cin >> n>>k;
    string s;
    cin >> s;
    pair<int,int> lgx;
    lgx.first=0;
    int temp=0;
    vector<int> memy;
    for(int i =0;i<s.size();i++){
        if(s[i]=='Y'){
            temp++;
            memy.push_back(i);
        }
        if(s[i]=='X' || i == s.size()-1){
            //if(s[i]=='y')ny++;
            if(temp > lgx.fi){
                lgx.first=temp;
                lgx.se = i-temp;
                if(i==s.size()-1){
                    lgx.se+=1;
                }
            }
            temp=0;
        }
    }
    int l = lgx.se , r = lgx.se+lgx.fi;
    int posl=-1,posr=-1;
    for(int i =0;i<memy.size();i++){
        if(l==memy[i])posl=i;
        if(r==memy[i])posr=i;
    }
    while(k){

    }
   // cout << lgx.fi <<" "<<lgx.se<<endl;
    temp = 0;
    int ans=0;
    //cout << s <<endl;
    for(int i =0;i<s.size();i++){
        if(s[i]=='Y'){
            temp++;
        }
        if(s[i]=='X' || i == s.size()-1){
            if(temp > ans){
                ans=temp;
            }
            temp=0;
        }
    }
    cout << ans<<endl;
}

