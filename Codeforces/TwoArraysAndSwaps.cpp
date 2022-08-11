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
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define repe(i,a,n) for(int i=a ; i <n ;i++)

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,k;
    cin >> t;
    rep(i,t){
        cin >> n>>k;
        vector<int> x(n);
        vector<int> y(n);
        int sumx=0,sumy=0;
        for(int j=0;j<n;j++){
            cin >> x[j];
            sumx+=x[j];
        }
        for(int j=0;j<n;j++){
            cin >> y[j];
            sumy+=y[j];
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int l=0;
        while(l<k){
            int temp;


            if(x[l]<y[y.size()-1-l]){
                temp=x[l];
                x[l]=y[y.size()-1-l];
                y[y.size()-1-l]=temp;
            }

            l++;

        }

        sumx=0;
        rep(j,n){
            sumx+=x[j];
        }


        cout << sumx<<endl;
    }
}

