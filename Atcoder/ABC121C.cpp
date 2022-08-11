#include <iostream>
#include <vector>
#include <algorithm>

#define fi first
#define se second
#define ll long long

using namespace std;

int main(){
    ll int n,m;
    cin >> n >>m;
    vector<pair<ll int,ll int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].fi>>a[i].se;
    }
    sort(a.begin(),a.end());
    ll int t=0,c=0;
    for(int i=0;i<n;i++){
        //cout << t <<" "<<c <<"|";
        if(t>=m){
            break;
        }
        if(m-t>=a[i].se){
            t+=a[i].se;
            c+=a[i].fi*a[i].se;
        }
        else{
            c+=(m-t)*a[i].fi;
            t+=(m-t);


        }
   //cout << t <<" "<<c <<"\n";
    }
    cout << c <<endl;
}


