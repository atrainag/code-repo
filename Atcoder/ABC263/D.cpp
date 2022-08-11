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
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> x(n);
    ll int sum=0;
    rep(i,n){
        cin >> x[i];
        sum+=x[i];
    }
    long long int difl=0,pdifl=0,pdifr=0,difr=0;
    int lidx=0,ridx=0;
    rep(i,n){
        difl+=l-x[i];

        difr+=r-x[n-1-i];


        if(i>=1){
            if(difl<pdifl){
                pdifl=difl;
                lidx=i;
            }
            if(difr<pdifr){
                pdifr=difr;
                ridx=i;
            }
        }
         if(i>=0){
            pdifl=difl;
            pdifr=difr;
        }
        cout << pdifl <<" "<<pdifr <<" "<<difl <<" "<<difr<<" "<<lidx<<" "<<ridx<<endl;
    }
    cout <<"---\n"<<lidx<<" "<<ridx<<endl;
    if(difl<difr){
        pdifr=0;
        for(int i= n-1;i>lidx;i--){
            pdifr=min(pdifr,pdifr+r-x[i]);
        }
    }
    else{
        pdifl=0;
        for(int i= 0;i<ridx;i++){
            pdifl+=l-x[i];
        }
    }
    cout << pdifl <<" "<<pdifr<<endl;
    cout << sum+pdifl+pdifr <<endl;
}





