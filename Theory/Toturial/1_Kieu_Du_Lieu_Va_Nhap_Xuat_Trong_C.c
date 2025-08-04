/*
1. Các kiểu dữ liệu trong C:
int : 4 byte : lưu số nguyên : %d
unsigned int : 4 byte : lưu số nguyên ko âm : %u
long long(long long int) : 8 byte : lưu số nguyên lớn hơn int : %lld
float: 4 byte : lưu số thực : %f
double : 8 byte : lưu số thực : %lf
char : 1 byte : lưu ký tự : %c
uint8_t : 8 bit: lưu số nguyên không âm 8 bit
uint16_t : 16 bit : lưu số nguyên không âm 16 bit
uint32_t : 32 bit : lưu số nguyên không âm 32 bit
đặc tả số HEX : %X

2. Khai báo biến và quy tắc đặt tên biến
Quy tắc đặt tên biến:
    Chỉ được chứa chữ cái, chữ số, dấu gạch dưới
    Ký tự tên bắt đầu không được là chữ số
    Tên biến không được trùng với các từ khóa trong C
    Ko nên đặt tên biến dài quá 31 ký tự
Cú pháp khai báo biến:
    Kiểu_dữ_liệu Tên_biến;
Có thể khai báo nhiều biến trên cùng 1 dòng nếu chúng có dùng chung 1 kiểu dữ liệu, các biến cách nhau bằng dấu ,
Có thể khởi tạo giá trị cho biến ngay khi khai báo biến qua phép gán =

3. Vào ra trong C
Xuất ra màn hình bằng hàm printf();
    In chuỗi bằng printf("Chuỗi");
    In giá trị biến bằng printf("đặc tả của biến", biến);
    In ra số thực lấy n số thập phân bằng printf("%.nf/lf", biến);
    In ra giá trị của nhiều biến cùng 1 lúc bằng printf("đặc_tả_1 đặt_tả_2 đặt_tả_3", biến_1, biến_2, biến_3);
    In ra chuỗi và giá trị của biến bằng printf("chuỗi đặt_tả_của_biến", tên_biến);
Nhập vào từ bàn phím bằng hàm scanf();
    Nhập giá trị cho biến bằng scanf("đặt tả của biến", &tên biến);
    Nhập giá trị cho nhiều biến cùng lúc bằng scanf("đặt_tả_1 đặt_tả_2 đặt_tả_3", &biến_1, &biến_2, &biến_3);
    Lưu ý đặt tả cuối cùng không được có dấu cách trước "

4. Ký tự đặc biệt
Ký tự xuống dòng: \n
Ký tự tab: \t
*/

#include <stdio.h>

int main() {
    int a, b = 0;
    float c;
    printf("Nhập giá trị cho a, b, c: ");
    scanf("%d %d %f", &a, &b, &c);
    printf("Giá trị của a: %d b: %d c: %.2f", a, b, c);
    return 0;
}