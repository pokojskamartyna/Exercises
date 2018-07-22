#include "FabrykaSkladowychSamochodu.cpp"
#include"SilnikDlaTira.cpp"
#include"AkumulatorDlaTira.cpp"
#include"NaczepaDlaTira.cpp"

class FabrykaSkladowychTira : public FabrykaSkladowychSamochodu {

public:
	Silnik * produkujeSilnik() {
		return new SilnikDlaTira;
	}

	Akumulator* produkujeAkumulator() {
		return new AkumulatorDlaTira;
	}

	Naczepa* produkujeNaczepa() {
		return new NaczepaDlaTira;
	}
};