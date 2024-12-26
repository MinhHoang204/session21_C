#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong the mo file bt01.txt da doc!\n");
        return 1;
    }

    FILE *file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        printf("Khong the mo file bt06.txt da ghi!\n");
        fclose(file1); 
        return 1;
    }

    char ch;
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2); 
    }

    fclose(file1);
    fclose(file2);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");

    return 0;
}

