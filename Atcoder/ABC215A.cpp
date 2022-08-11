#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int main(){
    string a = "Hello,World!";
    string b;
    cin >> b;
    bool salah = false;
    if(a.size()!=b.size()){
        cout <<"WA\n";
        return 0;
    }
    for(int i =0  ; i < a.size();i++){
        if(a[i]!=b[i]){
            salah = true;
        }
    }
    if(salah){cout <<"WA\n";}
    else{cout <<"AC\n";}
}

