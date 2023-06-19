#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	// Membuka file dalam mode menulis
	ofstream outfile;
	// Menunjuk ke sebuah nama File
	outfile.open(NamaFile, ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	// Unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// Loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		// Menulis dan Memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
}