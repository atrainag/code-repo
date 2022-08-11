#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans=1;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            ans=0;
        }
    }
    if(ans)cout <<"yes\n";
    else cout <<"no\n";
}
