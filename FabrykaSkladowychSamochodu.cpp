#include <iostream>
#include"Silnik.cpp"
#include"Akumulator.cpp"
#include"Naczepa.cpp"

class FabrykaSkladowychSamochodu {

public:
	virtual Silnik* produkujeSilnik() = 0;
	virtual Akumulator* produkujeAkumulator() = 0;
	virtual Naczepa* produkujeNaczepa() = 0;
	virtual ~FabrykaSkladowychSamochodu() {}
};