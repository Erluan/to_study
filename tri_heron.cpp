#include "iostream"
#include "conio.h"
#include "string.h"
#include "math.h"
using namespace std;

float a, b, c, bas, are, alt, sp;
string tipo;

int main() {
cout << "Digite Lado A:"; cin >> a;
cout << "Digite Lado B:"; cin >> b;
cout << "Digite Lado C:"; cin >> c;

if ( a <=0  ||
     b <= 0 ||
     c <=0  ||
     a >= b + c ||
     b >= a + c ||
     c >= b + a ) {  
     cout << "Nao eh triangulo..!" << endl;
     getch(); exit(0); }

if ( a==b && a == c) 
tipo = "Equilatero";
else if (
         a==b && a != c ||
         b==c && b != a ||
         a==c && a != b 
         ) 
tipo = "isoceles";
else 
tipo = "Escaleno";


if (tipo == "Equilatero")  
           bas = a;
else if (tipo == "isoceles") 
     if (a==b) bas = c; 
     else if (a==c)  bas= b;
     else bas = a;
else 
     if (a>b && a>c)          bas = a;
     else if (b > a && b > c) bas = b;
     else                     bas = c;

sp = (a + b + c)/2;  // semiperimetro

are = sqrt(sp*(sp-a)*(sp-b)*(sp-c)) ; // area heron

alt = (2 * are) / bas; // altura

cout << "a:" << a << "b:" << b << "c:" << c << endl;
cout << "tipo:" << tipo << " base:" << bas << endl;
cout << "Altura:" << alt << " area:" << are << endl;
cout << "Semper:" << sp << endl;
getch();
 
    
return 0 ;}
