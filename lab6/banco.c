#include <stdio.h>
#define M 10
#define N 9
void banco(char s[M][N]);
void hienthibanco(char s[M][N]);
//tạo ban co
void banco(char s[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            s[i][j] = '.';
        }
    }
    // Bên đỏ 
    s[0][0] = 'X'; s[0][1] = 'M'; s[0][2] = 'V'; s[0][3] = 'S'; s[0][4] = 'T'; s[0][5] = 'S'; s[0][6] = 'V'; s[0][7] = 'M'; s[0][8] = 'X';
    s[2][1] = 'P'; s[2][7] = 'P';
    s[3][0] = 'C'; s[3][2] = 'C'; s[3][4] = 'C'; s[3][6] = 'C'; s[3][8] = 'C';
    // Bên đen 
    s[9][0] = 'x'; s[9][1] = 'm'; s[9][2] = 'v'; s[9][3] = 's'; s[9][4] = 't'; s[9][5] = 's'; s[9][6] = 'v'; s[9][7] = 'm'; s[9][8] = 'x';
    s[7][1] = 'p'; s[7][7] = 'p';
    s[6][0] = 'c'; s[6][2] = 'c'; s[6][4] = 'c'; s[6][6] = 'c'; s[6][8] = 'c';
}
// Hàm hiển thị bàn cờ
void hienthibanco(char s[M][N]) {
    printf("Bàn cờ tướng:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", s[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char s[M][N];  
    int m, n, u, o;  
    banco(s);
    while (1) {
        hienthibanco(s);
        // Nhập nước đi 
        printf("Nhập hàng từ, cột từ, hàng đến, cột đến: \n");
        scanf("%d %d %d %d", &m, &n, &u, &o);
        // Kiểm tra vị trí hợp lệ 
        if (m < 0 || m >= M || n < 0 || n >= N ||  u < 0 || u >= M || o < 0 || o >= N){
            printf("Vị trí không hợp lệ! Thử lại.\n");
            continue;
        }
        // Kiểm tra ô xuất phát có quân cờ không
        if (s[M][N] == '.') {
            printf("Ô xuất phát không có quân cờ! Thử lại.\n");
            continue;
        }
         // Di chuyển 
        s[u][o] = s[m][n];  
        s[m][n] = '.';  
        printf("Đã di chuyển!\n");
    }
    return 0;
}
