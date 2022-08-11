#include <iostream>

using namespace std;

int main(){
    int n;

    for(int i =0  ; i <26 ; i++){
        cin >> n;
        cout << char('a'-1 + n);

    }
}
