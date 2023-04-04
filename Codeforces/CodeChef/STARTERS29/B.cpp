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
        int t;
        cin >> t;
        rep(j,t){
            string x;
            int n;
            cin >>n;
            cin >>x;
            int cnt=0;
            int lim=1;
            rep(i,n){
                //cout <<x[i]<<" "<<x[i+1]<<" "<<lim<<" "<<cnt<<endl;
                if(i==n-1){
                    cnt++;

                }
                else if(x[i]!=x[i+1]){

                    cnt++;
                }
                else{
                    cnt++;
                    i++;
                }
                //cout <<x[i]<<" "<<x[i+1]<<" "<<lim<<" "<<cnt<<endl;
            }
            cout << cnt<<endl;;
        }
    }

