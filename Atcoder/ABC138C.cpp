#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

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
    int n;
    cin >> n;
    vector<double> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    double temp=x[0];
    for(int i=1;i<n;i++){
        temp=(temp+x[i])/2;
    }
    cout <<fixed<<setprecision(5)<<temp<<endl;
}


