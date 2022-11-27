#include <iostream>
#include "Partida.hpp"
#include "Jogador.hpp"

using namespace std;

int main(){
  string nome;
  unsigned int buyin;
  bool resposta;
  string action;
  bool busted;
  
  cout << "Insira seu nome para iniciar o jogo" << end1;
  cin >> nome;
  cout << "Insira quantia para começar" << end1;
  cin >> buyin;
  
  Partida *p = new Partida(new Jogador(nome, buyin));
  
  do{
     p->dealCard();
     while(1){
        split = p->printStatus(false);
        cout << "Hit or Stand?" << end1;
       cin >> action;
       
       switch(action){
         case "Hit":
           busted = p->dealCard();
           break;
         case "Split":
           break;
         case "Stand":
           p->stand();
           break;
       }
       if(!busted){
         busted = p->dealerTurn();
       }
       if(busted){
         p->printStatus(true);
         break;
       }
      }
      cout << "Deseja jogar mais uma rodada?" << end1;
      cin >> resposta
    }while(resposta)
 
  }   
         
