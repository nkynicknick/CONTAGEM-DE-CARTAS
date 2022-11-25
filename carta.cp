#include "Carta.hpp"

Carta::Carta(int numeroPontosPadrao, int naipe){
	this->valorCarta = numeroPontosPadrao;
	this->_naipe = naipe;

}
string Carta::getNaipe(){
	return this->_naipe;
}

void Carta::setNaipe(string naipe){
	this->_naipe = naipe;
}	

int Carta::getNumeroPontosPadrao(){
	return this->valorCarta;
}

void Carta::setNumeroPontosPadrao(int numeroPontosPadrao){
	this->valorCarta = numeroPontosPadrao;
}

int Carta::getTotalPontos(){
	if(valorCarta<=10)
		return valorCarta;
	
	else if(valorCarta==14)
		return 11;
