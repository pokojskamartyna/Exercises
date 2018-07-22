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
		cout << "Podajê: " << nazwa << endl;
		return new SilnikDlaOsobowki;
	}
};