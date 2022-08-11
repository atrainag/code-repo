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

void prtv(vector<ll int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i]<<"\n";
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    vector<ll int> ans;
    while(t--){
        ll int x,y=1;
        cin >> x;

        if(x%2==1){
            if(x==1){
                ans.push_back(3);
                continue;
            }
            else{
                ans.push_back(1);
                continue;
            }
        }
        while(1){
            if( (x&y)>0 && (x^y)>0){
                break;
            }
            if((x&y)==y && (x^y)==0){
                y++;
            }
            else{
                y=y<<1;
            }
        }
        ans.push_back(y);


    }
     prtv(ans);

}

