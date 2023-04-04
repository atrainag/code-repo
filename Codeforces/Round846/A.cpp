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
    cin >> t;

    while(t--){
        cin >>n ;
        vector<int> x(n);
        int o=0,e=0,l=3;
        for(int i=0;i<n;i++){
            cin >> x[i];
            if(x[i]%2==0)e++;
            else o++;
        }
        if(o==0||o==2 && e==1){
            cout << "NO\n";
            continue;
        }
        cout <<"YES\n";
        if(o>=3)
            for(int i =0;i<n;i++){
                if(x[i]%2!=0){
                    cout << i+1;
                    l--;
                    if(l==0){
                        cout <<"\n";
                        break;
                    }
                    else cout <<" ";
                }

            }
        else{
            l=1;
            int le=2;
            for(int i =0;i<n;i++){
                if(x[i]%2!=0 && l!=0){
                    cout << i+1;
                    l--;
                    if(l==0 && le==0){
                        cout <<"\n";
                        break;
                    }
                    else cout <<" ";
                }
                else if(x[i]%2==0 && le!=0){
                    cout << i+1;
                    le--;
                    if(l==0 && le==0){
                        cout <<"\n";
                        break;
                    }
                    else cout <<" ";
                }

            }
        }
    }


}

