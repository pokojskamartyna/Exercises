#include <iostream>
#include"Silnik.cpp"
#include"Akumulator.cpp"
#include"Naczepa.cpp"

class Samochod {

protected:
	Silnik * silnik; Silnik* silnik_tmp;
	Akumulator* akumulator; Akumulator* akumulator_tmp;
	Naczepa* naczepa; Naczepa* naczepa_tmp;

	virtual void zlozenie() = 0;

public:
	void testowanie() {
		cout << "Testowanie czesci" << endl;
	}

	void zapakowanie() {
		cout << "Zapakowanie" << endl;
	}

	virtual ~Samochod() {}
};