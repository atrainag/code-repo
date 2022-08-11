#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

double ans=0,sum=0;
int n;
int cnt=0;

void dfs(vector<int> x,vector<int> y,vector<int> d){
    if(d.size()==n){
        double tot=0;
        for(int i=0;i<d.size()-1;i++){
            tot+=sqrtl(powl(x[d[i]]-x[d[i+1]],2) + powl(y[d[i]]-y[d[i+1]],2));
        }
        sum+=tot;
        cnt++;
        //for(int i=0;i<d.size();i++)cout << d[i]<<" ";

       //cout <<tot <<" "<<sum<<" WOW"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(find(d.begin(),d.end(),i)!=d.end())continue;
            vector<int> nd;
            nd=d;
            nd.push_back(i);
            dfs(x,y,nd);
        }
    }
}

int main(){

    cin >> n;
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++){
        cin >> x[i]>>y[i];
    }
    vector<int> d;
    dfs(x,y,d);
    ans=sum/cnt;
    cout <<fixed<<setprecision(6)<<ans<<endl;
}

