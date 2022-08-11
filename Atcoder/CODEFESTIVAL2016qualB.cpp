//B QUALIFICATION SIMULATOR

#include <iostream>

using namespace std;

int main(){
    int n ,a,b,q;
    string s;
    cin >> n >> a>>b>> s;
    q= a+b;
    for(int i = 0 ; i < n ; i++){
        if(s[i]=='b'&& b>0&& q>0){
            cout <<"Yes\n";
            q--;
            b--;
        }
        else if(s[i]=='a'&& q>0){
           cout <<"Yes\n";
           q--;
        }
        else{cout <<"No\n";}
    }
}
