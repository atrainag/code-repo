#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(i%2==0 && s[i]!='1'){
            a++;
        }
        else if(i%2!=0 && s[i]!='0'){
            a++;
        }
    }
    for(int i=0;i<s.size();i++){
        if(i%2==0 && s[i]!='0'){
            b++;
        }
        else if(i%2!=0 && s[i]!='1'){
            b++;
        }
    }
    cout << min (a,b)<<endl;
}

