#include <iostream>  
using namespace std;  
int main()  {
	setlocale(LC_ALL,"Portuguese");  
	int numeros,soma=0,res;

	cout<<"Digite um n�mero para somar seus caracteres: ";    
	cin>>numeros;
	    
	while(numeros>0){    
		res=numeros%10;    
		soma=soma+res;    
		numeros=numeros/10;    
}    
	cout<<"A soma de seus digitos � "<<soma<<endl;    
	return 0;  
}  
