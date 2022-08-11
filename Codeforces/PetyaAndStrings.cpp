#include <iostream>

using namespace std;

int main(){
    string s,x;
    cin >> s >> x;
    for(int i = 0 ; i < s.size() ;i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
        if(x[i]>=65 && x[i]<=90){
           x[i]+=32;
        }
        if(i==s.size()-1){
            if(s[i]==x[i]){
                cout <<0;
                break;
            }
        }
        if(s[i]<x[i]){
            cout << -1;
            break;
        }
        else if(s[i]>x[i]){
            cout << 1;
            break;
        }

    }
}


