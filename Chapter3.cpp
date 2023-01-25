//                                     Cấu Trúc Rẽ Nhánh Switch Case | Câu Lệnh GOTO
// mỗi cái case là một cấu trúc rẽ nhánh khi mà switch nó trùng với giá trị nào thì nó sẽ thực hiện 
// lệnh của case đó tuy nhiên nếu bạn ko có dòng break thì thì khi nó đúng ở đâu rồi nó sẽ thực hiện 
// tiếp từ cái case mình đúng cho đến hết chứ nó ko có thực hiện ở cái case mình đúng ko nói thì khó 
// hiểu nên mình sẽ nói cái ví dụ cái code bên dưới nếu bạn xoá hết mấy cái break đi thì khi bạn nhập 
// số 2 thì cho sẽ thực hiện code ở case 2 và thực hiện code  ở case 3 lun mặc dù case 3 sai kể cả default
// còn nếu bạn có dòng lệnh break thì khi đúng switch ở case nào thì nó sẽ chỉ thực hiện lệnh ở case đó và đồng thời
// kết thúc thực hiện code các case còn lại kể cả defaut 
// chú ý mỗi nếu case nào mà ko có dòng break thì nó sẽ thực hiện tiếp lệnh từ case đó
// lệnh default là khi bạn nhập switch nào đó mà ko trùng vs case nào khi đó code trong default sẽ đc thực hiện
// nói chung lại cho dễ hiểu cái swich này là khi cái case nào nó đúng thì nó sẽ tiếp tục chạy tiếp từ 
// cái case đó cho đến cái case nào có lệnh break thì dừng
// lệnh go to  là đi đên cái nào đó bà bỏ qua lệnh ở giữa
#include <iostream>
using namespace std; 
#include <stdio.h>
#include <math.h> 
 
 int main () {
    int n;
    cout << " mời bạn nhập giá trị nào đó ";
    scanf ("%d", &n );
    switch (n)
    {
    case 1:
    cout << "bla bla "<<endl; break;
    // nhớ lệnh break để kết thúc chương trình còn không là nó thực hiện lun lệnh 2,3,4,5,6,7 default bên dưới nếu 2;3;4;5;6;7 ko có lệnh break
    case 2:
    cout << " hú "<<endl;
    break; 
    case 3:
    cout << " ola "<<endl;
    break;

    // lập trình các case cùng thực hiện một câu lệnh viết z thì các bạn hiểu là khi switch 
    // nó rơi vào 1 trong 4 giá tri trên thì nó đề thực hiện một dòng code bên dưới 
    // nhớ lệnh break để kết thúc chương trình còn không là nó thực hiện lun lệnh default bên dưới lun á nha
    case 4: case 5: case 6: case 7:
    cout << " Phan Gia An "<<endl;
    break;
    default: cout << " 123"<<endl;
    }

    // Bài tập nhập phép tính ( cộng trừ nhân chia ) r tính kết quả như yêu cầu
    int a;
    int b;
    char d; // dùng bảng mã ascii
    cout << " mời bạn nhập giá trị a,b: ";
    cin >> a >> b;
    cout << " mời bạn nhập phép trính: ";
    cin >> d;
    switch (d)
    {
    // chú ý dấu '' có một cái thì là để gọi kí tự trong bẳng mã ascii thay vì là số của kí tự tương ứng
    case '+': cout << " Kết quả là: " << a + b;
    break;
    case '-': cout << " Kết quả là: " << a - b;
    break;
    case '*': cout << " Kết quả là: " << a * b;
    break;
    case '/': cout << " Kết quả là: " << a / b;
    break;
    
    
    }
   
    
    
    
   

    
 }



