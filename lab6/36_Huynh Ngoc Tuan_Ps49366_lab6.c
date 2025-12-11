#include <stdio.h>
#define M 10
#define N 10
void nhapmang2chieu(int m,int n, int a[M][N]);
void xuatmang2chieu(int m,int n, int a[M][N]);
void tinhtongtbsochiahetcho3(int m, int n, int a[M][N]);
void giatrinhonhatvalonnhat(int m, int n, int a[M][N]);
void sapxeptheothutugiamdan(int m, int n, int a[M][N]);

void nhapmang2chieu(int m,int n, int a[M][N]) {
for(int i = 0; i<m;i++){
    for(int j = 0; j<n; j++){
        printf("nhap a[%d][%d]", i, j);
        scanf("%d", &a[i][j]);
    }
}
}

void xuatmang2chieu(int m,int n, int a[M][N]) {
printf("xuat mang a[%d][%d]", m, n);
for(int i = 0; i<m; i++){
    for(int j = 0; j<n; j++){
        printf("%d", a[i][j]);

    }printf("\n");
}
}


void tinhtongtbsochiahetcho3(int m, int n, int a[M][N]){
    int S = 0;
    int so = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] % 3 == 0){
                S += a[i][j];
                so++;
                

            }
        }printf("\n\ncac so chia het cho 3 trong mang la: %d", so);
        printf("\ntong cac so chia het cho 3 la: %d", S);
    }
    if(so>0){
        int tb = S/so;
        printf("\ngia tri tb la %d", tb);
    }else{
        printf("loi");
    }
    
}
void giatrinhonhatvalonnhat(int m, int n, int a[M][N]){
    int max = a[0][0];
    int min = a[0][0];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++ ){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("\n\ngia tri lon nhat trong mang la: %d", max);
    printf("\ngia tri nho nhat trong mang la: %d",min);


}
void sapxeptheothutugiamdan(int m, int n, int a[M][N] ){
    int k, d;
    int temp;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            a[i][j]=a[k][d];
        }
    }
    for(int i = 0; i<m -1 ;i++ ){
        for(int j = 0; j<n -1 ;j++){
            for(int k=i+1; k<m;k++){
                for(int d=j+1; d<n;d++){
                    if(a[i][j]<a[k][d]){
                        temp = a[i][j];
                        a[i][j] = a[k][d];
                        a[k][d] = temp;
                    }
                }
            }

        }
    }
    

}
int main(){
    int a[M][N];
    int m, n;
    printf("Nhap m va n: ");
    scanf("%d %d", &m,&n);

    nhapmang2chieu(m,n,a);
    xuatmang2chieu(m,n,a);
    tinhtongtbsochiahetcho3(m,n,a);
    giatrinhonhatvalonnhat(m,n,a);
    sapxeptheothutugiamdan(m,n,a);
    return 0;
}