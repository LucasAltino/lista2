#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int numero,fatorial=1;
	
	cout<<"Digite um número para descobir seu fatorial: ";
	cin>>numero;
	
	for (int a=1;a<=numero;a++) {
		fatorial=fatorial*a;
	}
	cout<<"O seu fatorial é "<<fatorial<<endl;
	return 0;
}
