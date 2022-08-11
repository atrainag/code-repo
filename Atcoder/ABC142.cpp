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
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
        y[x[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout << y[i];
        if(i!=n-1){
            cout << " ";
        }
        else{
            cout <<"\n";
        }
    }

}

