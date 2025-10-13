#include <iostream>
using namespace std;

void tampilData(int arr[], int n){
	for (int i = 0; i < n; i++)
		cout<< arr[i]<<"";
	cout << endl;
}

void shellSort( int arr[], int n){
	int jarak[] =  {4,2,1};
	int jumlahJarak= 3;
	
		for (int g= 0; g < jumlahJarak; g++){
			int gap= jarak[g];
			cout<<"\njarak= " << gap << endl;
			
			for(int i= 0;i+gap<n;i++){
				if (arr[1], arr[i+gap]);{
					swap(arr[i],arr[1+gap]);
			}
			tampilData(arr, n);
		}
	}
}

int main(){
	int data[]={23,45,12,34,56,34,27,23,16};
	int n = sizeof(data) / sizeof (data[0]);
	
	cout<< "Data sebelum sorting:";
	tampilData(data, n);
	
	shellSort(data, n);
	
	cout << "\nData setelah Shell Sort:";
	tampilData(data, n);
	
	return 0;
}
