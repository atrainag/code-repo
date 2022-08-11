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
#define semoga using
#define bisa namespace
#define menang std;

semoga bisa menang

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin >> n;
    while(n--){
        cin >>t;
        vector<int> x(t);
        int zer=0,prev=0,dupe=0,cnt=0;
        for(int i=0 ;i<t;i++){
            cin >> x[i];
            if(x[i]==0)zer++;
        }
        sort(all(x));
        for(int i=0;i<t-1;i++){
            if(x[i]==x[i+1]){
                dupe++;
                break;
            }
        }
        if(zer>0){
            cnt=t-zer;
        }
        else if(dupe>0){
            cnt=t;
        }
        else{
            cnt=t+1;
        }
        cout << cnt<<endl;
    }

}

