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
    int n,k;
    cin >>k>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    vector<double> a(k);
    vector<double> b(k);

    for(int i=0;i<k;i++){
        cin >> a[i]>>b[i];
    }
    double temp=0;
    double ma = -1;
    for(int i=0;i<k;i++){
        double mi = 99999999;
        for(int j=0;j<n;j++){
            temp=sqrtl(powl(abs(a[i]-a[x[j]-1]),2)+powl(abs(b[i]-b[x[j]-1]),2));
            //cout << i <<" "<<j<<" "<<temp<<endl;
            if(temp<mi){
                mi=temp;
            }
        }
        if(ma<mi && mi != 99999999){
            ma=mi;
        }
    }
    cout <<fixed << setprecision(12)<< ma <<endl;
}



