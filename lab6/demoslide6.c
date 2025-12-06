#include <stdio.h>
int main(){
    /*int a[3][3];//khoi tao mang 1 chieu
    printf("xuat mang a: "); //duyet mang 1 chieu
    for(int i = 0; i < 3; i++)
    for(int w = 0; w < 3; w++){
        printf("%d %d", a[i][w]);
    }


    for(int j = 0; j < 3; j++)
    for(int y = 0; y < 3; y++){
        printf("nhap phan tu a[%d][%d]:", j, y);
        scanf("%d %d", &a[j][y]);
    }*/


    /*int a[7]= {8,2,6,2,9,1,5};// bumble sort
    int i, j, temp;
    for(i = 0; i < 6; i++){
    for(j =i+1; j<7; j++){
    
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
    printf("duyet mang a:");
    for(int i=0; i<7;i++)
{
    printf("%d ", a[i]);
}*/



     int i = 0; //ma tran
    int j = 0;
    int ma_tran[4][3]={(1,2,3) ,(2,3,4) ,(3,4,5) ,(4,5,6)};
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
    
        printf("%d", ma_tran[i][j]);
    }
    printf("\n");
   
    }







    return 0;
}