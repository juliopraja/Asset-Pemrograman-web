#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cout<< "Masukkan jumlah elemen: ",
	cin >> n;
	
	int arr[n];
	cout << "Masukkan elemen array:\n";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr + n),
	
	cout<< "Array setelah diurutkan (ascending): ";
	for(int i = 0; i < n; i++) {
		cout << arr[i] << "";
	}
	cout << endl;
	return 0;
}
