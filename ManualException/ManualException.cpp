#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0,5; // Melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//block ini akan dieksekusi
		cout << "Pengecualian akan diekseukusi" << endl;
	}
	catch (...) {
		/* Jika selain integer maka block ini akan dieksekusi*/
		cout << "Default Pengecualian akan dieksekusi" << endl;
	}
	return 0;
}