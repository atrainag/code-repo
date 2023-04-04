#include <iostream>
#include <vector>


using namespace std;

int main(){
    int a,b;
    int mx=-1;
    int n;
    while(cin>>a>>b){
        mx=-1;
        int l=a,r=b;
        if(a>b){
            int temp = l;
            l=r;
            r=temp;
        }

        for(int j = l;j<=r;j++){
            int i = j;
            n=0;
            while(1){
                if(i%2!=0){
                    i=3*i+1;
                }
                else{
                    i/=2;
                }
                n++;
                if(i==1){
                    break;
                }
            }
            //cout << n <<" "<<mx<<endl;
            if(n>mx){
                mx=n;
            }
        }
        cout << a <<" "<< b <<" "<<mx+1<<endl;
    }
}
