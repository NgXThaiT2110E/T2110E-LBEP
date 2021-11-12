#include<stdio.h>
int main (){
	int n,s,i;
	printf("nhap so nguyen duong n:");
	scanf("%d",&n);
	
	i = 0;
	s = 0;
	while(i <= n){
		s = s + i;
		i = i + 1;
	}
	printf("tong = %d", s);
}
