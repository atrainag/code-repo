#include <iostream>
#include <vector>

using namespace std;

bool pal(int i){
    if(i/10000 == i%10 && (i/1000)%10 == (i%100)/10){
        return true;
    }
    return false;
}

int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    for(int i = a; i <= b ;i++){
        if(pal(i)){
            ans++;
        }
    }
    cout << ans <<endl;
}


