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



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,r,s;
    cin >> t;
    while(t--){
        cin >>n >>s>>r;
        int x[51];
        x[0]=s-r;
        int a=(r+n-2)/(n-1);
        for(int i = 1 ; i<n;i++){
            if(i==n-1){
                x[i]=r-(a*(n-2));
                int idx=i-1;
                while(x[i]<=0){
                    x[i]++;
                    x[idx]--;
                    idx--;
                }
                break;
            }
            x[i]=a;
        }
        for(int i =0;i<n;i++){
            printf("%d",x[i]);
            if(i==n-1){
                printf("\n");
            }
            else printf(" ");
        }

    }


}



