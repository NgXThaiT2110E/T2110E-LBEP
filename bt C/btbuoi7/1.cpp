#include<stdio.h>
int main(){
	int tien = 0;
	while(true){
		printf("  Menu quan\n1. Chon mon an\n2. Goi do uong\n3. Thanh toan\n4. Thoat chuong trinh\n");
		int n;
		scanf("%d", &n);
		
		switch(n){
			case 1:
					printf("\n1. Com ga (30.000vnd)\n2. Pho (35.000vnd)\n3. Bun (40.000vnd)\n4. Quay lai\n");
					int menu1;
					scanf("%d", &menu1);
					switch(menu1){
						case 1:
							printf("Cam on quy khach.\n\n");
							tien += 30000;
							break;
						case 2:
							printf("Cam on quy khach.\n\n");
							tien += 35000;
							break;
						case 3:
							printf("Cam on quy khach.\n\n");
							tien += 40000;
							break;
						case 4:
							break;
					}
				break;
			case 2:
					printf("\n1. Coca (10.000vnd)\n2. Nuoc loc (5.000vnd)\n3. Tra da (3.000vnd)\n4. Quay lai\n");
					int menu2;
					scanf("%d", &menu2);
					switch(menu2){
						case 1:
							printf("Cam on quy khach.\n\n");
							tien += 10000;
							break;
						case 2:
							printf("Cam on quy khach.\n\n");
							tien += 5000;
							break;
						case 3:
							printf("Cam on quy khach.\n\n");
							tien += 3000;
							break;
						case 4:
							break;
					}
			break;
			case 3:
				printf("\nSo tien phai tra: %dvnd", tien);
				printf("\nXin cam on quy khach!\n\n");
				break;
			case 4:
				printf("\nBan co muon thoat khong? \n1.co\n2.khong\n");
				int tuychon;
				scanf("%d", &tuychon);
				if(tuychon == 1){
					break;
				}else if(tuychon == 2){
					printf("\nCam on quy khach!");
					return 0;
				}
		}
	}
	
}
