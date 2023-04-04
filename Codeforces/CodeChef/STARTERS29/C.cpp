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
    int n,t;
    cin >> t;
    rep(j,t){
        cin >> n;
        int sum=0,alt=0;
        vector<int> x(n);
        vector<int> dif(n);
        int lo=1000000001;
        int idlo=1000000001;
        int poslo=-1;
        rep(i,n){
            cin >>x[i];
            x[i]=abs(x[i]);
            if(i%2==1 && i!=0){
                dif.push_back(x[i]-x[i-1]);
                if(lo >x[i-1]-x[i]){
                    lo=x[i-1]-x[i];
                    idlo=x[i-1];
                }
            }
        }
        rep(i,n){

            if(alt==1){
                alt=0;
                sum-=abs(x[i]);
            }
            else{
                alt=1;
                sum+=abs(x[i]);
            }

        }
        cout << sum <<endl;
    }
}
