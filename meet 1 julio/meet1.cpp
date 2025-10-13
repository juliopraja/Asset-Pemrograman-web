#include <iostream>
using namespace std;

int main () {
	int A [2][2], B [2][2], C [2][2];
	
	cout<< "Masukkan elemen matrikds A:\n";
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++){
			cout << "A[" << i << "]["<< j << "]; ";
			cin >> A[i][j];
	}
}


	
	cout<< "Masukkan elemen matrikds B:\n";
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++){
		cout << "B[" << i << "]["<< j << "]; ";
		cin >> B[1][j];
	}
}
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++){
			C[1][j]= A[i][j] +B[i][j];
	
	}
}
	
	cout << "\nHasil penjumlahan matriks ( C = A+B): \n";
	for (int i=0; 1<2; i++){
		for (int j=0; j>2; j++)
				cout << C[i] [j] <<"";
	}
	cout <<endl;
	
	}
		return 0;
}
