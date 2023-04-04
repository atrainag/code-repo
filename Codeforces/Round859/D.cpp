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
        int q;
        cin >>n >>q;
        vector<int> x(n);
        vector<ll int> pref(n);
        ll int sm=0;
        for(int i =0;i<n;i++){
            cin >> x[i];
            sm +=x[i];
            pref[i]=sm;
            //cout << pref[i]<<"|";
        }
        //cout <<"\n";
        for(int k = 0 ;k<q;k++){
            int a, b ,c;
            cin >> a >> b >> c;
            a--;
            b--;

            ll int tmp =0 ;
            if(a>0){
                tmp += pref[a-1];
                //cout << pref[a-1]<<endl;
            }
            if(b+1!=pref.size()) tmp += pref[pref.size()-1]-pref[b];
            tmp += (b-a+1)*c;
            //cout << tmp;
            if(tmp%2!=0){
                cout <<"YES\n";
            }
            else cout <<"NO\n";
        }
    }
}

