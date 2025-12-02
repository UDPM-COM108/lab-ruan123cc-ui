#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
        int so;
        int c = sqrt(so);
        printf("nhap so x la: ");
        scanf("%d", &so);
        if(c*c == so){
            printf("x la so chinh phuong");
        }else{
            printf("x khong phai la so chinh phuong");
        }
        if(so>1 && so % 1==0 && so % so ==0){
            printf("\nx la so nguyen to");
        }else{
            printf("\nx khong phai la so nguyen to");
        }
        if(so>0){
            printf("\nx la so nguyen");
        }else{
            printf("\nx khong phai la so nguyen");
        }
        break;
    case 2: printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
        int a,b;
        int ucln = a;
        printf("nhap 2 giá tri so nguyen a va b: ");
        scanf("%d %d", &a, &b);
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
         }
        int bcnn = (a*b)/ucln;
        printf("uoc chung lon nhat la: %d", ucln);
        printf("\nboi chung nho nhat la: %d", bcnn);
        break;
    case 3: printf("3.Chuong trinh tinh tien cho quan karaoke\n");
        int gbd, gkt;
        float S = 0;
        printf("nhap gio bat dau la: ");
        scanf("%d", &gbd);
        printf("gio ket thuc la: ");
        scanf("%d", &gkt);
        int gio = gkt - gbd;
        if(gio <= 3){
            S = gio * 50000;
        }else{
            S = 150000 + (gio-3)*50000*0.7;
        }if(gbd >= 14 && gbd <= 17){
            S = S * 0.9;
        }printf("tong tien can thanh toan la %d", S);
        break;
    case 4: printf("4.Chuong trinh tinh tien dien\n");
        break;
    case 5: printf("5.Chuong trinh chuc nang doi tien\n");
        break;
    case 6: printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
        break;
    case 7: printf("7.Chuong trinh tinh vay tien mua xe\n");
        break;
    case 8: printf("8.Sap xep thong tin sinh vien\n");
        break;
    case 9: printf("9.Xay dung game FPOLY-LOTT\n");
        break;
    case 10: printf("10.Chuong trinh tinh phan so\n");
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
