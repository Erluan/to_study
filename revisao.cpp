/*
Faça um programa que leia uma lista de salários e as idades
Calcule a média dos salários (medsal) das pessoas
maiores de idade. Com Menu de Controle e void.
*/

#include "iostream"
#include "cstdlib"
#include "conio.h"
#include "math.h"
#define x 3
using namespace std;

struct cliente 
{
   double salario[x];
        int idade[x];
        char sexo[x];
};

cliente cli;
int ultimalinha=-1;
double conta;

void inserir_linha(double sal, int ida, char sx)
{  
    cli.salario[ultimalinha] = sal;
    cli.idade[ultimalinha] = ida;
    cli.sexo[ultimalinha] = sx;
}

void exibir() 
{
   system("cls");
   for (int i=0; i<=ultimalinha;i++) 
   {  
      cout  << "linha (" << i << ") - " 
            << cli.salario[i] << " - " 
            <<   cli.idade[i] << " - " 
            <<   cli.sexo [i] << endl; 
   }
   cout << "\nA média dos salários é " << conta << endl;
   getch(); // pausa
}

void excluir (int linha) 
{ if ( linha == ultimalinha )
           ultimalinha --;
     else 
     {
            for (int i=0; i<=ultimalinha;i++)
                {  
                   if ( linha == i )
                       for (int j=i; j<=ultimalinha;j++ )
                       {
                        cli.salario[j] = cli.salario[j+1];
                        cli.idade[j]   = cli.idade[j+1];
                        cli.sexo[j]    = cli.sexo[j+1];                        
                       }
                } 
              ultimalinha --;
     } // fim if else
}

void processar()
{  int cont=0;  
   conta = 0; 
   for (int i=0; i<=ultimalinha;i++) 
   {
        if (cli.idade[i] >= 18 )
           {
             cont ++;
             conta=conta + cli.salario[i];
           }
   }
   conta = conta / cont; // achei a média dos salários
}

int main () 
{  setlocale(LC_ALL, "Portuguese");

    int tecla = 0; 
   double sal; int ida; char sex;

   while ( tecla != 2 )
   {
     cout << "\nMenu\n1-Executar\n2-sair\nitem:";
     cin >> tecla;
         
         switch ( tecla )
         {
            case 1:
                 { system("cls");
                   cout << "\nDigite o salário, a idade e o sexo (1:M/2:F):";
                   cin >> sal;
                   cin >> ida;
                   cin >> sex;
                 break;}
                 
            case 2:
                 {
                 ultimalinha ++; // criar uma nova linha
                 inserir_linha(sal,ida, sex);
                 exibir();
                 break;}

            case 3:{ // exibir
                 break;}
                      
            case 4: 
                 {//excluir 
                 }
            case 5: 
                 { // processar
                 }
           case 6:
                 {cout << "\nBoa noite!\n"; getch();
                        break;}

         }
         
   }
}
