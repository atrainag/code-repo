#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,ans=1;
    string s;
    cin >> n;
    vector<string> x;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s[0]=='H'|| s[0]=='D'||s[0]=='C'|| s[0]=='S'){
            if((s[1]=='A' || s[1]=='T'||s[1]=='J' || s[1]=='K'||s[1]=='Q'||(s[1]>='2'&& s[1]<='9'))&& ans==1){
                ans=1;
            }
            else{
                ans=0;
            }
        }
        else{
            ans=0;
        }
        x.push_back(s);
    }
    sort(x.begin(),x.end());
    for(int i=0;i<n-1;i++){
        if(x[i]==x[i+1]){
            ans=0;
        }
    }
    if(ans){
        cout <<"Yes\n";
    }
    else cout <<"No\n";
}

