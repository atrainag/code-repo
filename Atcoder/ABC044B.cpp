#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> x(26);
    for(int i=0;i<26;i++){
        x[i]=0;
    }
    for(int i=0;i<s.size();i++){
        x[(int)(s[i]-'a')]++;
       // cout << (int)(s[i]-'a')+1<<endl;
    }
    bool ans = true;
    for(int i=0;i<26;i++){
        if(x[i]%2!=0){
            ans=false;
            break;
        }
    }
    if(ans)cout <<"Yes\n";
    else cout <<"No\n";
}
