#include <stdio.h>
#include <math.h>
int main(){
    int x = 4; // bai 1 XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT, NHỎ NHẤT TRONG 3 SỐ
    int y = 9;
    int z = 15;
    int max = x;
    if(y > max)
    max = y;
    if(z > max)
    max = z;
    int min = x;
    if(y < min)
    min = y;
    if(z < min)
    min = z;
    printf("gia tri; x = %d\n, y = %d\n, z = %d\n", x, y, z);
    printf("Max = %d\n", max);
    printf("min = %d\n", min);








    int nam;// bai 2 XÂY DỰNG HÀM TÍNH NĂM NHUẬN
    printf("nhap nam:");
    scanf("%d", &nam);
    if(nam % 4 == 0 || nam % 400 == 0 && nam % 100 != 0){
        printf("nam do la nam nhuan");
    }else{
        printf("nam do khong phai la nam nhuan");
    }





    int so;//bai 3 Xây dựng chương trình kiểm tra các số trong [1,1000]
    printf("\nnhap so tu 1 den 1000 la: ");
    scanf("%d", &so);
    if(so % 5 == 0 && so % 9 == 0){
        printf("so do la so chia het cho 5 va 9");
    }else{
        printf("so do khong phai la so chia het cho 5 va 9");
    }
    return 0;
    }

