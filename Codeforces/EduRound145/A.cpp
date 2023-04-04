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
        string s;
        vector<int> a(10,0);
        cin >>s ;
        for(int i =0;i<4;i++){
            a[s[i]-'0']++;
        }
        int ans=-1;
        int flg=0;
        for(int i=0;i<10;i++){
            if(a[i]==4){
                ans = -1;
                break;
            }
            else if(a[i]==3){
                ans = 6;
                break;
            }
            else if(a[i]==2 || (a[i]==1 && flg)){
                flg =1;
                ans = 4;
                break;
            }
            else if(a[i]==1){
                ans = 4;
            }
        }
        cout << ans <<endl;
    }
}

