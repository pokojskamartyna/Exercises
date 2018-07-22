#include <iostream>
#include <string>
#include"All.cpp"
using namespace std;

int main() {

	FabrykaSamochodow* fabrykasamochodow = new FabrykaSamochodow();

	Samochod* osobowka = FabrykaSamochodow->przygotujAuto("Osobowka");
	Samochod* tir = FabrykaSamochodow > przygotujAuto("Tir");

	system("pause");
	return 0;

}