#include <iostream>

using namespace std;

int main(){
    int q,x,y,a,b;
    cin >> q >> x >> y;
    for(int i = 0 ;i < q ; i++){
        cin >> a >>b;
        if(abs(x-a)==abs(y-b)){
            cout << "BISA\n";
        }
        else{
            cout << "TIDAK\n";
        }
    }
}
