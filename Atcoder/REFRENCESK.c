#include <stdio.h>

void swp(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main(){
	int t,a,b,d,e,f;
	char s[101][101];
	int tbl[101][4];
	int temp;
	scanf("%d", &t);
	for(int i = 0;i<t;i++){
		scanf("%d %d", &a,&b);

		for(int j = 0;j<a;j++){
			scanf("%s %d %d %d", s[j], &tbl[j][0],&tbl[j][1],&tbl[j][2]);
		}

		for(int j = 0;j<b;j++){
			scanf("%d %d %d", &d,&e,&f);
            if(d == 1){
                for(int k = 0;k<=(f-e)/2;k++){
                    for(int p = 0;p<3;p++){
                        swp(&tbl[e-1+k][p],&tbl[f-k-1][p]);
                    }
                }
            }
			if(d == 2){
				for(int k = e-1;k<f;k++){
					swp(&tbl[k][0],&tbl[k][2]);
					swp(&tbl[k][0],&tbl[k][1]);
                }
            }
            /*for(int j = 0;j<a;j++){
                printf("%s %d %d %d\n", s[j], tbl[j][0],tbl[j][1],tbl[j][2]);
            }*/
        }

		printf("Case #%d:\n", i+1);



		for(int j = 0;j<a;j++){
			printf("%s %d\n", s[j],tbl[j][2]);
        }

    }
}
