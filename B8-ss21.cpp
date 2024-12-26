#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file students.txt da doc!\n");
        return 1;
    }

    Student students[100];
    int count = 0;

    while (fscanf(file, "%d,%99[^,],%d\n", &students[count].id, students[count].name, &students[count].age) == 3) {
        count++;
        if (count >= 100) {
            printf("Da dat gioi han toi da 100 sinh vien.\n");
            break;
        }
    }
    fclose(file);

    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d\n", students[i].id, students[i].name, students[i].age);
    }

    return 0;
}

