#include "Samochod.cpp"
#include "FabrykaSkladowychTira.cpp"

class Tir : public Samochod {

private:
	FabrykaSkladowychTira * wsk;

protected:
	void zlozenie() {
		silnik_tmp = wsk->produkujeSilnik();
		silnik = silnik_tmp->podajSilnik();
		akumulator_tmp = wsk->produkujeAkumulator();
		akumulator = akumulator_tmp->podajAkumulator();
		naczepa_tmp = wsk->produkujeNaczepa();
		naczepa = naczepa_tmp->podajNaczepa();
	}
public:
	Tir(FabrykaSkladowychTira* wskTir) : wsk(wskTir)
	{
		zlozenie();
	}
	~Tir() {
		delete naczepa;
		delete naczepa_tmp;
		delete akumulator;
		delete akumulator_tmp;
		delete silnik;
		delete silnik_tmp;
	}
};