#include <iostream>
#include <vector>
using namespace std;

int main(){
    double n;
    cin >> n;
    vector<double> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    bool alt=false;
    for(int i =0  ; i < n ;i++){
        if(a[i]>a[i+1]){
            if(alt){
                n/=a[i];
            }
            else{
                n*=a[i];
            }
        }
    }
}
