#include <stdio.h>  // เรียกใช้ไลบรารีสำหรับรับและแสดงผลข้อมูล

int main() {
    // ประกาศตัวแปรสำหรับแต่ละคน (3 คน)
    char name1, grade1;
    int age1;
    float height1, weight1;

    char name2, grade2;
    int age2;
    float height2, weight2;

    char name3, grade3;
    int age3;
    float height3, weight3;

    // รับข้อมูลของแต่ละคนจากผู้ใช้ ทีละบรรทัด
    printf("Enter data for person 1 (Name Age Height Weight Grade):\n");
    scanf(" %c %d %f %f %c", &name1, &age1, &height1, &weight1, &grade1);

    printf("Enter data for person 2 (Name Age Height Weight Grade):\n");
    scanf(" %c %d %f %f %c", &name2, &age2, &height2, &weight2, &grade2);

    printf("Enter data for person 3 (Name Age Height Weight Grade):\n");
    scanf(" %c %d %f %f %c", &name3, &age3, &height3, &weight3, &grade3);

    // แสดงผลข้อมูลแบบจัดรูปแบบให้อ่านง่าย
    printf("\n------------------------------------------\n");
    printf("| No | Name | Age | Height(cm) | Weight(kg) | Grade |\n");
    printf("------------------------------------------\n");
    printf("|  1 |  %c   | %3d |    %5.1f   |    %5.1f   |   %c   |\n", name1, age1, height1, weight1, grade1);
    printf("|  2 |  %c   | %3d |    %5.1f   |    %5.1f   |   %c   |\n", name2, age2, height2, weight2, grade2);
    printf("|  3 |  %c   | %3d |    %5.1f   |    %5.1f   |   %c   |\n", name3, age3, height3, weight3, grade3);
    printf("------------------------------------------\n");

    return 0;  // โปรแกรมทำงานสำเร็จ
}
