
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>

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
    ll int tot=0;
    vector<ll int> x(4);
    rep(i,4){
        cin >> x[i];
        tot+=x[i];
    }
    int tott=tot/3;
    sort(x.begin(),x.end());
    cout << abs((x[0]-(tot-tott-x[0]))/2)<<" "<<abs((x[1]-(tot-tott-x[1])))/2<<" "<<abs((x[2]-(tot-tott-x[2])))/2<<endl;


}
