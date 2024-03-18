#include <iostream>
using namespace std;
#include <iomanip>
int main () { 

float e; 
float sum = 1; 
printf ("nhập e "); 
scanf ("%f",& e);
for (int i=2; i<=e; i++ ) sum=sum + 1/float(i); 

printf ("%f", sum); 


    
}
