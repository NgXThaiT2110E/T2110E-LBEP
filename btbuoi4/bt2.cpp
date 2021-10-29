#include<stdio.h>
int main(){
	int S = 0;
	int n = 1;
	
	while(n<200 && n > 0){
		S = S + n;
		n += 2;
	}printf("Tong 100 so le dau tien = %d",S);
}
