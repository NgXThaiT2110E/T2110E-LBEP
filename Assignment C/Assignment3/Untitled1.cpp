#include<stdio.h>
int main(){
	int a;
	printf("a = ");
	scanf("%d", &a);
	
	switch (a)
	{
		case 2 : printf("day la thu %d", a);break;
		case 3 : printf("day la thu %d", a);break;
		case 4 : printf("day la thu %d", a);break;
		case 5 : printf("day la thu %d", a);break;
		case 6 : printf("day la thu %d", a);break;
		case 7 : printf("day la thu %d", a);break;
		case 8 : printf("day la chu nhat");break;
		default : printf("khong phai cac ngay trong tuan");break;
	}
	
	
} 
