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

ll int smd(ll int x){
    ll int sm=0;
    while(x>0){
        sm+=x%10;
        x/=10;
    }
    return sm;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int t;
    cin >> t;
    while(t--){
        ll int n;
        cin >> n;
        long long int x = (n+1)/2;
        ll int y = n-x;
        if(abs(smd(y)-smd(x))>1){
            int k = (n-9)/10;
            x=5,y=4;
            if(k>0){
                if(k%2==0){
                    y+=10*(k/2);
                    x+=10*(k/2);
                }
                else{
                    x+=10*(k/2);
                    y+=10*((k/2)+1);
                }
            }
        }
        cout << x << " " << y <<" "<<   endl;
    }
}
