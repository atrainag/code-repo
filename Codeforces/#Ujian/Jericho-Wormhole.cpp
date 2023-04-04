#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k =0;
    int t=n+n-1
    for(int i =0  ; i <t ; i++){
        for(int j =0 ;j <t ; j++){
            if(j>=k){
                cout << n-k;
            }
            else{
                cout << n-j;
            }
            k++;
            if(j!=n-1){
                cout <<" ";
            }
        }
        cout <<"\n";

    }

}






