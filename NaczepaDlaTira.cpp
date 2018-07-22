#include <iostream>
using namespace std;
#include "Naczepa.cpp"

class NaczepaDlaTira : public Naczepa {

private:
	string nazwa;
public:
	NaczepaDlaTira() {
		nazwa = "NaczepaDlaTira";
	}
	Naczepa* podajNaczepa() {
		cout << "Podaje: " << nazwa << endl;
		return new NaczepaDlaTira;
	}
};