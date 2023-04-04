#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t,n,a;
    cin >> t;
    for(int j =0  ; j < t ; j++){
         vector<int> x;
        vector<int> y;
        cin >> n;

        for(int i = 0 ; i < n ;i++){
            cin >> a;
            x.push_back(a);
        }
        int temp;
        for(int i = 0 ; i < x.size();i++){

            int r;
            r=((i + (n/2))%n-1)%n;
            if(r<0){
                r=n+r;
            }
            //cout << i <<" "<<r  << " "<<(i + (n/2))%n<<" "<< ((i + (n/2))%n+1)%n<<endl;
            temp = x[i]+x[ (i + (n/2))%n] + x[r] + x[ ((i + (n/2))%n+1)%n];
            y.push_back(temp);
        }
        sort(y.begin(),y.end());
       /* for(int i =0 ; i < y.size(); i++){
            cout << y[i]<<" ";
        }*/
        cout <<"Case #"<<j+1<<": "<< y[y.size()-1]<<endl;
    }

}



