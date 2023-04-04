

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
        int cnt=0;
        for(int i =0;i<s.size()-1;i++){
            if(cnt==0 && (s[i]=='m'||s[i]=='M') && (s[i+1]=='E'||s[i+1]=='e')){
                cnt++;
            }
            else if(cnt==1 && (s[i]=='e'||s[i]=='E') && (s[i+1]=='O'||s[i+1]=='o')){
                cnt++;
            }
            else if(cnt==2 && (s[i]=='o'||s[i]=='O') && (s[i+1]=='W'||s[i+1]=='w')){
                cnt++;
            }
            //((s[i]=='m'||s[i]=='M') || (s[i+1]=='E'||s[i+1]=='e')||(s[i]=='o'||s[i]=='O') || (s[i+1]=='W'||s[i+1]=='w'))
            else{
                if(cnt==0 && !(s[i]=='m'||s[i]=='M') ){
                    cnt=-1;
                    break;
                }
                else if(cnt==1 && !(s[i+1]=='E'||s[i+1]=='e') ){
                    cnt=-1;
                    break;
                }
                else if(cnt==2 && !(s[i]=='o'||s[i]=='O') ){
                    cnt=-1;
                    break;
                }
                else if(cnt==3 && !(s[i+1]=='W'||s[i+1]=='w') ){
                    cnt=-1;
                    break;
                }
            }
           // cout <<cnt <<endl;
        }

        if(cnt==3 && (s[s.size()-1]=='w' || s[s.size()-1]=='W')){
            cout <<"YES\n";
        }
        else cout <<"NO\n";
    }
}

