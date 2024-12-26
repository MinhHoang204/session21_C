#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file da ghi!\n");
        return 1;
    }
    char chuoi[1000];
    printf("Nhap mot chuoi bat ki: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    fprintf(file, "%s", chuoi);
    printf("Da ghi chuoi vao file bt01.txt thanh cong.\n");
    fclose(file);
    return 0;
}

