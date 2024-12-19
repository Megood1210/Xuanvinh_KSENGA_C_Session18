#include <stdio.h>
struct Student {
    char name[100];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student student1 = {"Le Hoang Xuan Vinh",18,"09661234"};
    printf("Ten sinh vien: %s \n", student1.name);  
    printf("Tuoi sinh vien: %d \n", student1.age);
    printf("So dien thoai sinh vien: %s \n", student1.phoneNumber); 
    return 0;
}




