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
        int t;
        cin >> t;
        rep(j,t){
            int lo=1000000;
            cin >> n;
            vector<int> x(n);
            rep(i,n){
                cin >>x[i];
            }
            sort(x.begin(),x.end());
            rep(i,n-1){
                lo=min(lo,abs((x[i]-x[i+1])));
            }
            cout <<lo<<endl;

        }

    }


