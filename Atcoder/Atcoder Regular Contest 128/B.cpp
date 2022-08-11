#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n,r,g,b,t=0;
    cin >> n;
    for(int i =0 ; i <n ; i++){
        t=0;
        cin >> r >> g >>b;
        while(1){
            //cout << r << g << b <<endl;
            if((r==0&&g==0) || (g==0&&b==0) || (r==0&&b==0)){
                cout <<t<<endl;
                break;
            }
            else if((r==0&&g!=b) ||(g==0&&r!=b)||(b==0&&r!=g)){
                cout <<-1<<endl;
                break;
            }
            if(r==g){
                r--;
                g--;
                b+=2;
            }
            else if(r==b){
                r--;
                b--;
                g+=2;
            }
            else if(g==b){
                g--;
                b--;
                r+=2;
            }
            else if(r%2==g%2){
                r--;
                g--;
                b+=2;
            }
            else if(r%2==b%2){
                r--;
                b--;
                g+=2;
            }
            else if(g%2==b%2){
                g--;
                b--;
                r+=2;
            }
            t++;
        }
    }
}

