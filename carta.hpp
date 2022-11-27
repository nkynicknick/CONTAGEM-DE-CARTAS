#ifndef CARTA
#define CARTA

#include <string>

using namespace std;

class Carta {
private:
	static constexpr int COPAS = 0;
	static constexpr int ESPADAS = 1;
	static constexpr int OUROS = 2;
	static constexpr int PAUS = 3;
	static constexpr int J = 11;
	static constexpr int Q = 12;
	static constexpr int K = 13;
	static constexpr int A = 14;
	static constexpr int A_ = 1;
	

	int valorCarta;
	int _naipe;

public:
	Carta(int numeroPontosPadrao, int naipe);
	
	int getPontos();

	void printCard();
};

#endif
