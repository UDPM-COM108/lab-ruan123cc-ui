#include <stdio.h>
int main() {
    float x, y, nhan, chia;
    printf("nhap vao 2 so thuc: ");
    scanf("%f %f",&x ,&y);
    printf("xuat ra 2 so thuc: ");
    nhan = x * y;
    chia = x/y;
    printf("Nhan 2 so thuc:%.2f",nhan);
    printf("/nChia 2 so thuc:%.2f",chia);
    return 0;
}