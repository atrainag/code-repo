#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

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
    int n;
    string s;
    cin >> n;
    rep(i,n){

        string x="";
        cin >>s;
        bool alt = true;
        rep(j,s.size()){
            if(j==s.size()-1){
                x+=s[j];
            }
            else if(j>=1 && j<=s.size()-2 && alt){
                x+=s[j];
                alt=false;
            }
            else if (j==0){
                x+=s[j];
            }
            else{
                alt=true;
            }
        }
        cout << x<<endl;
    }
}

