
// CHÚ Ý CỰC KỲ: là các câu lệnh sẽ thực hiện theo thứ tự mà các bạn code từ trái qua phải và từ trên xuống dưới 

                                   
                                    // để cách khoảng khi in ra màn thì ta cách khoảng trong dấu " " này 
                                    // ví dụ in 2 cái biến a,b khi nhập code mà    "a"   ; "b"   ( z khi in ra nó sẽ ko cách khoảng ) 
                                    // để in cách khoảng a,b khi mà nhập code thì  " a " ; " b " ( z khi in ra có mới cách khoảng tức là trong dấu ngoặc kép phải có khoảng trống )
        #include <stdio.h> // này khai báo tên thư viện để mình sử dụng câu lệnh vd hàm printf bên dưới á nếu 
// ko có cái khai báo thư viện này thì nó ko thể chạy đc bởi vì nó ko bt câu lệnh này ở đâu để mà nó sử dụng 
        #include <iostream> // cũng là khai báo thư viện nhưng để sử dụng cho câu lệnh cout bên dưới
         using namespace std;
        #include <math.h>  // thư viện này chứa các hàm toán học ví dụ như căng, luỹ thừa,.. 
                           // chú ý khi in kết quả các phép toán trong math.h thì phải để định dạng là số thực ( %f,%lf )
                           // vd printf ("%d", sprt(16)); z là sai định dạng d là số nguyên
                           // cùng sửa nhá ("%f", sprt(16)); z mới đúng nè nha 
                           // các phép tính của math.h
                           // sqrt(x) tính căng
                           // pow (x) luỹ thừa
                           // log (x) tính loga cơ số 10
                           // abs (x) tìm trị tuyệt đối số nguyên
                           // fabs(x) tìm trị tuyệt đối của số thực 
