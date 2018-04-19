#include "iostream"
#include "math.h"
#include "conio.h"
#include "stdlib.h"
using namespace std;
// float la, lb, lc, area, semper;

/* void ler_l1()    {
     float la;
     system("cls");
     cout << "Lado A:"; cin >> la;  }
*/
 
float ler_l1()     {
     float la;
     system("cls");
     cout << "Lado A:"; cin >> la; 
     return la; }

float ler_l2()    {
     float lb;
     system("cls");
     cout << "Lado B:"; cin >> lb;  
     return lb;}

float ler_l3()    {
     float lc;
     system("cls");
     cout << "Lado C:"; cin >> lc;  
     return lc;   }
     
float get_semper(float a, float b, float c) {
     return ( (a+b+c)/2 ) ;                   }

float get_area(float s,float l1,float l2,float l3)
 {   return ( sqrt(s*(s-l1)*(s-l2)*(s-l3)) ) ;   }

void exibir(float a, float b, float c, float s, float ar) {
     system("cls");
     cout << "lado A :" << a << endl;
     cout << "lado B :" << b << endl;
     cout << "lado C :" << c << endl;     
     cout << "Semiper:" << s << endl;
     cout << "Area...:" << ar << endl;  
     getch();         }
     
int main()                            {
    float a = ler_l1(); 
    float b = ler_l2(); 
    float c = ler_l3();
    float semper = get_semper( a, b, c);
    float area = get_area(semper, a, b, c);
    
    exibir(a, b, c, semper, area);  // void 
    
    return 0;                         }
