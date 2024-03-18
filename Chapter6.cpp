// function in c language 

// thay vì mình là tất cả các lênh ở trong hàm main thì bây giờ mình phải chia nhỏ ra 
// từng cái do vậy hàm function được tạo ra 

// trong c sẽ thực hiện hàm trong phần main trước và nếu trong main 
// có gọi hàm mà mình đã tạo ra trong ví dụ dưới là xin chào thì nó mới thực hiện hàm mình đã tạo 
// ra 


#include <stdio.h>
// xây dựng hàm tính tổng các tự nhiên từ 1 -- > n 
// return value type             tên hàm       (para meter list input )                  {statment }
// kiểu dữ liệu mà hàm trả về                   các tham số xem vd để hiểu                câu lệnh 
//                                              một hàm có thể có nhiều tham số và phân cách chúng bằng dấu , chú ý khi mình truyền vào hàm thì phải theo thứ tự mà mình đã là, 
int tong (int n) {
int sum = 0; for (int i=1; i<=n; i++ ) sum+=i; 
// nhớ phải trả về biến sum thì trong main nó mới hiểu 
return sum;
}

int main () {
// ví dụ tính giá trị từ 0 đến  x  với x nhập từ bàn phím bằng cách gọi hàm tổng ở trên 
int x;
printf("nhập giá trị x: " ); 
scanf ("%d", &x); 
int kq = tong(x);
printf ("kết quả là:%d", kq); 


}