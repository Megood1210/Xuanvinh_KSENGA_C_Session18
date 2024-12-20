#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} Students;
void showStudents(Students sv) {
    printf("ID: %d \n", sv.id);
    printf("Name: %s \n", sv.name);
    printf("Age: %d \n", sv.age);
    printf("Phone Number: %s \n \n", sv.phoneNumber);
}
void deleteStudent(Students studentsArr[], int *studentsNumber, char name[]) {
    int found = 0;
    for (int i = 0; i < *studentsNumber; i++) {
        if (strcmp(studentsArr[i].name, name) == 0) {
            found = 1;
            for (int j = i; j < *studentsNumber - 1; j++) {
                studentsArr[j] = studentsArr[j + 1];
            }
            (*studentsNumber)--; // Gi?m s? lu?ng sinh viên trong m?ng
            break;
        }
    }
    if (!found) {
        printf("Khong co %s \n", name);
    } else {
       
    }
}
void showStudentsArr(Students studentArr[], int studentsNumber) {
    printf("Danh sach sinh vien sau khi xoa: \n");
    for (int i = 0; i < studentsNumber; i++) {
        showStudents(studentArr[i]);
    }
}
int main() {
    Students studentArr[50] = {{ 1, "Nguyen Van A", 20, "09664321"}, {2, "Le Phu B", 21, "09663241"}, {3, "Tran Thi C", 22, "09661342"}, {4, "Pham Vinh", 23, "09663412"}, {5, "Hoang Phuong", 24, "09664231"}};
    int studentsNumber = 5; 
    printf("Danh sach sinh vien ban dau: \n");
    showStudentsArr(studentArr, studentsNumber);
    char name[100];
    printf("Nhap ten sinh vien can xoa: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 
    deleteStudent(studentArr, &studentsNumber, name);
    showStudentsArr(studentArr, studentsNumber); 
    return 0;
}


