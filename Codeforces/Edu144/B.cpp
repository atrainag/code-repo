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
        string a,b;
        cin >>a>>b ;
        string ans = "";
        int prev=0,prev2=-1;
        for(int i =0;i<a.size();i++){
            for(int j =prev;j<b.size();j++){
                if(a[i]==b[j]){
                    //cout << prev2<<" "<<i <<" "<<j<<endl;
                    if(prev2!=-1&& prev2+1==i){
                        ans+=a[i];
                    }
                    else if(i==0 && j==0){
                        ans+=a[i];
                    }
                    else{
                        ans+='*';
                        ans+=a[i];
                    }
                    prev=j+1;
                    prev2=i;
                    break;
                }
            }
            if(prev==b.size())break;
        }
      // cout << prev <<" "<<prev2<<endl;
        if(prev!=b.size() || prev2+1!=a.size()){
            //cout <<"A";
            ans+='*';
        }
        else if(a[a.size()-1]!=b[b.size()-1]){
            //cout <<"B";
            ans+='*';
        }
        //cout << ans<<endl;
        int cnt=0;
        for(int i =0;i<ans.size();i++){
            if(ans[i]=='*'){
                cnt++;
            }
        }
       // cout << ans <<endl;
        if(cnt > ans.size()-cnt){
            cout <<"NO\n";
        }
        else{
            cout <<"YES\n";
            cout << ans <<endl;

        }
    }
}


