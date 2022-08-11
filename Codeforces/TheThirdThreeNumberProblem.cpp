#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x%2==1){
            cout <<-1<<endl;
            continue;
        }
        cout << 0 <<" "<< 0 <<" "<< x/2<<endl;
    }
}
