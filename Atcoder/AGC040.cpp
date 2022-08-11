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
#define repv(i,s) for(int i=0;i<s.size();i++)

using namespace std;

void prtv(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    ll int l=0,r=0,ans=0;
    repv(i,s){
        if(s[i]=='>'){
            if(s[i+1]=='<'||i==s.size()-1){
                r++;
                if(r==1){
                    r=0;
                    cout << ans <<" "<<r<<" "<<l<<endl;
                    continue;
                }
                ans+=(r*(r+1))/2;
                r=0;
            }
            else if(s[i+1]=='>'||i==s.size()-1){
                r++;

            }
        }
        else{
            if(s[i+1]=='<'||i==s.size()-1){
                l++;
            }
            else if(s[i+1]=='>'||i==s.size()-1){
                l++;
                if(l==1){
                    l=0;
                    cout << ans <<" "<<r<<" "<<l<<endl;
                    continue;
                }
                ans+=(l*(l+1))/2;
                l=0;
            }
        }
        cout << ans <<" "<<r<<" "<<l<<endl;
    }


}

