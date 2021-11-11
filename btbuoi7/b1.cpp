#include<stdio.h>
int main(){
	int a;
	while(a>=1 && a<=4){
		printf(" 1. chon do an\n ");
		printf("2. goi do uong\n ");
		printf("3. thanh toan\n ");
		printf("4. thoat chuong trinh\n");
		printf("chon 1 trong 4 so tren : %d",a);
		scanf("%d",a);
		switch(a){
			case 1 :{
		 		printf("com ga");
			 	printf("pho");
			 	printf("bun");
		 		printf("quay lai");
		}break;
		}
	}
}
