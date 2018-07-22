#include <iostream>
#include <string>
using namespace std;
#include "Akumulator.cpp"

class AkumulatorDlaOsobowki : public Akumulator {

private:
	string nazwa;
public:
	AkumulatorDlaOsobowki() {
		nazwa = "AkumulatorDlaOsobowki";
	}
	Akumulator* podajAkumulator() {
		cout << "Podaje: " << nazwa << endl;
		return new AkumulatorDlaOsobowki;
	}
};