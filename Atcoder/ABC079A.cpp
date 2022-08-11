#include <iostream>

using namespace std;

int main(){
    string x;
    cin >> x;
    int ans=0,temp=-1;
    for(int i=0;i<x.size()-1;i++){
        if(x[i]==x[i+1]){
            ans++;
        }
        if(x[i]!=x[i+1]||i==x.size()-2){
            temp=max(ans,temp);
            ans=0;
        }
    }
    if(temp>1){
        cout <<"Yes\n";
    }
    else{
        cout <<"No\n";
    }
}
