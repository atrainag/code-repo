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
    int n,x;
    cin >> n;
    rep(i,n){
        cin >> x;
        int k=0;

        while(x--){
            k++;
            if(k%  10==3){
                k++;
            }
            //cout <<"\n";
            //cout << k%3<<endl;
            if(k==0){
                k++;
                continue;
            }

            else if( ((k)%3==0)){
                //ocout<<"bruh"<<endl;
                k++;
                if(k%10==3){
                        k++;
                    }
            }
        }
            cout << k <<endl;
        }

    }

