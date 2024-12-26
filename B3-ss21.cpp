#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt da ghi them!\n");
        return 1;
    }
    char chuoi[1000];
    printf("Nhap mot chuoi da ghi them vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin); 

    fprintf(file, "%s", chuoi);
    printf("Da ghi them chuoi vao file bt01.txt thanh cong.\n");
    fclose(file);

    return 0;
}

