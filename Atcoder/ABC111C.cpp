#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmpr(pair<int,int> a,pair<int,int> b){
    return (a.second >b.second)
}

int main(){
    int n,prev;


    cin >> n;
    vector<int> x(n);

    for(int i =0;i<n;i++){
        cin >> x[i];
    }
    vector<int> y;
    y=x;
    sort(y.begin(),y.end());
    int a=0,b=-1;
    vector<pair<int,int>> li;
    for(int i=0;i<n;i++){
        if(i==0){
            li.push_back(make_pair(y[i],1);
        }
        if(y[i]==y[i+1]){
            li[y[i]]++;
        }
        else{
            li.push_back(make_pair(y[i+1],1);
        }
    }
    for(int i=0;i<n;i++){

    }
    cout << ans <<endl;

}
