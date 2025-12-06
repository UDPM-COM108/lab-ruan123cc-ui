/*#include <stdio.h>
int main(){
    /double d;
    printf("diem la:");
    scanf("%lf", &d);
    if(d>=5){
        printf("dau");
    }else{
        printf("rot");
    }







    double diem;
    printf("diem cua sv:");
    scanf("%lf", &diem);
    if(diem>=9){
        printf("hoc luc xs");
    }else if(9>diem && diem>=8){
        printf("hoc luc gioi");
    }else if(8>diem && diem>=7){
        printf("hoc luc kha");
    }else if(7>diem && diem>=5){
        printf("hoc luc tb");
    }else if(5>diem && diem>=3){
        printf("hoc luc yeu");
    }else{
        printf("hoc luc kem");
    }
    return 0;
}
*/




#include <stdio.h>
int main(){
    printf("Viet Nam co bao nhieu dan toc anh em");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi ban chon dap an(a,b,c,d): ");
    char dapan;
    scanf("%s", &dapan);
    switch(dapan){
        case 'a': printf("ban da chon sai\n");
        break;
        case 'b': printf("ban da chon sai\n");
        break;
        case 'c': printf("ban da chon dung\n");
        break;
        case 'd': printf("ban da chon sai\n");
        break;
        default:
            printf("ban chon khong dung dap an a,b,c,d");
    } return 0;
}