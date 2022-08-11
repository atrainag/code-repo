#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,x=0;
    string s;
    cin >>n;
    for(int i = 0 ; i < n ;i++){
        cin >>s;
        for(int j = 0 ;j < s.size() ; j++){
            if(s[j]=='+'){
                x++;
                break;
            }
            else if(s[j]=='-'){
                x--;
                break;
            }
        }
    }
    cout <<x;

}

