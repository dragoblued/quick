#include <iostream>
using namespace std;
template <class X> void swap_my(X &a, X &b) {
	X t;
	t = a;
	a = b;
	b = t;	
}
int partition(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];
	while (i <= j) {
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if(i >= j) break;
		swap_my(arr[i++], arr[j--]);
	}
	return j;
}
void quickSort(int arr[], int left, int right) {
	if(left < right) {
		int q = partition(arr, left, right);
		quickSort(arr, left, q);
		quickSort(arr, q + 1, right);	
	}
}

int main() {
	int arr[6] = {1,12,5,26,7,11};
	quickSort(arr, 0, 5);
	for(int i = 0; i < 6; i++) 
		cout << arr[i] << " ";
	return 0;
}
