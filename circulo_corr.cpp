#include "iostream"
#include "conio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"
using namespace std;
// variaveis e cosntantes globais

 const float pi = 3.14;    
 float are, compr, raio, dia;

// functions e voids
void set_comprimento() {
      cout << "Comprimento:"; 
      cin >> compr;     } 
      
void set_diametro( float cp ) {
      dia = (cp / pi) ;        }
 
void set_raio(float dia ) {
     raio = (dia/2);      }

void set_area(float raio )    {
     are = pow(raio, 2) * pi; }

void exibir(float cp, float di, float ra, float ar )
{ system("cls");
  cout << "*** Area do Circulo \n \n " << endl;
  cout << "Comprimento..:" << cp << endl;
  cout << "Diametro.....:" << di << endl;
  cout << "Raio.........:" << ra << endl;
  cout << "Area.........:" << ar << endl;
  getch(); // pausa 
}

void trata_menu_circulo(int op)
{
     if (op == 1) set_comprimento();

     else if (op == 2)  {// calcular 
      set_diametro(compr) ; // calc diametro
      set_raio(dia); // calc raio
      set_area(raio);        // calc area
                        }
     
     else if (op == 3)  exibir(compr, dia, raio, are);
     } // fim do trata_menu
     
     
void exec_circulo(){
     int op = -1;
     while (op != 4) {
     cout << "*** Tela de Entrada ***" << endl;
     cout << "*** 1 - Ler Comprimento..." << endl;
     cout << "*** 2 - Calcular.........." << endl;
     cout << "*** 3 - Resultados........" << endl;
     cout << "*** 4 - Sair.............." << endl;
     cout << " \n \n \n item > ";      
     cin >> op;

     trata_menu_circulo(op) ; // chama trata_menu
      }}

int main ()    {
    
   exec_circulo();
        
    return 0 ; }
