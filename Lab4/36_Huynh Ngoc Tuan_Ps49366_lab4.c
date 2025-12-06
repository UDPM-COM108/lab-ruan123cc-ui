#include <stdio.h>
#include <stdlib.h>
int main() {
    int luachon;
    do {
        printf("===== MENU =====\n");
        printf("1. Tinh trung binh cac so tu nhien chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &luachon);
        switch(luachon) {       
        case 1: {
           int min, max;
           printf("nhap min la:");
           scanf("%d", &min);
           printf("nhap max la:");
           scanf("%d", &max);
           int i=min;
           float tong=0, bienDiem=0, trungBinh=0;
           while( i<= max){
             if(i % 2 == 0){
                tong +=i;
                bienDiem ++;
            }
            i++;
            }
            trungBinh = tong/bienDiem;
            printf("diem trung binh la %f", trungBinh);
            break;
        }
        case 2: {
            int x, i, count = 0;
            printf("Nhap so x: ");
            scanf("%d", &x);
            if(x < 2) {
                printf("%d khong phai so nguyen to\n", x);
                break;
            }
            for(i = 1; i <= x; i++) {
                if(x % i == 0)
                    count++;
            }
            if(count == 2)
                printf("%d la so nguyen to\n", x);
            else
                printf("%d khong phai so nguyen to\n", x);
            break;
        }
        case 3: {
            int x, i, check = 0;
            printf("Nhap so x: ");
            scanf("%d", &x);
            for(i = 1; i * i <= x; i++) {
                if(i * i == x) {
                    check = 1;
                    break;
                }
            }
            if(check == 1)
                printf("%d la so chinh phuong\n", x);
            else
                printf("%d khong phai so chinh phuong\n", x);
            break;
        }
        case 0:
            printf("thoat\n");
            exit(0);
         default:
            printf("Lua chon khong hop le!\n");
        }
    } while(luachon != 0);
    return 0;
}