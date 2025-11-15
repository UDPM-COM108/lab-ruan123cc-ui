#include <stdio.h>
#define Pi 3,14
int main(){
    int x, y, TONG, HIEU; // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    printf("gia tri cua x va y la : ");
    scanf("%d %d", &x, &y);
    TONG = x + y;
    HIEU = x - y;
    printf("\nTong 2 so nguyen la: %d", TONG);
    printf("\nHieu 2 so nguyen la: %d", HIEU);


//BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    int cdai, crong, dtich ,cvi;
    printf("\nnhap vao cdai va crong la:");
    scanf("%d %d", &cdai, crong);
    dtich = cdai * crong;
    cvi = (cdai + crong) * 2;
    printf("\ncvi hcn la: %d", cvi);
    printf("\ndtich hcn la: %d", dtich);



//Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    int bankinh, dtic, cv;
    printf("\nnhap vao ban kinh la:");
    scanf("%d", &bankinh);
    dtic = Pi * bankinh * bankinh;
    cv = 2 * Pi * bankinh;
    printf("\ndtich hinh tron la: %d", dtic);
    printf("\ncvi hinh tron la: %d", cv);



//Bai 4: XAY DUNG CHUONG TRINH TINH DIEM TRUNG BINH
    int toan, ly ,hoa, dtb;
    printf("\nnhap vao diem toan la: ");
    scanf("%d", &toan);
    printf("\nnhap vao diem ly: ");
    scanf("%d", &ly);
    printf("\nnhap vao diem hoa la:");
    scanf("%d", &hoa);
    dtb = (toan*3 + ly*2 + hoa*1)/3;
    printf("\ndtb la: %d", dtb);

//Bai 5: Tinh chu vi, dt hinh tam giac vuong
    int canhhuyen, canhke, canhdoi, chuvi, dt;
    printf("\nnhap vao canh huyen la:");
    scanf("%d", &canhhuyen);
    printf("\nnhap vao canh doi la: ");
    scanf("%d", &canhdoi);
    printf("\nnhap vao canh ke la: ");
    scanf("%d", &canhke);
    dt = 1/2 * canhdoi * canhke;
    chuvi = canhhuyen + canhdoi + canhke;
    printf("\ndt tam giac vuong la: %d",dt);
    printf("\nchu vi tam giac vuong la: %d",chuvi);
    return 0;
}
