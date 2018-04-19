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
   nota1=-1;
   while (nota1 < 0) 
   {
    system("cls"); // apagar a tela
    cout << "Digite uma nota1 positiva: "; 
    cin  >> nota1;
   }

    cout << "Digite a nota 2: "; 
    cin  >> nota2;
    
    notafinal = (nota1+nota2)/2;
    cout << "Espere..." <<     endl;
    Sleep(3000); // espera três segundos 
    
    
    if (notafinal < media ) 
    {     
          status = "Reprovado!";
                  }
    else
    {      
           status = "Aprovado!";
        } 


    cout << "Media final = " << notafinal << endl; 
    cout << status << endl;

    getch();  // espera digitar uma tecla
    
    return 0;}
