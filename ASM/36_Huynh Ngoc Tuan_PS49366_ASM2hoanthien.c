#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void songuyen(int x){//Bai 1 Chuong trinh kiem tra so nguyen
    if(x == (int)x){
    printf("so %d la so nguyen", x);
}else{
    printf("so %d khong phai la so nguyen", x);
}
}
void songuyento(int x){
    int dem = 0;
    for(int i = 2;i<x;i++){
        if(x % i == 0){
            dem++;
        }
    }
        if(dem == 0){
            printf("\nso %d la so nguyen to", x);
        }else{
            printf("\nso %d khong phai la so nguyen to", x);
        }
    
}
void sochinhphuong(int x){
    int dem = 0;
    for(int i = 1; i<x; i++){
        if(i * i == x){
            dem++;
    }   
        }if(dem > 0){
            printf("\nso %d la so chinh phuong",x);
        }else{
            printf("\nso %d khong phai la so chinh phuong",x);
        }
    
}

int main(){
    int luaChon;
    do{
    printf("\n|---WELCOME TO NGOCTUAN PS49366 ASSIGNMENT COM108---|\n");
    printf("|-------------------------MENU----------------------|\n");
    printf("1.Chuong trinh kiem tra so nguyen\n");
    printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
    printf("3.Chuong trinh tinh tien cho quan karaoke\n");
    printf("4.Chuong trinh tinh tien dien\n");
    printf("5.Chuong trinh chuc nang doi tien\n");
    printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
    printf("7.Chuong trinh tinh vay tien mua xe\n");
    printf("8.Sap xep thong tin sinh vien\n");
    printf("9.Xay dung game FPOLY-LOTT\n");
    printf("10.Chuong trinh tinh phan so\n");
    printf("0.Thoat\n");
    printf("moi ban nhap lua chon: ");
    scanf("%d", &luaChon);
    switch (luaChon)
    {
    case 1: printf("1.Chuong trinh kiem tra so nguyen\n");
        int x;
        printf("nhap gia tri vao x: ");
        scanf("%d",&x);
        songuyen(x);
        songuyento(x);
        sochinhphuong(x);
        break;
    case 2: printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
        int a,b;
        int ucln = a;
        int bcnn;
        printf("nhap 2 giá tri so nguyen a va b: ");
        scanf("%d %d", &a, &b);
        int adau = a;
        int bdau = b;
        while (a != 0 && b !=0){
            if(a>b){
                a = a%b;
            }else{
                b = b%a;
            }
            if(a != 0){
                ucln = a;
            }else{
                ucln = b;
            }
            printf("uoc chung lon nhat la: %d", ucln);
         }
        bcnn = adau*bdau/ucln;
        printf("\nboi chung nho nhat la: %d", bcnn);
        break;
    case 3: printf("3.Chuong trinh tinh tien cho quan karaoke\n");
        int gbd, gkt;
        printf("nhap vao gio bat dau va gio ket thuc: ");
        scanf("%d %d", &gbd, &gkt);
        int gio;
        int S = 0;
        if(gbd < 12 || gkt > 23){
            printf("quan dong cua hihi");
        }else{
            gio = gkt - gbd;
        }if(gio <= 3){
            S = gio * 50000;
        }else{
            S = 150000 + (gio - 3)* 35000;
        }if(gbd >= 14 && gbd <= 17){
            S *= 0.9;
        }printf("tong tien can thanh toan la %d", S);
        break;
    case 4: printf("4.Chuong trinh tinh tien dien\n");
    int kWh;
    int tien = 0;
    printf("dien su dung:");
    scanf("%d", &kWh);
     if (kWh <= 50) {
            tien = kWh * 1678;
        } else if (kWh <= 100) {
            tien = 50*1678 + (kWh-50)*1734;
        } else if (kWh <= 200) {
            tien = 50*1678 + 50*1734 + (kWh-100)*2014;
        } else if (kWh <= 300) {
            tien = 50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
        } else if (kWh <= 400) {
            tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kWh-300)*2834;
        } else {
            tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;
        }

        printf("Tien dien: %d dong\n", tien);

        break;
    case 5: printf("5.Chuong trinh chuc nang doi tien\n");
    int sotien;
    int soto;
    int t[] = {500,200,200,50,20,10,5,2,1};
    printf("so tien can doi la: ");
    scanf("%d", &sotien);
    for(int i = 0; i<9; i++){
        soto = sotien/t[i];
        if(soto != 0){
            printf("co %d %d\n", soto, t[i]);
        }sotien = sotien - soto * t[i];
    }

        break;
    case 6: printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
    int m[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int tiennhap;
    int tientra;
    int goctra = 1000000;
    int tienlai;
    int tiencon;
    printf("so tien vay la:");
    scanf("%d", &tiennhap);
    for(int i = 0; i<12; i++){
        tienlai= tiennhap * (0,05*m[i]);
        tientra= tienlai + goctra;
        tiennhap = tiennhap - goctra;
    printf("tien lai phai tra la : %d\n", tienlai);
    printf("tien phai tra la %d\n",tientra);
    printf("so tien con phai tra la %d\n", tiennhap);
 }
    
        break;
    case 7: printf("7.Chuong trinh tinh vay tien mua xe\n");
    double phantram;
    int tienvay;
    printf("so tien vay la:");
    scanf("%d", &tienvay);
    printf("so phan tram vay toi da la:");
    scanf("%lf", &phantram);
    double laithang;
    int dauthang;
    double tratruoc = 1 - phantram;
    double tientruoc = tienvay * tratruoc;
    int contien= tienvay - tientruoc;
    printf("so phan tram tra truoc: %lf\n",tratruoc);
    printf("so tien phai tra truoc: %lf\n",tientruoc);
    printf("so tien con lai phai tra la: %d\n",contien);
    if(tienvay>500000000){
        printf("liu liu khong co tien mua xe");
    }else{
    laithang = 0.15/12;
    dauthang = contien * laithang;
    printf("so tien phai tra hang thang %d", dauthang);
    }
        break;
    case 8: printf("8.Sap xep thong tin sinh vien\n");
    struct SINHVIEN {
        char hoten[500];
        float dtb;
    }SV1, SV2, temp;
    printf("Nhap ho ten SV1: ");
    scanf("%s", SV1.hoten);
    getchar();
    printf("Nhap diem SV1: ");
    scanf("%f", &SV1.dtb);
    printf("Nhap ho ten SV2: ");
    scanf("%s", SV2.hoten);
    printf("Nhap diem SV2: ");
    scanf("%f", &SV2.dtb);
    printf("\n DANH SACH SINH VIEN");
    if (SV1.dtb < SV2.dtb) {
        temp = SV1;
        SV1 = SV2;
        SV2 = temp;
    }
    printf("\nSV1: %s - %.2f - ", SV1.hoten, SV1.dtb);
    if (SV1.dtb >= 9)   printf("Xuat sac\n");
    else if (SV1.dtb >= 8 && SV1.dtb < 9)   printf("Gioi\n");
    else if (SV1.dtb >= 7 && SV1.dtb < 8) printf("Kha\n");
    else if (SV1.dtb >= 5 && SV1.dtb <7)   printf("Trung binh\n");
    else                     printf("Yeu\n");
    printf("SV2: %s - %.2f - ", SV2.hoten, SV2.dtb);
    if (SV2.dtb >= 9)   printf("Xuat sac\n");
    else if (SV2.dtb >= 8 && SV2.dtb < 9)   printf("Gioi\n");
    else if (SV2.dtb >= 7 && SV2.dtb < 8) printf("Kha\n");
    else if (SV2.dtb >= 5 && SV2.dtb < 7)   printf("Trung binh\n");
    else                     printf("Yeu\n");
        break;
    case 9: printf("9.Xay dung game FPOLY-LOTT\n"); 
    int so1 = rand() % 15;
    int so2 = rand() % 15;
    int nn1, nn2;
    printf("Nhap vao 2 so tu 01 den 15: ");
    scanf("%d %d", &nn1, &nn2);
    int dem = 0;
    if (nn1 == so1 || nn1 == so2) dem++;
    if (nn2 == so1 || nn2 == so2) dem++;
    if (dem == 0) {
        printf("Chuc ban may man lan sau\n");
    } else if (dem == 1) {
        printf("Chuc mung ban da trung giai nhi\n");
    } else if (dem == 2) {
        printf("Chuc mung ban da trung giai nhat\n");
    }
        break;
    case 10: printf("10.Chuong trinh tinh phan so\n");
    int tu1,mau1;
    double tong;
    double hieu;
    double tich;
    double thuong;
    printf("nhap vao tu va mau cua phan so thu nhat la: ");
    scanf("%d %d", &tu1, &mau1);
    int tu2,mau2;
    printf("nhap vao tu va mau cua phan so thu hai la :");
    scanf("%d %d", &tu2, &mau2);
    double phanso1,phanso2;
    if(mau1 == 0){
        printf("khong co phan so 1");
    }else{
       phanso1 = tu1/mau1;
    printf("phan so 1 la: %lf", phanso1); 
    }
    if(mau2 == 0){
        printf("khong co phan so 1");
    }else{
        phanso2 = tu2/mau2;
    printf("\nphan so 2 la: %lf", phanso2);
    }
    if(phanso1 > phanso2){
    tong = phanso1 + phanso2;
    hieu = phanso1 - phanso2;
    tich = phanso1 * phanso2;
    thuong = phanso1/phanso2;
    }else{
    tong = phanso2 + phanso1;
    hieu = phanso2 - phanso1;
    tich = phanso2 * phanso1;
    thuong = phanso2/phanso1;
    }
    printf("\ntong cua 2 phan so la: %lf", tong);
    printf("\nhieu cua 2 phan so la: %lf", hieu);
    printf("\ntich cua 2 phan so la: %lf", tich);
    printf("\nthuong cua 2 phan so la: %lf", thuong);
        break;
    case 0: printf("0.thoat\n");
            exit(0);
        break;
    default:
        printf("Lua chon khong dung nhap lai\n");
    }

}while(luaChon != '0');
     return 0;
}
