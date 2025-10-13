#include <iostream>
using namespace std;

void tampilkanArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout<<arr[i] <<" ";
	}
	cout << endl;
}

void insertionSort (int arr[], int n){
	for (int i=1; i< n;i++){
		int key = arr[1];
		int j = i -1;
		
		while (j > 0 && arr[j] > key){
			arr[j + i] = arr[j];
			j--;
		}
		arr[j+1]= key;
	}
}

int main(){
	
	int n= 5;
	int arr[5]= {1,9,3,7,5};
	
	
	
	cout << "\nData awal:";
	tampilkanArray(arr, n);
	
	insertionSort( arr, n);
	
	cout << "Hasil setelah diurutkan:";
	tampilkanArray(arr, n);
	
	return 0;
}
