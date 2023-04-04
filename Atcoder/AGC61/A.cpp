
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
        cout << a[i]<<"\n";
    }
    cout <<"\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int k,n,t;
    cin >> t;

    while(t--){
        cin >> n >> k;

        if(n%2==0){
            ll int op = n/2;
            if(op%4==1){
                if(k==1)cout << 2<<"\n";
                else if(k==2)cout << 1 <<"\n";
                else if(k==n-1)cout << n<<"\n";
                else if(k==n)cout << n-1 <<"\n";
                else cout << k <<"\n";
            }
            else if(op%4==2){
                if(k==1)cout << 2 <<"\n";
                else if(k==2)cout << 1 <<"\n";
                else if(k==3)cout << 4 <<"\n";
                else if(k==4)cout << 3 <<"\n";
                else if(k==n)cout << n-1<<"\n";
                else if(k==n-1)cout << n <<"\n";
                else if(k==n-2)cout << n-3 <<"\n";
                else if(k==n-3)cout << n-2 <<"\n";
                else cout << k <<"\n";
            }
            else if(op%4==3){
                if(k==1)cout << 2 <<"\n";
                else if(k==2)cout << 1 <<"\n";
                else if(k==5)cout << 6 <<"\n";
                else if(k==6)cout << 5 <<"\n";
                else if(k==n-5)cout << n-4 <<"\n";
                else if(k==n-4)cout << n-5 <<"\n";
                else if(k==n-1)cout << n <<"\n";
                else if(k==n)cout << n-1 <<"\n";
                else cout <<k<<"\n";
            }
            else{
                if(k%2==0)cout <<k-1<<"\n";
                else cout <<k+1<<"\n";
            }
        }

        else{
            ll int op = (n-1)/2;
            //for(int k=1;k<=n;k++){
            if (op%4==1){
                if(k==1)cout <<2<<"\n";
                else if(k==2) cout << 3 <<"\n";
                else if(k==3)cout << 1<<"\n";
                else if(k==n)cout <<n-2<<"\n";
                else if(k==n-1)cout <<n<<"\n";
                else if(k==n-2)cout <<n-1<<"\n";
                else cout << k <<"\n";
            }
            else if(op%4==2){
                if(k==1 )cout << k+1<<"\n";
                else if(k==2)cout <<k+2<<"\n";
                else if(k==3 )cout << k-2<<"\n";
                else if(k==4 )cout << k+1<<"\n";
                else if(k==5)cout << k-2<<"\n";
                else if(k==n-4 )cout << n-3<<"\n";
                else if(k==n-3)cout <<n-1<<"\n";
                else if(k==n-2 )cout << n-4<<"\n";
                else if(k==n-1)cout << n<<"\n";
                else if(k==n)cout << n-2<<"\n";
                else cout << k <<"\n";
            }
            else if(op%4==3){
                if(k%4==1 || k%4==2){
                    cout << k +1 <<"\n";
                }
                else if(k%4==3) cout << k -2<<"\n";
                else if(k%4==0)cout << k<<"\n";

            }
            else{
                if(k==1) cout << k+1<<"\n";
                else if(k==2) cout << k+2<<"\n";
                else if(k== n) cout << n-2<<"\n";
                else if(k==n-1) cout << n<<"\n";
                else{
                    if(k%2==0) cout << k+2<<"\n";
                    else cout << k-2<<"\n";
                }
            }
            //}
        }

    }


}

