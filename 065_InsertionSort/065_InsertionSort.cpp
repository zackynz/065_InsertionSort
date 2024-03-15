#include <iostream>
using namespace std;

int arr[12];
int n;

void input() {
	while (true) {
		cout << " Masukan banyaknya elemen pada array : "; // menampilkan ke layar
		cin >> n; // input dari user
		if (n <= 12) // jika kurang atausama dengan 20
			break; // keluar dari loop
		else
		{
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // menampilkan ke layar
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];

	}

}

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) { // step 1
		temp = arr[i]; //step 2
		j = i - 1; // step 3
		while (j >= 0 && arr[j] > temp) //step4
		{
			arr[j + 1] = arr[j]; //step 4a
			j = j - 1; //step 4b
		}
		arr[j + 1] = temp; //step 5
	}
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "Jumblah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {

	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}