#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int fi=1;
    int a,b;
    for(int i=0;i<n;i++){
        if(fi && s[i]!='.'){
            a=i+1;
            fi=0;
        }
        if(i==n-1){
            b=i+1;
        }
        else if(!fi && s[i]!=s[i+1]){
            if(s[i+1]=='.'){
                if(s[i]=='R'){
                    b=i+2;
                }
                else if(s[i]=='L'){
                    b=a-1;
                    a=i+1;
                }
            }
            else{
                b=i+1;
            }
            break;
        }
    }
    cout << a<< " "<<b<<endl;
}
