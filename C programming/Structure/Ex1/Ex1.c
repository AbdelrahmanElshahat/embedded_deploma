//
// Created by shahat on 3/24/22.
//
#include <stdio.h>

typedef struct Sstudents{
    char name [20];
    int roll;
    float marks;

}student_t;
    int main(){
        student_t Student;

        int ch;
        do {
            printf("Enter Student information\n");
            printf("Enter Name:");
            scanf("%s",Student.name);
            printf("Enter roll:");
            scanf("%d",&Student.roll);
            printf("Enter Marks:");
            scanf("%f",&Student.marks);
            printf("Display information\n");
            printf("name: %s\nRoll: %d\nMarks: %.2f\n",Student.name,Student.roll,Student.marks);
            printf("press 1 to Continue or any other key to end:");
            scanf("%d",&ch);
        } while (ch == 1);

        return 0;
    }

