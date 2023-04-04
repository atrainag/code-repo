
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
    int n,m;
    cin >> n >>m;
    vector<int> x(m);
    vector<int> a(n);

    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    for(int i =0;i<m;i++){
        cin >> x[i];
        x[i]--;
    }
    if(m==0){
        prtv(a);
        return 0;
    }
    sort(all(x));
    int st=x[0],en=-1;
    for(int i=0;i<m;i++){
            //cout << st <<" "<<en<<">>";
        if(i==m-1){
            if(x[i-1]+1==x[i]){
                if(x[i]+1>=n)en=x[i];
                else en=x[i]+1;
            }
            else{
                if(en==-1){
                    if(x[i]+1>=n)en=x[i];
                    else en=x[i]+1;


                }
            }
            int cnt=0;
            for(int j=st;j<=(en+st)/2;j++){
                int temp = a[j];
                a[j]=a[en-cnt];
                a[en-cnt]=temp;
                //prtv(a);
                cnt++;
            }
        }
        else if(x[i+1]-1==x[i]){
            if(x[i+1]+1>=n)en=x[i+1];
            else en=x[i+1]+1;
        }
        else{
            if(en==-1){
                if(x[i]+1>=n)en=x[i];
                else en=x[i]+1;
            }
            int cnt=0;
            for(int j=st;j<=(en+st)/2;j++){
                int temp = a[j];
                a[j]=a[en-cnt];
                a[en-cnt]=temp;
                cnt++;
                //prtv(a);
            }
            en=-1;
            st=x[i+1];
        }
        //cout << st <<" "<<en<<"|";
     // prtv(a);
    }
    for(int i =0;i<n;i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";


}


