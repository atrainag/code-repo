
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='v'){
            cnt++;
        }
        else{
            cnt+=2;
        }
    }
    cout << cnt <<endl;
}
