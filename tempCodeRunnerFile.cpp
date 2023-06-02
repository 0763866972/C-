#include<iostream>
using namespace std; 
int main (){
  int number;
  cout << "Nhập một số: ";
  cin >> number;
  if (number < 0) {
    cout << "Số đó là số âm." << endl;
    return 1;
  }
  cout << "Số đó là số dương." << endl;
  return 0;
}
