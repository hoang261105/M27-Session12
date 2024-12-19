#include<stdio.h>

int maxValue(int arr[], int n){
	int max = arr[0];
	for(int i=0; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arr[n];
	
	if(n == 0){
		printf("Khong co gia tri lon nhat!");
		return 0;
	}
	
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Danh sach phan tu: \n");
	for(int i=0; i<n; i++){
		printf("%d\t\n", arr[i]);
	}
	
	int result = maxValue(arr, n);
	printf("Phan tu lon nhat trong mang la: \n");
	printf("%d", result);
	return 0;
}
