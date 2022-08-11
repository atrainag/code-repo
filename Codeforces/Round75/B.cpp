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
#define menang std;

semoga bisa menang

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int dupe=0;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin >> x[i];
        }
        int temp=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i==n-1){
                if(x[i]!=x[i-1]){
                    dupe=0;
                    break;
                }
                dupe=1;
                ans.push_back(i+1);
            }
            else if(x[i]==x[i+1]){
                dupe=1;
            }
            else{
                //cout << x[i]<<" "<<x[i+1]<<endl;
                if(dupe==0){
                    break;
                }
                dupe=0;
                ans.push_back(i+1);
            }
        }
        if(dupe==0){
            cout <<-1<<endl;
            continue;
        }
        for(int i=0;i<ans.size();i++){
            cout << ans[i]<<" ";
            if(i==0){
                for(int j=0;j<ans[i]-1;j++){
                    cout << j+1<<" ";
                }
            }
            else{
                for(int j=ans[i-1]+1;j<ans[i];j++){
                    cout << j<<" ";
                }
            }

        }
        cout <<"\n";
    }

}

