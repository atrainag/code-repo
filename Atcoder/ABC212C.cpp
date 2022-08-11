#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < n; ++i)
#define INF 1010000000
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> b(m);
    vector<int> a(n);
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    rep(i,m){cin >> b[i];}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int dif=INF;
    int top=0 ,bot=0;
    while(top<n && bot<m){
        dif=min(dif, abs(a[top]-b[bot]));
        if(a[top]>b[bot]){bot ++;}
        else{top++;}
    }
    cout<<dif<<endl;

}
