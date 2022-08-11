#include <iostream>
#include <vector>

using namespace std;



int main(){
    int n , l;

    cin >> n;
    for(int i =0 ; i < n ; i++){
        cin >> l;
        vector<int> x(l);
        for(int j=0; j < l;j++){
            cin >> x[j];
        }
        for(int j = 0 ; j <l ;j++){
            int temp;
            for(int k =0 ; k < x.size()-1 ; k++){
            if(x[k]>x[i+1]){
                    temp = x[k];
                    x[k]=x[k+1];
                    x[k+1]=temp;
                }
            }
            for(int j =0; j < x.size();j++){
            cout << x[j]<<" ";
        }
            cout<<":";
        }
        for(int j =0; j < x.size();j++){
            cout << x[j]<<" ";
        }
        cout <<"\n";
    }

}
