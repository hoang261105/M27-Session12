#include<stdio.h>

void searchValue(int arr[], int n, int value){
	int found = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == value){
			printf("So %d duoc tim thay trong mang\n", arr[i]);
			found = 1;
		}
	}
	
	if(!found){
		printf("So %d khong co trong mang\n", value);
	}
}

int main(){
	int n, value;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Nhap gia tri tim kiem: ");
	scanf("%d", &value);
	
	searchValue(arr, n, value);
	return 0;
}
