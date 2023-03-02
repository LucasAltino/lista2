#include <iostream>

using namespace std;
main(){
  	int numero, qtd;                
	
    cout << "informe um numero para fazer sua tabuada: ";
 	cin >> numero;
 	
 	cout << "informe a quantidade:";
 	cin >> qtd;
 	
	for (int i = 0; i  <= qtd; i++){
		  cout << numero << "x"<< i << " = " << numero * i << endl;
}
}
