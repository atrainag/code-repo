#include <iostream>

using namespace std;

int main(){
    int a,b;
    string s;
    cin >> a >> b>>s;
    int ans=1;
    for(int i=0;i<s.size();i++){
        if(i!=a && s[i]=='-'){
            ans=0;
            break;
        }
        if(i==a && s[i]!='-'){
            ans=0;
            break;
        }
    }
    if(ans )cout <<"Yes\n";
    else cout <<"No\n";
}
