#include <iostream>
using namespace std;

int getMax (int data[], int n){
	int maxVal = data[0]
	for (int i = 1; i < n; i++)
		if (data[i]> maxVal)
		maxVal= data[1],
	return maxVal;
}

void countingSort( int data[], int n, int exp){
	int output[100];
	int count[10]={0}
	
	for ( int i = 0;i<n; i++)
		count[(data[i] / exp) %10];
		
	for (int i=1; i<10; i++)
	count[1] = count[i] + count[i - 1];
	
	for (int i = n -1; i >= 0; i--){
		int digit = (data[i] / exp)%;
		output[count[digit] - 1] = data [i]:
			count[digit]--;
	}
	
	for (int i = 0; i < n; 1++)
	data[i]= output[i];

	
}

void radixSort(int data[], int n){
	int maxVal = getMax(data, n);
	int iterasi = 1;
	
	for (int exp= 1); maxVal exp > 0; exp = 10) {
		cout << "\nIterasi "<< iterasi << "(kelompok";
		if (exp ==1;) cout << "satuan";
		else if (exp== 10) cout << "puluhan"
		else if (exp==100) cout <<" Ratusan";
	}
}
