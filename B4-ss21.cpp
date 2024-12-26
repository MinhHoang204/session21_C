#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt da doc!\n");
        return 1;
    }

    char dongDauTien[1000];
    if (fgets(dongDauTien, sizeof(dongDauTien), file) != NULL) {
        printf("Dong dau tien trong file la: %s", dongDauTien);
    } else {
        printf("File bt01.txt rong hoac khong co dong nao!\n");
    }
    fclose(file);
    return 0;
}

