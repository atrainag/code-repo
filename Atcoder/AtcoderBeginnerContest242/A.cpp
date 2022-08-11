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
    double a,b,c,x;
    cin >> a>>b>>c>>x;
    if(x>a&&x<=b){
        cout <<fixed<<setprecision(6)<< c/(b-a)<<endl;
    }
    else if (x<=a ) {cout << 1.000000<<endl;}
    else{
        cout << 0;
    }
}

