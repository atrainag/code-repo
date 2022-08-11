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
    int t;
    cin >>t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        char mid;
        if(n%2==0){
            mid=s[n/2];
        }
        int ans=0;
        for(int i=n/2-1 ;i>=0;i--){
            if(s[i]==mid){
                ans++;
            }
            else{
                break;
            }
        }
        for(int i=n/2+1 ;i<n;i++){
            if(s[i]==mid){
                ans++;
            }
            else{
                break;
            }
        }
        if(ans!=0 || n%2==1s){
            ans++;
        }
        cout<< ans <<endl;
    }

}

