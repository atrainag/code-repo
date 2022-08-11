#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < n; ++i)
#define INF 1010000000
using namespace std;

int main(){
    string a[4];
    int e=false,b=false,c=false,d=false;
    cin >> a[0]>>a[1]>>a[2]>>a[3];
    for(int i =0  ; i < 4 ;i++){
        if(a[i]=="H"){
            b=true;
        }
        else if(a[i]=="2B"){
            c=true;
        }
        else if(a[i]=="HR"){
            d=true;
        }
        else if(a[i]=="3B"){
            e=true;
        }
    }
    if(b&&c&&d&&e){
        cout << "Yes\n";
    }
    else{cout <<"No\n";}
}


