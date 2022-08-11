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

int f(int n,int d){
    int i=0;
    int tem=1;
    while(1){
        tem=i*n+1;
        if(tem<=d) i++;
        else break;
    }
    return i;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,n,d;
    cin >> n >> d >> x;
    vector<int> a(n);
    int tot=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        tot+=f(a[i],d);
        //cout << tot <<endl;
    }
    cout << tot +x <<endl;

}







