#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool mit;
    ll int t,n;
    cin >> t;
    rep(i,t){
        cin >> n;
        vector<ll int> x(n);
        rep(j,n){
            cin>>x[j];
        }
        sort(x.begin(),x.end());
        ll int b=0,r=0,bb=-1,rr=-1;
        mit = false;
        while(1){
            //cout << b <<" "<< r<<"|"<<bb<<" "<<rr<<endl;
            if(b>r && rr>bb){
                mit = true;
                break;
            }
            else if((b+r==x.size()) && bb>=rr && r!=0 ){
                break;
            }

            if(bb<=rr){
                if(bb==-1){
                    bb++;
                }
                bb+=x[b];
                b+=1;
            }
            else{
                if(rr==-1){
                    rr++;
                }
                rr+=x[x.size()-r-1];
                r+=1;
            }
        }

        if(!mit){
            cout << "NO\n";
        }
        else{
            cout <<"YES\n";
        }


    }
}

