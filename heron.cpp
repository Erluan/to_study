#include "iostream"
#include "conio.h"
#include "math.h"
#include "string.h"
#include "iomanip"
#include "windows.h"
using namespace std;

int main() {
float la, lb, lc, base, altura, semper, area;
bool tri = false;
string tipo;
    
// laço de leitura

while ( tri== false) 
{     
/* Faz a leitura*/
system("cls");    
cout << "Ler lado A:" ; cin >> la;
cout << "Ler lado B:" ; cin >> lb;
cout << "Ler lado C:" ; cin >> lc;

// checa se é um triangulo
if ( la >= lb+lc || 
     lb >= la+lc || 
     lc >= la+lb || 
     la <= 0     || 
     lb <= 0     || 
     lc <= 0 
)  { cout << "Nao eh um triangulo!\n Digite outros valores!";
     getch();  // faz uma pausa
   } else tri = true;
} // fim do laço de leitura
    

/* Tipo do Triangulo */

if ( la == lb && la == lc ) 
    tipo = "equilatero";

else if ( la == lb && la != lc ||
          lb == lc && lb != la ||
          lc == la && lc != lb      
        ) tipo = "isoceles";
else 
          tipo = "escaleno";         

/* Achando a base do triangulo */

if (tipo == "equilatero") base = la; 

else if (tipo == "isoceles")
          if ( la == lb ) base = lc;
     else if ( lb == lc ) base = la;
     else                 base = lb;
else 
     if (la > lb && la > lc )     base = la;
     else if (lb > la && lb > lc )base = lb;
     else                         base = lc; 
     
/*calcular a area HERON */
semper = (la + lb + lc) /2;
area = sqrt(semper*(semper-la)*( semper-lb)*(semper - lc));

/*Calcular a altura  */
altura = (2 * area) / base;


// exibir tudo
system("cls");
setfill('2');
cout << "** Saida do Heron ** \n";
cout << "** Lado A:"       << setw(15) <<  la     << endl;
cout << "** Lado B:"       << setw(15) << lb     << endl;
cout << "** Lado C:"       << setw(15) << lc     << endl;
cout << "** Tipo..:"    << setw(15) << tipo   << endl;
cout << "** Base..:"    << setw(15) << base   << endl;
cout << "** Altura:"  << setw(15) << altura << endl;
cout << "** Area..:"    << setw(15) << area   << endl;
getch();

  

return 0; }

