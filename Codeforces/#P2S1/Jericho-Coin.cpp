#include <iostream>

using namespace std;

int main(){
    string p="";
    string s;
    int j = 0 ;
    long int n,k;
    int d=0;
    cin >> n >> k;
    cin >> s;
    long int t=k;
    for(int i = 0 ; i < s.size();i++){
        if(k>0){
            p+=s[i];
            k--;
        }
        else{
            if(p[j]==s[i]){
                if(j==t-1){
                    j=0;
                }
                else{
                    j++;
                }
            }
            else{
                if(j==t-1){
                    j=0;
                }
                else{
                    j++;
                }
                d++;
            }
        }
    }
    cout << d<<endl;
    return 0;
}

