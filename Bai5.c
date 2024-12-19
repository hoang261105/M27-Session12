#include<stdio.h>
#include<stdlib.h>

int searchQuery(int arr[], int n, int value){
	int low = 0;
	int high = n - 1;
	
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == value){
			return mid;
		}else if(arr[mid] < value){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr) / sizeof(int);
	
	int value = 7;
	
	int result = searchQuery(arr, size, value);
	if(result != -1){
		printf("Tim thay phan tu %d tai vi tri %d.\n", value, result);
	}else{
		printf("Khong tim thay!\n");
	}
	return 0;
}
