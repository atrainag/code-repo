#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
    bool more=false;
    cin >> s;
    vector<int> x;
    string temp="";
    for(int i = 0 ; i< s.size() ; i++){
        if(i==s.size()-1){
            temp+=s[i];
            x.push_back(stoi(temp));
        }
        else if(s[i]!='+'){
           temp+=s[i];
        }
        else{
            x.push_back(stoi(temp));
            more=true;
            temp="";
        }
    }
    sort(x.begin(),x.end());
    if(!more){
        cout << s;
    }

    else{
        for(int i = 0 ; i < x.size() ; i++){
            cout << x[i];
            if(i!=x.size()-1){
                cout <<"+";
            }
            else{cout <<"\n";}
        }
    }

}
