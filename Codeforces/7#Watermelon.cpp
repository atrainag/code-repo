#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    if(x==1 ||x==2){
        cout << "NO\n";
    }
    else if(x%2==0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
