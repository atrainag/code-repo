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


void shf(int l , int r,vector<int> &x){

    if(r==l+1){
        int temp = x[l];
        x[l]=x[r];
        x[r]=temp;
        cout << l <<" "<<r<<endl;
        //prtv(x);
        return;
    }
    else {
        shf(l,r-1,x);
        shf(l+1,r,x);
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;

    while(t--){
        int k;
        cin >> n;
        vector<int> x(n);
        for(int i=1;i<=n;i++){
            x[i-1]=i;
        }
        prtv(x);
        shf(0,n-1,x);
        /*
        if(n%2==0){
            if(k%2==0){
                cout << k-1<<endl;
            }
            else cout << k+1<<endl;
        }

        else{
            int op = (n-1)/2;
            if (op%4==1){
                if(k==1)cout <<2<<endl;
                else if(k==2) cout << 3 <<endl;
                else if(k==3)cout << 1<<endl;
                else if(k==n)cout <<n-2<<endl;
                else if(k==n-1)cout <<n<<endl;
                else if(k==n-2)cout <<n-1<<endl;
                else cout << k <<endl;
            }
            else if(op%4==2){
                if(k==1 || k==n-4)cout << k+1<<endl;
                if(k==2 || k==n-3)cout << k+2<<endl;
                if(k==3 || k==n-2)cout << k-2<<endl;
                if(k==4 || k==n-1)cout << k+1<<endl;
                if(k==5 || k==n)cout << k-2<<endl;
            }
            else if(op%4==3){
                if(k%4==1 || k%4==2){
                    cout << k +1 <<endl;
                }
                else if(k%4==3) cout << k -2<<endl;
                else if(k%4==0)cout << k-1<<endl;
            }
            else{
                if(k==1) cout << k+1<<endl;
                else if(k==2) cout << k+2<<endl;
                else if(k==n) cout << k-2<<endl;
                else if(k==n-1) cout << k+1<<endl;
                else{
                    if(k%2==0) cout << k-2<<endl;
                    else cout << k+2<<endl;
                }
            }
        }*/
        prtv(x);
        //cout << x[k-1]<<endl;
    }


}


