#include <stdio.h>
struct Student {
    int id;                
    char name[100];       
    int age;               
    char phoneNumber[15]; 
};
int main() {
    struct Student students[50] = {{1, "Nguyen Van A", 20, "09664321"},{2, "Le Phu B", 21, "09663241"},{3, "Tran Thi C", 22, "09661342"},{4, "Pham Vinh", 23, "09663412"},{5, "Hoang Phuong", 24, "09664231"}};
    int count = 5;  
    if (count < 50) { 
        struct Student newStudent;
        newStudent.id = count + 1;  
        printf("\nNhap thong tin sinh vien moi:\n");
        printf("Nhap ten sinh vien: ");
        fgets(newStudent.name, sizeof(newStudent.name), stdin); 
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &newStudent.age);
        getchar();  
        printf("Nhap so dien thoai sinh vien: ");
        fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin); 
        students[count] = newStudent;
        count++; 
    }
    printf("\nThong tin cac sinh vien trong mang:\n");
    for (int i = 0; i < count; i++) {
        printf("\nSinh vien %d:\n", students[i].id);
        printf("Ten: %s", students[i].name); 
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber); 
    }
    return 0;
}



