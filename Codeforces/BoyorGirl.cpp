#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    map<char,int> chk;
    string s;
    int t=0;
    cin >>s;
    for(int i = 0 ; i < s.size() ; i++){
        if(chk.find(s[i])==chk.end()){
            t++;
            chk.insert(make_pair(s[i],1));
        }
    }
    if(t%2==0){
        cout <<"CHAT WITH HER!\n";
    }
    else{cout <<"IGNORE HIM!\n"; }
}