//int là kiểu dữ liệu  trả về ko cần biết quá nhiều
         int main () { // chuơng trình C++ sẽ bắt đầu bằng hàm MAIN hiểu đơn giảng là khi có main thì ta mới 
// nhập câu lệnh và chạy câu lệnh đc BẮT BUỘC PHẢI CÓ
// \n bên dưới là để in cho nó xuống dòng trong thư viện stdio.h  
         printf(" Tên tôi là\n " ); // lệnh dùng để in ra màn hình nhớ đặt trong dấu nháy kép và kết thúc bằng dấu; và lệnh in này ở thư viện stdio.h 
         cout << "PGA" << endl; // này cũng là lệnh để in ra màn hình nhưng là trong thư viện iostream
         
    
    
   
   
    // cách khai báo tên biến giống như bên toán ví dụ như biến x,y,z nói cho dễ hiểu
    // thì bên C trc khi khai báo biến thì phải khai báo kiểu dữ liệu có 3 kiểu dữ liệu chính lên youtube https://www.youtube.com/watch?v=vpqMmfkSAMo&list=PLux-_phi0Rz2TB5D16sJzy3MgOht3IlND đoạn 21:41 bằng iostream
    // Công thức khai báo biến: ((((({" KIỂU_DỮ_LIỆU TENBIEN; "}))))))
    // CÓ 5  KIỂU DỮ LIỆU CHÍNH
    // + int        kiểu số nguyên  8 byte 32 bit  đặt tả là  ((({" %d "}))))) đặt tả hiểu đơn giảng là cái dùng để khai báo kiểu dữ liệu sau khi khai báo kiểu dữ liệu mình mới in biến bằng thư viện của stdio.h đc
    //   dùng int thay cho kiểu dữ liệu đúng sai ko cần phải dùng thư viện khác để sử dụng câu lệnh 
    //   trong ngôn nữa c 0 là sai  và   1 là đúng
    // + long long  kiểu số nguyên  16 byte 64 bit đặt tả là  ((({" %lld "}))) kiểu số nguyên mà nó rộng hơn của kiểu int còn rộng như thế nào thì sẽ có cách tính bên dưới
    // + float      kiểu số thực    8 byte 32 bit  đặt tả là  ((({" %f "})))))  
    // + double     kiểu số thực    16 byte 64 bit đặt tả là  ((({" %lf "}))))) 
    // + char       kiểu kí tự      1 byte 4 bit   đặt tả là  ((({" %c "}))))) xem chương 3 ví dụ 2 để hiểu bài toán về phép tính
    // + unsigned đằng trước thì nó là bao gồm các dãy số mà ko âm nha vd: unsignedint kiểu dữ liệu int có độ dài từ -2*10^9 --> 2*10^9 ==> unsignedint sẽ có độ dài từ 0 --> 2*10^9
    // + cách tính độ dài hiểu dữ liệu ở bên dưới chú ý dấu (âm) được tính là 1 bit r nha 
    // *** thằng nào nhiều byte hơn thì sẽ lưu đc nhiều số hơn và sẽ chính xác hơn 
    // *** công thức tính dộ dài kiểu dữ liệu thì nó có 2 phân ( x là số bit mà kiểu dữ liệu sử dụng )
    //  + bao gồm số âm    : 2^x-1 --> (2^x-1)-1 x-1 là vì do nó có dấu âm nên số bit sẽ bị mất đi 1
    //  + không bao gồm âm : 0 --> (2^x)-1
   
   
    // chú ý cách đặt tên biến
    // + một tên biến hợp lệ thì nó bao gồm CHỮ CÁI (có thể in hoa hoặc in thường); SỐ; _
    // + tên biến bị lỗi khi có số ở đầu
    // + trong tên biến ko được cách khoảng  
    // VÍ DỤ: về cách khai báo biến 
        int z,y,t,f,u;// khai báo mà ko nói giá trị biến a biến a phải nhập bằng tay 
        int a = 1000; // Khai báo biến tên a và gán giá trị của a = 1000 int là số nguyên 
        long long  b = 9000; // này đc gọi là toán tử gán
        float c = 1244;
        double d = 1244;
                                // + In biến ra màn hình bằng thư viện stdio.h  phải đặt tả mới in ra đc 
         cout << "" << endl; // cái dòng lệnh này để có nó khi in ra nó sẽ xuống dòng cho đẹp endl để cái câu lệnh tiếp theo xuống dòng
        cout << "này in bằng lệnh stdio.h " << endl;      
        //để in xuống dòng ta dùng lệnh                         
        printf( " %d " , a  );
        printf (" %lld ", b ); // để cách khoảng khi in thi ra màn hình thì xem ở trên cùng nha
        printf (" %f ", c );
        printf (" %lf ", d );
                                 // + In biến ra màn hình bằng thư viện iostream 
        cout << "" << endl; // cái dòng lệnh này để có nó khi in ra nó sẽ xuống dòng cho đẹp endl để cái câu lệnh tiếp theo xuống dòng  
        cout << "" << endl; // cái dòng lệnh này để có nó khi in ra nó sẽ xuống dòng cho đẹp endl để cái câu lệnh tiếp theo xuống dòng
        cout << "này in bằng lệnh của thư viện iostream " << endl;//chỉ nên áp dụng vs SỐ NGUYÊN vì khi áp dụng vs số ko nguyên nó ko hiện hết đc số đằng sau dấu .                         
        cout << a << endl; 
        cout << b << endl; 
        cout << c << endl;
        cout << d << endl;
        
            

// NHẬP VÀ IN BIẾN RA MÀN HÌNH
                                 // + Đối với stdio.h
        printf ( "  mời bạn nhập biến z và cách khoảng để nhập giá trị của x,y,f,u ");
        scanf ( "%d%d", &z, &y);// hàm scan này nó có nhiệm vụ là đọc từ bàn phím cái giá trị bạn nhập sau đó nó sẽ tìm đến cái gía trị mà trong dãy liệu để nó nhập zô biến z
                                 // nên cái hàm scan này nó sẽ có thêm dấu & 
                                 // Chú Ý cái %d cuối cùng trong dấu " " ko đc có dấu cách nếu có dấu cách thì nó sẽ nhập thêm một lần nữa 
                                 //và cái nhập thêm một lần ấy sẽ cho câu lệnh tiếp theo

        printf ( "  giá trị của biến z,y là:%d %d ", z, y ); 
                                 
       
                                 // + đối vs iostream
        cin >>f>>u;
        cout << "" << endl;   
        cout << " giá trị của f là:" << f <<  endl;     
        cout << " giá trị của u là:" << u << endl;          


// HÀM TÍNH TỔNG, TÍCH, NHÂN, CHIA, CHIA CÓ DƯ, lớn, bé, bằng, lớn hơn hoặc bằng, khác (+, *, /, %, >, <, ==, >=,!=)
                                                                                                         // một dấu bằng là lệnh gán còn cái này là toán tử

                                 // + Đối với stdio.h
            // do mình khai báo biến z, y r và lệnh nhâp biến từ màn hình r nên không cần làm lại nến bạn chưa khai báo và chưa có lệnh nhập thì bạn phải làm á nha            
        int tong = z + y; // bên thư viện stdio.h thì cần phải khai báo hàm tổng chú ý tổng là biến nên ko đc ghi có dấu
                          // ( z + 1 ) <=> z++ cái nài là tăng sau 
                          // ( z + 1 ) <=> ++z nhưng cái này là tăng trước
        int tich = z * y; 
        float chia = (float)z / y; // chia nhưng để z để nó ra đc 1, mấy ra số chính xác
                                  // hai số nguyên chia nhau sẽ ra số nguyên  
                                  // hai số thực chia nhau hoặc 1 nguyên một thực thì mới ra kiểu số thực đc 
        int du = z % y; 
        
        printf (" tổng z,y là:%d", tong );    
        cout << "" << endl; 
        printf (" tích z,y là:%d", tich );  
        cout << "" << endl;   
        printf (" chia z,y là:%f", chia );  // hai số nguyên chia nhau sẽ ra số nguyên, số nguyên số thực chia nhau sẽ ra số thực còn 2 số thực chia nhau thì ra thực lun   
        cout << "" << endl;   
        printf (" dư z,y là:%d ", du );   



                                  //+ Đối với iostream 
        cout << "f + u = " << f + u << endl;
	cout << "f - u = " << f - u << endl;
	cout << "f * u = " << f * u << endl;
	cout << "f / u = " << (f*1.0) / u << endl;
	cout << "f % u = " << f % u << endl;                    

//Phép toán của math.h 
       cout << "căng của a là:  " << sqrt (a) << endl;
       printf ( "căng của b là: %f ", sqrt (b));// nhớ là phải phần trăm f hoặc df nha




    }
