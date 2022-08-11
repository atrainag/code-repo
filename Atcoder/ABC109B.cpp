#include <iostream>

#include <vector>

using namespace std;

bool cek(vector<string> x,string s){
    for(int i=0;i<x.size();i++){
       //cout << x[i]<<" "<< s<<endl;
        if(x[i]==s){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    vector<string> x;
    string s;
    char p;
    int ans=1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(cek(x,s)){
            ans=0;
        }
        x.push_back(s);
        if(i!=0){
            if(p!=s[0]){
                ans=0;
            }
        }
        p=s[s.size()-1];
    }
    if(ans) cout <<"Yes\n";
    else cout <<"No\n";
}
