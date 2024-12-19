#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void oddEven(int arr[], int n, char condition[]){
	for(int i=0; i<n; i++){
		if(arr[i] % 2 == 0 && strcmp(condition, "chan") == 0){
			printf("%d\t", arr[i]);
		}else if(arr[i] % 2 != 0 && strcmp(condition, "le") == 0){
			printf("%d\t", arr[i]);
		}	
	}
	printf("\n");
}

void bigger(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[i] > 0){
			printf("%d\t", arr[i]);
		}else{
			printf("Khong co phan tu nao thoa man");
		}
	}
	printf("\n");
}

int main(){
	char condition[10];
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	do{
		printf("----------------MENU----------------\n");
		printf("1. Nhap dieu kien tim kiem (chan/le)\n");
		printf("2. Nhap dieu kien tim kiem (lon hon 0)\n");
		printf("3. Thoat\n");
		printf("Moi ban chon: ");
		
		int choice;
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Nhap dieu kien tim kiem (chan/le): ");
				scanf("%s", condition);
				oddEven(arr, n, condition);
				break;
			case 2:
				bigger(arr, n);
				break;
			case 3:
				exit(0);
			default:
				printf("Vui long nhap lai:");
		}
	}while(1==1);
	return 0;
}
