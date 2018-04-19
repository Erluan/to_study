#include "iostream"
#include "string.h"
#include "math.h"
#include "conio.h"
#include "windows.h"
#include "iomanip.h"
using namespace std;

float la, lb, lc;


int main()    {
    
    cout << "Lado A:"; cin >> la;
    cout << "Lado B:"; cin >> lb;
    cout << "Lado C:"; cin >> lc;    
    
   if (  !(la < lb + lc) || 
         !(lb < la + lc) ||     
         !(lc < la + lb)      ) 

{
         cout << "Nao eh um triangulo..!" << endl;
         getch();
}
          
else


{
         cout << "Eh um triangulo..!" << endl;
         getch();
}


    
    return 0; }


