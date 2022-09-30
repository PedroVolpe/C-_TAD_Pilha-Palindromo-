// PEDRO L M B VOLPE ----- 
#include <iostream>
#include <string>
#include <algorithm>

#include "palindromo.h"

// Função para converter todos os caracteres de uma string para minusculo
std::string Minuscula(std::string minu){
  
  for (int i = 0; i < minu.length(); i++){
    if (minu[i] >= 'A' && minu[i] <= 'Z') {
      minu[i] += 32;
    }
  }
    return minu;
}

// Função para remover os espaços da string
std::string RemoveEspacos(std::string frase){
  
    frase.erase(std::remove(frase.begin(), frase.end(), ' '), frase.end());
    return frase;
}

bool Verifica_Palindromo(std::string frase){
  
  Pilha pilha = Criar_Pilha(); 
  int tam_frase = frase.length();
  
  // Armazenar a string concatenada em uma pilha.
  for (int i = 0; i < (tam_frase); i++){
    Push(pilha,frase[i]);
  }
  // Comparar o topo da pilha com o primeiro caracter da string concatenada.
  for (int j = 0; j < (tam_frase); j++){
    if (Top(pilha) != frase[j])
      return false; // Não é palindromo 
    Pop(pilha);
  }

  return true; // É palindromo
}
//Adiciona um elemento na pilha
bool Push(Pilha &pilha, char elemento){
  // Verificar se a pilha está cheia
  if (pilha.topo == TAMANHO_PILHA)
    return false; // ERROR (PILHA CHEIA)
  
  pilha.elementos[pilha.topo] = elemento;
  pilha.topo++;
  return true;
}
//Remove um elemento da pilha
char Pop(Pilha &pilha){
  //Verificar se a pilha está vazia
  if (pilha.topo == 0)
    return '\0'; // ERROR (PILHA VAZIA)

  char auxiliar = pilha.elementos[pilha.topo - 1];
  pilha.elementos[pilha.topo - 1] = '\0';
  pilha.topo--;
  return auxiliar;
}
//Mostra o elemento do topo da pilha
char Top(const Pilha &pilha){
  //Verifica se a pilha está vazia
  if (pilha.topo == 0)
    return '\0'; // ERROR (PILHA VAZIA)
  
  return pilha.elementos[pilha.topo - 1];
  
}
//Cria uma nova pilha vazia
Pilha Criar_Pilha(){
  Pilha pilha;
  pilha.topo = 0;
  for (int i = 0; i < TAMANHO_PILHA; i++){
    pilha.elementos[i] = '\0';

  return pilha;
  }
}
