#include <iostream>
#include <string>
#include"Silnik.cpp"
using namespace std;

class SilnikDlaOsobowki : public Silnik {

private:
	string nazwa;
public:
	SilnikDlaOsobowki() {
		nazwa = "SilnikDlaOsobowki";
	}
	Silnik* podajSilnik() {
		cout << "Podaj�: " << nazwa << endl;
		return new SilnikDlaOsobowki;
	}
};