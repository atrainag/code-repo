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
    int n,t;
    cin >>t;
    while(t--){
        cin >>n;
        int k=1;
        int s=0;
        while(1){
            if((k*(k+1))/2>n){
                k--;
                s=n-(k*(k+1))/2;
                break;
            }
            if((k*(k+1))/2==n){
                break;
            }
            k++;
        }
        int a=1,b=0,alt=0;
        //cout << k <<endl;
        if(k==1)b+=s;
        for (int i =2;i<=k;i++){
            if(alt<2){

                b+=i;
                if(i==k && alt == 1)a+=s;
                else if(i==k ) b+=s;
                alt++;
                //cout <<"B"<<b<<endl;
            }
            else if(alt>=2 && alt <=3){
                a+=i;
                if(i==k && alt == 3)b+=s;
                else if(i==k) a+=s;
                alt++;
                //cout <<"A"<<a<<endl;
            }
            if(alt==4){
                alt=0;
            }
        }
        cout << a <<" "<<b<<endl;
    }


}

