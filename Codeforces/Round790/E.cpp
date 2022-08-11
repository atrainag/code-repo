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
        int n,q,lim=0,r;
        cin >>n>>q;
        vector<int> p(n);
        vector<int> x(n);
        vector<int> y(q);
        for(int i=0;i< n;i++){
            cin >> p[i];
        }
        sort(all(p));
        for(int i=0;i< n;i++){
            lim+=p[n-1-i];
            x[i]=lim;
            //cout << x[i]<<" ";
        }
        cout <<"\n";
        for(int i=0;i<q;i++){
            cin >> y[i];
            if(y[i]>lim){
               cout <<-1<<endl;
                continue;
            }
            int l=0,r=n-1,m=0,ans=99999999;
            while(l<=r){
                m=(l+r)/2;
                if(x[m]>=y[i]){
                    ans=min(m,ans);
                    r=m-1;
                }
                else{
                    l=m+1;
                }
                //cout << l <<" "<<r <<endl;
            }
            cout << ans+1 <<endl;
        }
    }
}
