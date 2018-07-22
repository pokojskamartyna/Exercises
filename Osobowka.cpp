#include "Samochod.cpp"
#include "FabrykaSkladowychOsobowki.cpp"

class Osobowka : public Samochod {
private:
	FabrykaSkladowychOsobowki * wsk;

protected:
	void zlozenie() {
		silnik_tmp = wsk->produkujeSilnik();
		silnik = silnik_tmp->podajSilnik();
		akumulator_tmp = wsk->produkujeAkumulator();
		akumulator = akumulator_tmp->podajAkumulator();
	}

public:
	Osobowka(FabrykaSkladowychOsobowki * wskOs) : wsk(wskOs) // sprawdzic dlaczego tak!!
	{
		zlozenie();
	}

	~Osobowka() {
		delete akumulator;
		delete akumulator_tmp;
		delete silnik;
		delete silnik_tmp;
	}
};