//                                                              vòng lặp while và do while
// cấu trúc vòng lặp while (điều kiện){ code và điều kiện lặp của lệnh while  } thấy thì giống vs if nhưng nó khác á nha 
// nó con thêm cái điều kiện lặp của lệnh while nữa 

// ví dụ 1 tính tổng các số hạng 1+2+3+4+5+...+n bằng lệnh  while
// n là số số hạng 
#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h> 
int main () { 
    cout << "                                                 Bài 1  "<< "\n" << endl;
    int i = 1;
    int s = 0;
    int n;
    cout <<  "Mời bạn nhập giá trị n: ";
    cin >> n;
    while ( i <= n  ) { s = s + i; i++; }
    cout <<  "Tổng là "<<s<<"\n"; 

    cout << "                                                 Bài   "<< "2" << endl;
    // tính tổng các số 2 + 4 + 6 + 8 +...+ 2n n là số số hạng tính bằng lệnh while  
    }
