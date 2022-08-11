#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>

#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)

using namespace std;

vector<int> x;
void klptn(int a,int n){
    int temp=a;
    while(a<=n){
        x.push_back(a);
        a+=temp;
    }
}
int main(){
    int k,l,m,n,d;

    cin >> k >> l >>m >> n >>d;
    klptn(k,d);
    klptn(l,d);
    klptn(m,d);
    klptn(n,d);
    int cnt ;
    if(x.size()!=0){
       sort(x.begin(),x.end());
        cnt= 1;
        rep(i,x.size()-1){
            //cout << x[i]<<" "<<x[i+1]<<endl;
            if(x[i]!=x[i+1]){
                cnt+=1;
            }
        }
    }
        else{
            cnt=0;
        }


    cout << cnt<<endl;
}

