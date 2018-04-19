#include "iostream"
#include "conio.h" 
#include "math.h"
#include "windows.h"   
#include "string.h"
#define media 6
using namespace std;

/*Variáveis Globais*/
float nota1, nota2, notafinal;
string status;  //aprovado ou reprovado

int main() {
int op = -1; 
    
while (op != 4) // laço menu
{
/* Tela */
system("cls");
cout << " **** Media_Menu **** " <<endl; 
cout << " 1 - Ler notas.. " <<endl; 
cout << " 2 - Calcular media... " <<endl; 
cout << " 3 - Exibir Dados..." <<endl; 
cout << " 4 - Sair *** " <<endl; 

cout << " \n \n item> "; cin >> op;

 /* Tela */          
 
 
 /*Tratamento do Menu*/

if (op == 1) {// ler notas 
   nota1=-1;
   while (nota1 < 0) 
   { system("cls"); // apagar a tela
     cout << "Digite uma nota1 positiva: "; 
     cin  >> nota1;
   }

    cout << "Digite a nota 2: "; 
    cin  >> nota2; 
             }     //fim da opção 1 


else if (op == 2) { // calcular 
   
    notafinal = (nota1+nota2)/2;
    cout << "Espere..." <<     endl;
    Sleep(3000); // espera três segundos 
             }
             

else if (op == 3) { // exibir 

 if (notafinal < media ) 
      status = "Reprovado!";
 else
      status = "Aprovado!";

    cout << "Media final = " << notafinal << endl; 
    cout << status << endl;
    getch();
}

 /*Tratamento do Menu*/
 
 
          
} // fim do menu
    
   
    
    return 0;}
