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
            printf("uoc chung lon nhat la: %d", ucln);
         }
        double bcnn = (a*b)/ucln;
        printf("\nboi chung nho nhat la: %lf", bcnn);
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
            printf("tong tien can thanh toan la %f", S);
        }
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
    double tratruoc = 0.1 - phantram;
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
