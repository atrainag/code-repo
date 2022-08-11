    #include <iostream>

    #define rep(i,n) for(int i=0; i < n;i++)
    using namespace std;

    int main(){
        int n, a[3][3],x;
        bool t[3][3];
        rep(i,3){
            rep(j,3){
                cin >> a[i][j];
                t[i][j]=false;
            }
        }
        cin >> n;
        rep(i,n){
            cin >> x;
            bool skip=false;
            rep(j,3){
                rep(k,3){
                    if(x == a[j][k]){
                        t[j][k]=true;
                        skip = true;
                        break;
                    }
                }
                if(skip){
                    skip=false;
                    break;
                }

            }
        }
        bool bingo = false;
        int row=0,ca=0,cb=0,cc=0,diag=0;
        rep(i,3){

            rep(j,3){
                //cout <<t[i][j];
                if(t[i][j]){
                    row++;
                    if(i==j){
                        diag++;
                    }
                    if(j==0){-
                        ca++;
                    }
                    else if(j==1){
                        cb++;
                    }
                    else if(j==2){
                        cc++;
                    }

                }
            }
           // cout <<"\n";
            if(row == 3 || ca==3 || cb==3 || cc==3|| diag == 3 || (t[0][2]&&t[1][1]&&t[2][0])){
                bingo = true;
                break;
            }
            row =0;
        }
        if(bingo){
            cout << "Yes\n";
        }
        else{cout <<"No\n";}

    }
