#include <iostream>  
using namespace std;
float primo(int n)
{

      if(n == 1 || n == 0) return false;
   

      for(int i = 2; i < n; i++)
      {
        if(n % i == 0) return false;
      }
      return true;
}
 
int main()
{
	float a;
	
	cout << "informe um numero e veja seus primos anteriores : ";
 	cin >> a;
    int N = a;
    
 
      for(int i = 1; i <= N; i++)
      {
          if(primo(i))
          {
            cout << i << " ";
          }
    }
 
    return 0;
}
