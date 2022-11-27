#ifndef PARTIDA
#define PARTIDA

#include <string>
#include <list>
#include <deque>
#include <iostream>
#include "Jogador.hpp"

using namespace std;

class Partida {
	
private:
	int baseBet = 100;
	Jogador* jogador;
	Jogador* dealer;
	deque<Carta> deck;

public:

	Partida(Jogador* jogador, int seed);
	~Partida();
	
	void startNewRound();
	bool dealCard();
	void printStatus();
	void initializeDeck(int seed);
	bool bet(int valor);
	void endRound();
	bool checkCash();
	bool dealerTurn();
	void endGame(int buyin);
};

#endif
