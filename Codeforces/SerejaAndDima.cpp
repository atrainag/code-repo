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
    rep(i,n){
        cin >> x[i];
    }
    int a=0,b=0,alt=0,l=0,r=n-1;
    while(1){
        if(alt==0){
            if(x[r]>=x[l]){
                a+=x[r];

                r--;
            }
            else{
                a+=x[l];

                l++;

            }
            alt=1;
        }
        else if(alt==1){
            if(x[r]>=x[l]){
                b+=x[r];

                r--;
            }
            else{
                b+=x[l];

                l++;

            }
            alt=0;
        }
        if(l>r){
            break;
        }
    }
    cout << a <<" "<<b;
}

