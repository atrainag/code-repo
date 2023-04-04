#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,t;
    cin >>t;
    while(t--){
        cin >>n;
        vector<int> x(n);
        for(int i =0;i<n;i++){
            cin >> x[i];
        }
        if(n==1){
            cout << 0<<endl;
            continue;

        }
        int ans=0;
        int temp=0;
        for(int i =0;i<n;i++){
            if(i==n-1){
                if(temp>0)
                ans+=temp;
                temp=0;
            }
            else if(x[i]%2 == x[i+1]%2){
                temp++;
            }
            else{
                if(temp>0)
                ans+=temp;
                temp=0;
            }
            //cout <<temp<<endl;
        }
        cout << ans <<endl;
    }
}
