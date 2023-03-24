#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "masukan jumlah data pada array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) 
	{
		cout << "Data ke-" << (i + 1);
	}
}

void insertionsort() {
	int temp;
	int j;

	for (int i = 1; i < n; i++) {

		temp = arr[i];

		j = 1 - 1;

		while (j >= 0 && arr[j] > temp)

		{
			arr[j + 1] = arr[j];
			j--;
		}
	}
	arr[j + 1] = temp;

}