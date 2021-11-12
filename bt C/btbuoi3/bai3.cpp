#include<stdio.h>
int main(){
	int a,b,i;
	printf("nhap ngay: ");
	scanf("%d",&a);
	printf("nhap thang: ");
	scanf("%d",&b);
	i = a;
	if(a > 0 && a<= 31){
		if(b == 1){
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 2 && a <= 28){
			i = a + 31;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 3){
			i = a + 31 + 28;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 4 && a <= 30){
			i = a + 31 + 28 + 31;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 5){
			i = a + 31 + 28 + 31 + 30;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 6 && a <= 30){
			i = a + 31 + 28+ 31 + 30 + 31;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 7){
			i = a + 31 + 28+ 31 + 30 + 31 + 30;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 8 && a <= 30){
			i = a + 31 + 28+ 31 + 30 + 31 + 30 + 31;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 9){
			i = a + 31 + 28+ 31 + 30 + 31 + 30 + 31 + 30;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 10 && a <= 30){
			i = a + 31 + 28+ 31 + 30 + 31 + 30 + 31 +30 + 31;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 11){
			i = a + 31 + 28+ 31 + 30 + 31 + 30 + 31 +30 + 31 + 30;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
		if(b == 12 && a <= 30){
			i = a + 31 + 28+ 31 + 30 + 31 + 30 + 31 +30 + 31 + 30 + 31;
			printf("so ngay trong nam la: %d\n",i);
			if(i%7 != 0){
				printf("thu %d",i%7 + 1);
			}else{printf("chu nhat");}
		}
	}else{printf("error...");}
}
