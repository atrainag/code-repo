#include <iostream>

using namespace std;

int main(){
    string x;
    bool weak = false;
    cin >> x;
    if(x[0]==x[1]&& x[1]==x[2] && x[3]==x[2]){
        weak = true;
    }
    else{
        for(int i =0 ; i < x.size(); i++){

            if(x[i]<9 && ((x[i]-'0')+1)%10==(x[i+1]-'0')){
                weak = true;
                break;
            }
            else if( (x[i]=='0'&& x[i+1]=='9')||(x[i+1]=='0'&& x[i]=='9')){
                weak = true;
                break;
            }
        }
    }
    if(weak){
        cout <<"Weak\n";
    }
    else{
        cout<<"Strong\n";
    }
}
