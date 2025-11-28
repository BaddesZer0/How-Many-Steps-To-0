#include <iostream>
using namespace std;
int main() {

	int sayi, sayac;
	sayac = 0;

	cout << "Kac adimda 0'a ulasacaginin hesaplanmasi icin bir sayi giriniz:";
	cin >> sayi;

	while (sayi > 1) {

		if (sayi % 2 == 0) {

			sayi /= 2;

			sayac++;

			cout << sayi << endl;
		}
		
		else {

			sayi -= 1;

			sayac++;

			cout << sayi << endl;
		}
	}
    cout << "0" << endl;
	
	cout << sayac << " adimda 0'a ulasir";

	return 0;
}
