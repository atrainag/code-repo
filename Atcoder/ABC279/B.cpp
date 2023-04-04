
#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin >> s>>t;
    int cnt=0,ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[cnt]){
            if(cnt==t.size()-1){
                ans=1;
                break;
            }
            cnt++;
        }
        else{
            cnt=0;
        }
    }
    if(ans)cout << "Yes\n" <<endl;
    else cout << "No\n" <<endl;
}

