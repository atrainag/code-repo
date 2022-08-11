#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,r=0;
    cin >> n;
    vector<int> a(n);
    vector<bool> c(n);
    for(int i =0  ; i < n ; i++){
        cin >> a[i];
    }
    for(int i =0  ; i < n ;i++){
     //   cout << a[i]<<" "<<a[a[i]-1]<<endl;
        if(i+1==a[a[i]-1]){
            r++;
        }
    }
    cout << r/2<<endl;
}
