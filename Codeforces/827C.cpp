#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    char x[8][8];
    cin >> t;
    while(t--){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>x[i][j];
            }
        }
        int ans=0;
        char an;
        for(int i=0;i<8;i++){
            for(int j=0;j<7;j++){
                if(x[i][j]!=x[i][j+1]){
                    ans=0;
                    break;
                }
                else if(x[i][j]!='.' && x[i][j+1]!='.'){
                    ans=1;
                    an=x[i][j];
                }
            }
            if(ans){
                break;
            }
        }
        if(ans){
            cout << an<<endl;
            continue;
        }
        for(int j=0;j<8;j++){
            for(int i=0;i<7;i++){
                if(x[i][j]!=x[i+1][j]){
                    ans=0;
                    break;
                }
                else if(x[i+1][j]!='.' && x[i][j]!='.'){
                    ans=1;
                    an=x[i][j];
                }
            }
            if(ans){
                break;
            }
        }
        if(ans){
            cout << an<<endl;
            continue;
        }
    }
}
