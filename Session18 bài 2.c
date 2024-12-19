#include <stdio.h>
struct Student {
    char name[100];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Student student1;
    printf("Nhap ten sinh vien: ");
    fgets(student1.name, sizeof(student1.name), stdin); 
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student1.age);
    getchar();  
    printf("Nhap so dien thoai sinh vien: \n");
    fgets(student1.phoneNumber, sizeof(student1.phoneNumber), stdin);  
    printf("\nThong tin sinh vien: ");
    printf("Ten: %s", student1.name); 
    printf("Tuoi: %d \n", student1.age);
    printf("So dien thoai: %s \n", student1.phoneNumber);  
    return 0;
}



