#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the tao file bt05.txt da ghi!\n");
        return 1;
    }

    int soDong;
    printf("Nhap so dong can ghi vào file: ");
    scanf("%d", &soDong);
    getchar(); 

    char noiDung[1000];
    for (int i = 1; i <= soDong; i++) {
        printf("Nhap noi dung cho dong %d: ", i);
        fgets(noiDung, sizeof(noiDung), stdin);
        fprintf(file, "%s", noiDung);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt05.txt da doc!\n");
        return 1;
    }

    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(noiDung, sizeof(noiDung), file) != NULL) {
        printf("%s", noiDung);
    }
    fclose(file);

    return 0;
}

