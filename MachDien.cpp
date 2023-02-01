#include <iostream>
using namespace std; 
#include <stdio.h>
#include <math.h> 
 
 int main () {
    int a; 
    int b; 
    cout <<"                                                       Chào Mừng Bạn Đến Với Môn Mạch Điện  "<< "\n";
    cout << "Chương trình này được viết ra nhằm mục đích để tra cứu đáp án cho môn mạch điện " << "\n"<< "\n";

    cout << "Mời bạn nhập số chương ";
    cin >> a;
// Cái này của Chương 1 nè  nhớ nếu có  thêm bài thì sữa dòng lệnh if cuối cùng nha 
if ( a == 1 ) { cout << "Chương 1 có các bài là mời bạn chọn số để biết đáp án:"<< "\n" << "Số 1 là bài: 1.3 "<< "\n" << "Số 2 là bài: 1.6 "<< "\n"<< "Số 3 là bài: 1.8"<< "\n" << // có thêm bài thì viết tiếp ở đây nhớ cuối cùng phải có dấu <<
"Số bạn chọn là ===> "; cin >>b; cout << "\n"; switch (b)   {case 1: cout << "bài 1.3: Nguồn E là 24V "; break; case 2: cout << "Bài 1.6: U = -14v "; break; case 3: cout << "Bài 1.8: U1= 36v, U mũi tên là = 12v "; break;              }  if ( b > 3 ) {cout << "Số ko hợp lệ !!!!!!!!!!!! "; }   }
    
// Cái này của chương 2
    


 }