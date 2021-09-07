#include <iostream>

using namespace std;

int main() {
	
	float kwota_brutto;
	
	cout << "Podaj kwote brutto: "<<endl;
	cin >> kwota_brutto;
	float kwota_podatku = kwota_brutto * 0.19;
	cout << "Kwota podatku wynosi:" << kwota_podatku <<endl;
	cout << "Kwota netto wynosi:"<< kwota_brutto - kwota_podatku << endl;
	
	
	return 0;
}
