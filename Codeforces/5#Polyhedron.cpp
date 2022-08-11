#include <iostream>

using namespace std;

int main(){
    string s;
    int n;
    int tot=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        if(s=="Tetrahedron"){
            tot+=4;
        }
        else if(s=="Cube" ){
            tot+=6;
        }
        else if(s=="Octahedron" ){
            tot+=8;
        }
        else if(s=="Dodecahedron" ){
            tot+=12;
        }
        else if(s=="Icosahedron" ){
            tot+=20;
        }
    }
    cout << tot;
}
