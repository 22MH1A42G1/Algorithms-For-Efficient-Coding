#include<stdio.h>
int binary_search(int A[], int key, int len) {
 	int low = 0;
 	int high = len -1;
 	while (low <= high) {
 		int mid = low + ((high - low) / 2);
 		if (A[mid] == key) {
 			return mid; 
 		}
 		if (key < A[mid]) {
			high = mid - 1;
		}
 		else {
			low = mid + 1;
		} 
	}
	return -1;
}
int main() {
	int a[10]={1,3,5,7,9,11,13,15,17,21};
	int key = 3;
	int position = binary_search(a, key, 10);
	if (position == -1){
		printf("Not found");
		return 0; 
	}
	printf("Found it at %d", position);
	return 0;
 }
