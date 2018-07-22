#include"FabrykaSkladowychSamochodu.cpp"
#include"SilnikDlaOsobowki.cpp"
#include"AkumulatorDlaOsobowki.cpp"

class FabrykaSkladowychOsobowki : public FabrykaSkladowychSamochodu {

public:
	Silnik * produkujeSilnik() {
		return new SilnikDlaOsobowki;
	}

	Akumulator* produkujeAkumulator() {
		return new AkumulatorDlaOsobowki;
	}

	Naczepa* produkujeNaczepa() {
		return NULL;
	}
};