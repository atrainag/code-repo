
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
    cin >> n >>k;
    vector<ll int> x(n);
    for(int i =0;i<n;i++){
        cin >>x[i];
    }
    if(k==0){
        cout <<"Yes\n";
        return 0;
    }
    sort(all(x));
    vector<ll int> dif;
    for(int i =0;i<n-1;i++){
        dif.push_back(x[i+1]-x[i]);
    }
    long long int wdw=0;
    int idx=0,st=0;
    while(wdw!=k){
        if(wdw<k && idx<dif.size()){
            wdw+=dif[idx];
            idx++;
        }
        else if(wdw>k && st<dif.size()){
            wdw-=dif[st];
            st++;
        }
        else break;
        //cout << wdw <<endl;

    }

    if(wdw==k){
        cout <<"Yes\n";
    }
    else cout <<"No\n";

}

