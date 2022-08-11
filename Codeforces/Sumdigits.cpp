#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int temp=0,ans=0;
    while(s.size()>1){
        temp=0;
        for(int i=0;i<s.size();i++){
            temp+=s[i]-'0';
        }
        s=to_string(temp);
        ans++;
    }
    cout << ans<<endl;
}
