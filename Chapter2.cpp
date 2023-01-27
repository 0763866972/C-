                                                           // DẠNG câu lệnh IF else if eles
// && lệnh and nó đúng khi tất cả các điều kiện  đều đúng
// || lệnh or  nó đúng khi một trong nhiều điều kiện nó đúng

// lệnh if là cái điều kiện nếu điều kiên nó đúng thì sẽ thực hiện lệnh trong dấu {}
//     còn nếu mà sai thì nó sẽ ko thực hiện lệnh trong dấu ngoặc kép nữa mà sẽ thực hiện câu lệnh tiếp theo ngoài dấu ngoặc kép

// lệnh if và else nếu điều kiện if mà đúng thì nó sẽ thực hiện code trong if
//     còn nếu mà if sai á thì nó sẽ tiếp tục thực hiện code bên thằng else    
//     CÔNG THỨC IF ELSE {{{((" if ( điều kiện ) { nếu điều hiện if đúng thì thực hiện code trong NGOẶC NHỌN NÀY } else { còn nếu điều kiện if sai thì thực hiện code trong NGOẶC NHỌN NÀY } "))}}}   

// eles if được hoạt động như sau nếu câu lệnh 1 đúng thì thực hiện câu lệnh 1 và bỏ tất cả câu lện còn lại 
//     nếu câu lệnh 1 sai thì nó sẽ bỏ qua câu lệnh 1 và thực hiện câu lệnh tiếp theo nếu lệnh tiếp theo đúng thì thực hiện lệnh đó
//     và bỏ các câu lệnh còn lại nếu câu lệnh tiếp theo sai thì thực hiện câu lẹnh kế tiếp nữa tương tự đến câu lệnh cuối cùng chương trình
//     bài tập 2,4 là một ví dụ hoàn hảo để cho bạn có thể  tham khảo nhớ làm trcc khi xem đáp án nha
        



// NÀY LÀ BÀI TẬP VÍ DỤ: 1 nè
// nhập giá trị a nào đó từ bàn phím nếu a > 10 thì tính Tổng = a+10 và in ra màn hình "kết quả là: TỔng" ( cái tổng vừa tính đc)
// nếu a > 10 thì in ra chữ giá trị a vượt quá 10
#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h> 
int main () {
     cout << "                                                       BÀI TẬP SỐ 1 " << endl;
    int z; 
    cout << " nhập giá trị z ";
    cin >> z;
    if (z < 10)
    {int tong = z + 10; 
    cout << " kết quả là " << tong << endl;}
    else
    {cout << " kết quả vượt quá 19!!!!! ";} cout << "" << endl; 
    cout << "                                                       BÀI TẬP SỐ 2 " << endl;
    cout << "" << endl; 



// VD2: tính tiền lương cho nhân viên với yêu câu lương nhân viên = (số ngày công )* 1 triệu + tiền thưởng 
//      tiền thưởng tính bằng (số ngày công * 3000 ), với yêu cầu dùng lệnh if eles để nhập số vào từ bàn phím số 1  và tra ra tên nhân viên là: nào đó (tự đặt )
//      hoặc là nhập từ bàn phím số 2 ra tên nhân viên thứ 2 tương tự dến số 3 rồi số 4 
//      sau khi tra ra tên nhân viên thì tiếp tục dùng lệnh if else để nhập số ngày công nếu số ngày công <= 31 thì
//      in ra màn hình "lương củ nhân viên ( tự đặt) là ": lương nhân viên ( được tính bằng công thức ở trên ), còn nếu số ngày công 
//      lớn hơn 31 thì in ra màn hình: "Số ngày không được lớn hơn 31 !!!!!!!!!!!!! "

//      đối với những số mà > 4 ( tức là tra ra ko tên nhân viên ) thì in ra màn hình "mã nhân viên không đúng" 
//      và kết thúc chương trình ngay lập tức !!!!!!!!!!!!!!
//      

int a; 
int c; // số ngày công  
printf ("nhập mã người lao động ");
cin >> a;
if ( a == 1 ) { printf ( " PHAN GIA AN");
cout << "" << endl;
cout << "Nhập số ngày công của nhân viên ==> ";
cin >> c;
int d = c * 3000; // d là thưởng = số ngày công * 3000
int b = c * 10000000 + d; // lương
if ( c > 31  ) { 
cout << "" << endl;
cout << "Số ngày không được lớn hơn 31 !!!!!!!!!!!!! ";

   }
else {  cout << " Lương của PGA là " << b; }

}
else if ( a == 2 ) { cout << " NGUEN THI THAM" << endl; 
cout << "" << endl;
cout << "Nhập số ngày công của nhân viên ==> ";
cin >> c;
int d = c * 3000; // d là thưởng = số ngày công * 3000
int b = c * 10000000 + d; // lương
if ( c > 31  ) { 
cout << "" << endl;
cout << "Số ngày không được lớn hơn 31 !!!!!!!!!!!!! ";

   }
else {  cout << " Lương của NTT là " << b; }
 }
else if ( a == 3 ) { cout << " PHAN CONG DAT" << endl;
cout << "" << endl;
cout << "Nhập số ngày công của nhân viên ==> ";
cin >> c;
int d = c * 3000; // d là thưởng = số ngày công * 3000
int b = c * 10000000 + d; // lương
if ( c > 31  ) { 
cout << "" << endl;
cout << "Số ngày không được lớn hơn 31 !!!!!!!!!!!!! ";

   }
else {  cout << " Lương của PCD là " << b; }
  }
else if ( a == 4 ) { cout << " TRUONG THU NGU" << endl; 
cout << "" << endl;
cout << "Nhập số ngày công của nhân viên ==> ";
cin >> c;
int d = c * 3000; // d là thưởng = số ngày công * 3000
int b = c * 10000000 + d; // lương
if ( c > 31  ) { 
cout << "" << endl;
cout << "Số ngày không được lớn hơn 31 !!!!!!!!!!!!! ";

   }
else {  cout << " Lương của TTN là " << b; }
}
else if ( a > 4 )   { printf ( " mã nhân viên ko có " ); 
cout << "" << endl; }

// VÍ DỤ: 3  kiểm tra xem có phải là kí tự hay ko 
 cout << "                                                       BÀI TẬP SỐ 3 " << endl;
 cout << "" << endl;

char kyTu;
    cout << "Ky Tu: ";
    cin >> kyTu;
     
    if((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z')) // Lưu ý: Chúng ta cũng có thể sử dụng các giá trị ASCII để kiểm tra bảng chữ cái. 
                                                                     //Giá trị ASCII của a = 97, z = 122, A = 65 và Z = 90.
      {  cout << kyTu << " la ky tu ALPHABET";
    } else {
        cout << kyTu << " khong phai la ky tu ALPHABET" << endl;
    }
 
// VÍ DỤ 4 Viết một chương trình C++ để nhắc người dùng nhập 3 số nguyên và tìm giá trị lớn nhất.
      cout << "                                                       BÀI TẬP SỐ 4 " << endl;
int i;
int o;
int p;
cout << " Mời bạn nhập 3 số nguyên: ";
cin >> i >> o >> p;
if ( i > o && i > p )  { cout << "Số lớn nhất là:"<< i; } 
else if ( o > i && o > p )  { cout << "Số lớn nhất là:"<< o; } 
else {cout << "Số lớn nhất là:"<< p; }


}


