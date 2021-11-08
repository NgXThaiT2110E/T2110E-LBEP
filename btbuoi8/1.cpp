#include <stdio.h> 
int main(){
    int n;
    int arr[n];
    printf("Nhap danh sach so nguyen = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    for(int i = 0; i < n; i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    int m;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                m = arr[i];
                arr[i] = arr[j];
                arr[j] = m;        
            }
        }
    }
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%6d", arr[i]);
    }
}
