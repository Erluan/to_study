#include "iostream"
#include "math.h"
#include "conio.h"
#include "stdlib.h"

#define pi 3.14
#define diametro comprimento/pi
#define raio     diametro/2
#define area     pow(raio,2)  * pi

using namespace std;

float comprimento;

void exibir(){
     system("cls");
     cout << "Valor da Area:" << area << endl;
     getch();          }     

void get_comprimento()     {
     cout << "Digite Comprimento:"; 
     cin  >> comprimento ; }
     

int main() {
    
    get_comprimento();
    exibir();
    
    return 0 ;}
