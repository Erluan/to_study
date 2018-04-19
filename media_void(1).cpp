#include "iostream"
#include "conio.h"
#include "math.h"
#include "string.h"
#include "iomanip"
#include "windows.h"
using namespace std;

/* declaração da função */
void get_media( float n1, float n2 ) {
     float media = (n1 + n2)/2;
     cout << "Media:" << media << endl;
     getch();                        }
     

int main() {float a, b;
    system("cls");
    cout << "nota1:"; cin >> a;
    cout << "nota2:"; cin >> b;
  
    get_media(a, b); // executa a função void
   
    get_media(10, 7); // executa a função void
    
    
return 0;  }


