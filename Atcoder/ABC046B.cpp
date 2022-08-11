#include <iostream>

using namespace std;

int main(){
    int n,k,tot=1;
    cin >> n >>k;
    for(int i = 0 ; i < n ;i++){
        if(i==0){
                tot*=k;
        }
        else{
            tot*=k-1;
        }
    }
    cout <<tot<<endl;
}
