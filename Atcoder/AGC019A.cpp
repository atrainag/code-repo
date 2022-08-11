#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int q,h,s,d;
    long long int tq,th,ts,td;
    cin >> q>>h>>s>>d;
    long long int n;
    long long int ans=0;
    cin >> n;
    if(n>2){
        tq=q*8;
        th=h*4;
        ts=s*2;
        td=d;
        long long int temp=min({tq,th,ts,td});
        long long int k=n/2;
        ans+=k*temp;
        n-=2*k;
    }
    //cout << n <<endl;
    if(n==1){
        tq=q*4;
        th=h*2;
        ts=s;
        long long int temp=min({tq,th,ts});
        ans+=temp;
    }
    cout <<ans <<endl;
}
//30
