#include <iostream>

using namespace std;

int main(){
    int n,x,y[101];
    cin >> n;
    for(int i =0 ; i < n ; i++){
        cin >> x;
        y[x-1]=i+1;
    }
    for(int i =0 ; i <n ;i++){
        cout << y[i]<<" ";
    }
    cout << "\n";
    return 0;
}
