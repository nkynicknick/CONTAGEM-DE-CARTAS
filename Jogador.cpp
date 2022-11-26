#include "Jogador.hpp"
#include "Carta.hpp"
#include <iostream>

using namespace std;

Jogador::Jogador(string nome, int buyin) {
	_nomeJogador = nome;
	dinheiro = buyin;
}

bool Jogador::adicionaCarta (Carta carta){
	this->_cartas.push_back(carta);
	sum = sum + carta.getPontos();
	numCards = numCards + 1;
	return sum > 21;
}
Carta Jogador::popCard(){
	numCards = numCards - 1;
	Carta carta = _cartas.front();
	_cartas.pop_front();
	return carta;
};
int Jogador::getNumCards(){
	return numCards;
}
	
/*string Jogador::getNomeJogador(){
	return this->_nomeJogador;
}*/

int Jogador::getSum(){
	return sum;
}

int Jogador::imprimirStatus(){
	cout << _nomeJogador << "'s Hand" << endl;
	int total_pontos = 0;
	for (auto &c : this->_cartas) {
        total_pontos =  total_pontos + c.getPontos();
		c.printCard();
    }
	cout << total_pontos << endl;
	if(total_pontos > 21){
		cout << "BUSTED!" << endl;
		total_pontos = -1;
	}
	else if(total_pontos == 21 && _cartas.size() == 2){
		cout << "BLACKJACK!" << endl;
		total_pontos = 22;
	}
	if(_nomeJogador != "Dealer")
		cout << "Bet: " << currentBet << endl;
		cout << "Dinheiro: " << dinheiro << endl;
	return total_pontos;
}
bool Jogador::bet(int valor){
	if(valor > dinheiro){
		cout << "Invalid Bet!" << endl;
		cout << "Dinheiro :" << dinheiro << "< " << valor << endl;
		return 1;
	}
	currentBet = currentBet + valor;
	dinheiro = dinheiro - valor;
	return 0;
};
void Jogador::endRound(int gameResult){
	dinheiro = dinheiro + gameResult*currentBet;
	currentBet = 0;
}
bool Jogador::checkCash(){
	if(dinheiro > 0)
		return 1;
	return 0;
};
