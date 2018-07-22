#include <iostream>
#include <string>
#include"Silnik.cpp"
using namespace std;

class SilnikDlaTira : public Silnik {

private:
	string nazwa;
public:
	SilnikDlaTira() {
		nazwa = "SilnikDlaTira";
	}
	Silnik* podajSilnik() {
		cout << "Podajê: " << nazwa << endl;
		return new SilnikDlaTira;
	}
};