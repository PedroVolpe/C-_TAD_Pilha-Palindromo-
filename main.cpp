// PEDRO L M B VOLPE ----- 

#include <iostream>
#include <string>
#include <algorithm>

#include "palindromo.h"

int main(){
  std::string frase, frase_convertida;
  std::cout << "VERRIFICAR SE EH PALINDROMO\n\n";
  std::cout << "Digite uma frase:\n";
  std::getline (std::cin, frase);
  
  frase_convertida = RemoveEspacos(frase);
  frase_convertida = Minuscula(frase_convertida);
  
  if (Verifica_Palindromo(frase_convertida) == true){
    std::cout << "\nFrase convertida:\n" << frase_convertida << "\n\n";
    std::cout << "A frase:\n" << frase << "\nÉ um Palindromo"; 
  }
  else{
    std::cout << "\nFrase convertida:\n" << frase_convertida << "\n\n";
    std::cout << "A frase:\n" << frase << "\nNão é um Palindromo";
  }

  return 0;
}
