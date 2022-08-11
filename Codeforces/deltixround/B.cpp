#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;

int main(){
    int n,t,temp;

    cin >> t;
    rep(i,t){
        cin >> n;
        int s=0,op=0;
        vector<int> x(n);
        vector<int> y(n);

        rep(j,n){
            cin >> x[j];
        }
           y=x;
        rep(j,n-1){
            //cout <<x[j]%2 <<" "<<x[j+1]%2<<endl;
            if(x[j]%2 ==x[j+1]%2){
                    if(j==n-2){
                        if(x[0]==x[j]){
                            s++;
                        }
                        else{
                            op++;
                        }
                    }
                    else{
                        s++;
                        if(j==0){
                            s++;
                        }
                    }
            }
            else{
                if(s!=0){
                    temp = x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;
                    s--;
                    if(j==1){
                        s--;
                    }
                    op++;
                }
            }
        }
        if(s!=0){
            cout <<-1;
        }
        else{cout <<op;}
        cout <<"\n";
    }
}
