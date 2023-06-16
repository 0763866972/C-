//                                                           Lệnh vòng lập for 
// chú ý lệnh for trong for nha
// break lệnh này sẽ kết thúc vòng lặp ngay lập tức nếu như lệnh for gặp lệnh này
// continue khi for gặp lệnh này thì nó sẽ nhảy qua vòng lặp kế tiếp và ko thực hiện code từ continue trở về sau 

// công thức for ( khởi tạo; điều kiện lặp ; update  ) { body code }
// chỗ điều kiện lặp cho một số khác 0 nghĩa là điều kiên đó đúng với mọi i
// Ví dụ: for (i=2; 1;i++ ) {cout << "l"; } số một ngay chỗ điều kiện nghĩa là điều kiện này lun đúng 
// sau khi thực hiện dòng lệnh này thí nó sẽ in ra vô hạn lần bên trong cout

// giải thích công thức như sau lệnh for nó gồm có ba phần đầu tiên là khởi tạo nè thứ hai á là điều kiện cuối cùng là cập nhật
// thì đầu tiên á nó sẽ thực hiện một lần mà chương trình bạn bắt dầu nhảy vào dòng for tại ngay cái KHỞI TẠO á để mà nó thực hiện
// sau khi mà KHỞI TẠO xong á thì nó sẽ kiểm tra ĐIỀU KIỆN LẶP nếu ĐIỀU KIỆN LẶP cái này đúng thì nó sẽ nhảy zô cái body code để nó
// thực hiện code ở trỏng còn nếu mà nó sai thì nó sẽ kết thúc vòng for ngay ở đó 
// và sau khi mà cái điều kiện của dòng for nó thực hiện xong một lần á thì nó sẽ nhảy lên cái phần UPDATE  để mà nó thay đổi cái
// biến đếm ở cái phần khởi tạo mà bạn đã khởi tạo rồi lại kiểm tra cái ĐIỀU KIỆN LẶP ở cái biến đếm vừa mới UPDATE á xem đúng hay sai 
// đúng thì nó sẽ thực hiện BODY CODE và tiếp tục UPDATE biến đếm ở phần khởi tạo lệnh for sẽ dừng lại khi mà cái biến đếm ở khởi tạo 
// nó bị sai cái ĐIỀU KIỆN LẶP 
// và sau khi sai điều kiện lặp thì nó sẽ thực hiện câu lệnh bên ngoài của điều kiện for


// Đề bài An là một chàng trai ngốc nghếnh và dễ bị dụ một hôm có một nọ An bị 1 bạn nữ kêu an like hình cho bạn ấy trên facebook và AN đã làm
// theo vì sợ bạn nữa ấy buồn nhưng thật không may cho An là bạn gái của An đã phát hiện ra vì thế đã dỗi An, An rất buồn ko biết làm thế nào để
// bạn gái mình hết dỗi nên có nhắn hỏi bạn ấy là h An phải làm sao để em hết giận, bạn gái An mới nhắn lại vs An là An  phải nhắn cho bạn cho 
// 100 dòng có kèm stt Anh biết lỗi rồi mốt anh ko dám nữa thì mới tha lỗi cho An . nhưng hên cho an là có một đứa bạn học C++ rất giỏi nên An đã 
// nhờ bạn của An giúp.
// để viết dòng code vs lệnh for và in ra lời giống bạn nữa nói trên em hãy đóng vai là bạn tốt của an để cứu bạn An nhá.
#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h> 
int main () { 
    cout << "                                                 Bài 1  "<< endl;
    
int e;
cout << "Mời bạn nhập số lần muốn xin lũi: ";
cin >> e;
int i;
for (i=1; i<=e; i++  ){ // i <= là số 100 thì nó sẽ in 100 lần
printf ("%d ", i );    
printf (" Anh biết lỗi rồi mốt anh ko dám nữa \n");}
cout << "                                                 Bài 2  "<< endl;
// ví dụ 2: nhập số n để tính tổng s sau S = 1 + 2 + 3 +.....+ n 
int a;
int s = 0;
int n;
cout <<"mời bạn nhập n: ";
cin >> n;
for ( a=1; a<=n ; a++ ) {
    s = s + a;
}
cout << "Tổng các số hạng là: " << s << endl;
cout << "                                                 Bài 3  "<< endl;
// ví dụ 3 nhập số hạng đầu số hạng cuối rồi in ra màn hình những số hạng chia cho 3 trong dãy số hạng trên
// và in ra màn hình có bao nhiêu số chia hết cho 3, tính tổng những số chia hết cho 3 tìm đc và in ra màn hình
// ví dụ số hạng đầu là 2; số hạng cuối 10 out ra màn hình ( 3,6,9 là số chia hết cho 3) (2; 10) thì các số 3, 6, 9 sẽ chia hết cho 3
// có 3 số chia hết cho 3 

int c;
int d;
int z = 0;
int g = 0;

cout << "mời bạn nhập số hạng đầu ";
cin >> c;
cout << "đã xác nhận số hạng đầu của bạn là: "<< c << "\n";
cout << "mời bạn nhập số hạng cuối: ";
cin >> d;
if ( d < c ) { cout <<"giá trị cuối không được lớn bé giá trị đầu !!!!!!!!!!!!!!!!!!!!!!!!"; } else { cout << "đã xác nhận giá trị cuối là " << d<<"\n";
for (c = 1; c <= d; c++ ) { 
    if ( c % 3 == 0 ) { cout << "Các số hạng chia hết cho 3 là:" <<c<<"\n";
     z = z + 1;
     g = c + 3 * z; // tổng các số chia hết cho 3
     }
 }
 cout << "Có (" << z << ") số chia hết cho 3\n ";
 cout << "Tổng các số chia hết cho 3 là: "<< g;
}






}