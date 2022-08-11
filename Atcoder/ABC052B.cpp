#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

        string s;
        cin >>s;
        int x=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                x++;
            }
            else{
                x--;
            }
            //cout << x <<endl;
            ans=max(x,ans);
        }
    cout << ans <<endl;
}
