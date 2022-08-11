#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a(5);
    cin >> a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    vector<int> b(5);
    vector<int> c(5);
    vector<int> d(5);
    for(int i=0;i<5;i++){
        d[i]=0;
        b[i]=10-a[i]%10;
        if(b[i]==10)b[i]=0;
      //  cout <<b[i]<<" ";
    }
    c=b;
    sort(c.begin(),c.end());
    int ans=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(c[i]==b[j]&& d[j]==0){
                ans+=a[j]+c[i];
                if(i==4)ans-=c[i];
                //cout << a[j]<<" "<<c[i]<<endl;
                d[j]=1;
                break;
            }

        }
    }
    cout << ans <<endl;
}
