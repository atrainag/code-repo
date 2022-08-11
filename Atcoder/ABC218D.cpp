#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,t=0;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i =  0 ; i <n ; i++){
        cin >> x[i]>>y[i];
    }
    bool found=false;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <n ; j++){
            if(i!=j){
                if(x[i]==x[j]) {
                    for(int k = 0 ; k < n ;k++){
                        if(k!=j){
                            if(y[j]==y[k]){
                                for(int l =0 ; l < n ; l++){
                                    if(k!=l){
                                        if(x[k]==x[l]){
                                            if(x[l]==x[i]){
                                                t++;
                                                found = true;
                                                break;

                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if(found){break;}
                    }
                }
            }
            if(found){found = false;}
        }
    }
    cout << t <<endl;
}
