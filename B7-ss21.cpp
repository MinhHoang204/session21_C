#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file students.txt da ghi!\n");
        return 1;
    }

    int soLuong;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &soLuong);
    Student students[soLuong];

    for (int i = 0; i < soLuong; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar(); 

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }

    for (int i = 0; i < soLuong; i++) {
        fprintf(file, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }
    fclose(file);
    printf("\nDa luu thong tin sinh vien vao file students.txt.\n");

    return 0;
}

