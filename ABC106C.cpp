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
    string n;
    ll int k;
    cin >>n;
    cin >> k;
    if(k==1)cout << n[k-1];
    else{
        int a1=1;
        for(ll int i=0;i<k && i<n.size() ;i++){
            if(n[i]!='1'){
                cout << n[i]<<endl;
                a1=0;
                break;
            }
        }
        if(a1){
            cout << 1 <<endl;
        }
    }

}
