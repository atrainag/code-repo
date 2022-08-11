#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k,t=0;
    cin >> n >> k;
    vector<int> x(n);
    for(int i = 0 ; i < n ; i++){
        cin >>x[i];
    }
    k=x[k-1];
    for(int i = 0 ; i <n ;i++){
        if(x[i]>=k && x[i]!=0){
            t++;
        }
    }
    cout <<t<<endl;
}
