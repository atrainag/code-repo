#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ihi=0,hi=0,a;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>hi){
            ihi=i;
            hi=a;
        }
    }
    cout << ihi+1<<endl;
}
