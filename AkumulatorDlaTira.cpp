#include <iostream>
#include <string>
using namespace std;
#include "Akumulator.cpp"

class AkumulatorDlaTira : public Akumulator {

private:
	string nazwa;
public:
	AkumulatorDlaTira() {
		nazwa = "AkumulatorDlaTira";
	}
	Akumulator* podajAkumulator() {
		cout << "Podaje: " << nazwa << endl;
		return new AkumulatorDlaTira;
	}
};