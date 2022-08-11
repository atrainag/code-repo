#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(i==s.size()-2){
            if(s[i]==s[i+1]){
                ans++;
            }
            else{
                ans+=2;
            }
            break;
        }
        else if(s[i]==s[i+1]){
            ans+=2;
            i+=2;
        }
        else ans++;
        //cout << s[i]<<" "<<s[i+1]<<" "<<ans<<endl;

    }
    cout << ans <<endl;
}
//13
