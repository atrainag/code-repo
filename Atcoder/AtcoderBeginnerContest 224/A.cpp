#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[s.size()-1]=='r' && s[s.size()-2]=='e'){
        cout << "er\n";
    }
    else{
        cout <<"ist\n";
    }
}
