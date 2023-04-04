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
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}


int sumd(int x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;

    while(t--){
        int q;
        cin >>n >>q;
        vector<int> x(n);
        for(int i =0 ;i<n;i++){
            cin >> x[i];
        }
        int o;
        for(int i=0;i<q;i++){
            cin >> o;
            if(o==1){
                int l,r;
                cin >> l >> r;
                for(int k = l-1;k<=r-1;k++){
                    x[k]=sumd(x[k]);
                }
            }
            else {
                int w;
                cin >> w;
                cout << x[w-1]<<"\n";
            }
        }
    }
}


