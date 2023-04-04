#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int k;
    string s;
    cin >> k ;
    cin.ignore();
    getline(cin ,s);
    vector<int> x;
    string temp="";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
        else{
            x.push_back(stoi(temp));
            temp="";
        }
    }
    sort(x.begin(),x.end());
    for(int i=1 ;i <x.size() ; i++){
        if(i==x.size()-1){
            if(x[i]!=x[i-1]){
                cout << x[i]<<endl;
                break;
            }
        }
        else if(x[i-1]!= x[i]&& x[i+1]!=x[i]){
            cout<< x[i]<<endl;
            break;
        }
    }


}





