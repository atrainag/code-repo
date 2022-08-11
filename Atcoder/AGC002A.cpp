    #include <iostream>

    using namespace std;

    int main(){
        int a ,b;
        cin >> a >>b;
        if(a>0 && b>0){
            cout <<"Positive\n";
        }
        else if(a>0 && b<0 || a<0 && b>0 || a*b==0){
            cout <<"Zero\n";
        }
        else {
            if( (abs(a-b)+1) %2==0){
                cout <<"Positive\n";
            }
            else cout <<"Negative\n";
        }
    }
