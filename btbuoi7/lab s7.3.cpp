#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach %d so nguyen to khac nhau:\n",n);
	for(int i=0;i<n;i++){
		int flag = 0;
		do{
			flag = 0;
			printf("Nhap so thu %d =",i);
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					flag =1;
					printf("Da ton tai %d trong danh sach\n",arr[i]);
					break;
				}
			}
			if(flag == 0){
				if(arr[i]<2){
					flag = 1;
				}else{
					for(int j=2;j<=arr[i]/2;j++){
						if(arr[i] %j==0){	
							flag = 1;
							break;
						}
					}
				}
				if(flag == 1){
					printf("So vua nhap khong phai so nguyen to\n");
				}
			}
			
		}while(flag == 1);
	}
	
	printf("Mang sau khi nhap xong:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
