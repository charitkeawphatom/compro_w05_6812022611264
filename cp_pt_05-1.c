#include <stdio.h> // เรียกใช้ไลบรารีมาตรฐานสำหรับการแสดงผลทางหน้าจอ

int main() {
    char name = 'C';        // ประกาศตัวแปร name เป็นตัวอักษร ใช้ตัวพิมพ์ใหญ่ตัวแรกของชื่อเล่น
    int age = 19;           // ประกาศตัวแปร age เป็นจำนวนเต็ม แทนอายุของเรา
    float weight = 54.5;    // ประกาศตัวแปร weight เป็นเลขทศนิยม แทนน้ำหนักของเรา

    // แสดงผลตัวแปรทั้งหมดในบรรทัดแรก
    printf("Name: %c, Age: %d, Weight: %.1f\n", name, age, weight);

    // แสดงผลแบบประโยคในบรรทัดที่สอง
    printf("My name is %c. I am %d years old and weigh %.1f kg.\n", name, age, weight);

    return 0; // คืนค่า 0 เพื่อแสดงว่าโปรแกรมทำงานสำเร็จ
}
