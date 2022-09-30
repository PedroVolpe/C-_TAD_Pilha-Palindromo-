// PEDRO L M B VOLPE -----

#ifndef __PALINDROMO_H__
#define __PALINDROMO_H__

#include <iostream>
#include <string>

const int TAMANHO_PILHA = 100;

// Pilha que armazena chars 

struct Pilha{

  int topo;
  char elementos[TAMANHO_PILHA];
};
//Chamada das funções
std::string Minuscula(std::string minu);
std::string RemoveEspacos(std::string frase);
bool Verifica_Palindromo(const std::string Frase);
bool Push(Pilha &pilha, char elemento);
char Pop(Pilha &pilha);
char Top(const Pilha &pilha);
Pilha Criar_Pilha();

#endif
