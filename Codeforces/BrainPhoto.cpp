#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char photo[n][m];
    int warna=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> photo[i][j];
            if(photo[i][j]!='B' && photo[i][j]!='W' && photo[i][j]!='G' ){
                warna=1;
            }
        }
    }
    if(warna){
        cout <<"#Color\n";
    }
    else{
        cout << "#Black&White\n";
    }
}
