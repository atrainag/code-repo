#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
    int n,t=0;
    cin >>n>>s;
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i]==s[i+1]){
            t++;
        }
    }
    cout <<t<<"\n";
}

