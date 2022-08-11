#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s,x="abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    sort(s.begin(),s.end());
    int id=0,ans=1;
    for(int i=0;i<s.size();i++){

        if(i==s.size()-1 || s[i]!=s[i+1]){
            if(s[i]!=x[id]){
                cout << x[id]<<endl;
                ans=0;
                break;
            }
            else if(s.size()-1==i&& s[i]!='z'){
                cout << x[id+1];
                ans=0;
            }
            else{
                id++;
            }
        }
    }
    if(ans) cout <<"None\n";
}
