#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int n, soma = 0;
	
	cout << "Digite um número: ";
	cin >> n;
	
    
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            soma += i;
    }
    
    if(soma == n)
        cout << n << " é um número perfeito";
    else
        cout << n << " não é um número perfeito";
}
