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
#define rep(i,a,n) for(int i=a ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,t=5,k=1;
    cin >> x>>n;
    while(t<=240-n && k<=x){
        k++;

        t+=5*(k);


    }
    cout <<k-1;
}

