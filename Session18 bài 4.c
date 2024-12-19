#include <stdio.h>
#include <string.h>
struct Students {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main(){
    struct Students students1[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        students1[i].id = i + 1; 
        printf("Nhap ten sinh vien %d: ", i + 1);
        fgets(students1[i].name, sizeof(students1[i].name), stdin);
        students1[i].name[strcspn(students1[i].name, "\n")] = '\0';
        printf("Nhap tuoi sinh vien %d: ", i + 1);
        scanf("%d", &students1[i].age);
        getchar(); 
        printf("Nhap so dien thoai sinh vien %d: ", i + 1);
        fgets(students1[i].phoneNumber, sizeof(students1[i].phoneNumber), stdin);
        students1[i].phoneNumber[strcspn(students1[i].phoneNumber, "\n")] = '\0';
    }
    printf("\nDanh sach sinh vien da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d \n", students1[i].id);
        printf("Tên: %s \n", students1[i].name);
        printf("Tu?i: %d \n", students1[i].age);
        printf("So dien thoai: %s \n", students1[i].phoneNumber);
    }
    return 0;
}



