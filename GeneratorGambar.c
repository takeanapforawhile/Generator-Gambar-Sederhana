#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Batasan ukuran
#define MIN_WIDTH 5
#define MAX_WIDTH 75
#define MIN_HEIGHT 10
#define MAX_HEIGHT 100

// Fungsi untuk menggambar persegi panjang
void drawRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Fungsi untuk menggambar segitiga
void drawTriangle(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Fungsi untuk validasi ukuran input
int validateSize(int width, int height) {
    if (width < MIN_WIDTH || width > MAX_WIDTH) {
        printf("Lebar harus antara %d dan %d karakter.\n", MIN_WIDTH, MAX_WIDTH);
        return 0;
    }
    if (height < MIN_HEIGHT || height > MAX_HEIGHT) {
        printf("Panjang harus antara %d dan %d karakter.\n", MIN_HEIGHT, MAX_HEIGHT);
        return 0;
    }
    return 1;
}

int main() {
    char shape[20];
    int width, height;

    while (1) {
        // Meminta input jenis gambar
        printf("Masukkan jenis gambar (rectangle/triangle) atau 'exit' untuk keluar: ");
        scanf("%s", shape);

        // Periksa apakah pengguna ingin keluar
        if (strcmp(shape, "exit") == 0) {
            printf("Keluar dari program.\n");
            break;
        }

        // Meminta ukuran panjang dan lebar jika gambar adalah persegi panjang
        if (strcmp(shape, "rectangle") == 0) {
            printf("Masukkan lebar (min %d, max %d): ", MIN_WIDTH, MAX_WIDTH);
            scanf("%d", &width);
            printf("Masukkan panjang (min %d, max %d): ", MIN_HEIGHT, MAX_HEIGHT);
            scanf("%d", &height);

            // Validasi ukuran gambar
            if (validateSize(width, height)) {
                drawRectangle(width, height);
            }
        }
        // Meminta panjang jika gambar adalah segitiga
        else if (strcmp(shape, "triangle") == 0) {
            printf("Masukkan panjang (min %d, max %d): ", MIN_HEIGHT, MAX_HEIGHT);
            scanf("%d", &height);

            // Validasi ukuran segitiga
            if (validateSize(height, height)) {
                drawTriangle(height);
            }
        }
        else {
            printf("Jenis gambar tidak dikenal. Coba lagi.\n");
        }
    }
    return 0;
}
