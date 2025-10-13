#include <iostream>
#include <algorithm>
using namespace std;

void tampilkanArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout<<arr[i] <<" ";
	}
	cout << endl;
}

void selectionSort (int arr[], int n){
	for (int i=0; i <n-1; i++){
		int idx=i;
		for (int j= i+1; j < n; j++){
			if (arr[j] < arr [idx]){
				idx = j;
			}
		}
		swap(arr[i], arr[idx]);
	}
}

int main () {
	
	int arr[]= { 5,2,8,1,9};
	int n = 5;
	
		
	cout<<"\nData awal: ";
	tampilkanArray(arr,n); 
	
	selectionSort(arr, n);
	
	cout<<"Hasil setelah diurutkan (descending):";
	tampilkanArray(arr,n);
	
	return 0;
}
