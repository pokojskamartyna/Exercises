#include <iostream>
#include <string>
using namespace std;

class Silnik {

public:
	virtual Silnik* podajSilnik() = 0;
	virtual ~Silnik() {}
};