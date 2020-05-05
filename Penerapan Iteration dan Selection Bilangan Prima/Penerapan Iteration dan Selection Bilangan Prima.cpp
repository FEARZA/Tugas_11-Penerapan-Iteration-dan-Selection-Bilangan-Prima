#include <iostream>

using namespace std;

int main(){
	int awal, akhir;
	
	cout << "masukan nilai awal >> "; cin >> awal;
	cout << "masukan nilai akhir >> "; cin >> akhir;
	cout << endl;
	
	for ( int a = awal ; a <= akhir ; a++ ){
		int nilai = 0;
		for (int b = 1; b <= a; b++){
			if (a % b == 0){
				nilai++;
			}
		}
		
		if (nilai == 2){
			cout << a << "       bilangan Prima *" << endl;
		}else if (nilai >= 2){
			cout << a << " bukan bilangan Prima" << endl;
		}
	}
}
