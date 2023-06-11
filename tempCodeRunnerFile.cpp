#include <iostream>
using namespace std;
#include <iomanip>
int main () { 
int a, b, c;
cout << "Mời nhập các cạnh của tam giác: ";
cin >> a;
cin >> b;
cin >> c;
if (a+b>c && a+c>b && b+c>a ) { if (a==b && b==c) {cout << "Đều";} 
else if (a==b || a==c || b==a ) {if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b ){cout << "Tam giác vuông cân";} else {cout <<"tam giác cân";} }
else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b ) {cout << "Tam giác vuông"; }
else {cout << "Tam giác thường";}
 }
else {cout << "không có tam giác "; }


    
}