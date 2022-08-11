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


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    rep(j,t){
        int n,alt=1,temp;
        bool rev=false;
        cin >> n;
        string s="";
        temp=n;
        if(n==1 || n==2){
            cout << n <<endl;
        }
        else{
            while(n>0){
                if(alt==0){
                    alt=1;
                    s+="1";
                    n-=1;
                }

                else{
                    alt=0;
                    s+="2";
                    n-=2;
                }
                if(n<0){
                    alt=0;
                    s="";
                    while(temp>0){
                        if(alt==0){
                            alt=1;
                            s+="1";
                            temp-=1;
                        }

                        else{
                            alt=0;

                            s+="2";
                            temp-=2;
                        }
                    }
                }
            }
            cout << s<<endl;
        }

    }
}
