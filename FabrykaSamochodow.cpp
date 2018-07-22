#include "Osobowka.cpp"
#include "Tir.cpp"

class FabrykaSamochodow {

private:
	Samochod * zlozSamochod(string typ) {
		Samochod* samochod;
		if (typ == "Osobowka")
			samochod = new Osobowka(new FabrykaSkladowychOsobowki());

		else
			samochod = new Tir(new FabrykaSkladowychTira());

		return samochod;
	}

public:
	Samochod * przygotujAuto(string typ) {
		Samochod* samochod = zlozSamochod(typ);
		samochod->testowanie();
		samochod->zapakowanie();
		return samochod;
	}
};