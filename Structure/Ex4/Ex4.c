//
// Created by shahat on 3/24/22.
//
#include <stdio.h>
typedef struct SStudents{
    char name[20];
    int roll;
    int marks;
}student_t;
void storeStudent(student_t student[],int i){
    student[i].roll =i+1;
    printf("Enter student Name :");
    scanf("%s",&student[i].name);
    printf("Enter student marks :");
    scanf("%d",&student[i].marks);
}
void displayStudent(student_t student[],int i){
    printf("Information for roll no.%d\n",student[i].roll);
    printf("name: %s\n",student[i].name);
    printf("Marks: %d\n",student[i].marks);
}
int main(){
    int i;
    student_t students[10];
    printf("Enter information of students:\n");
    for (i = 0;i<10;i++){
        storeStudent(students,i);
    }
    printf("Displaying information of students :\n");
    for (i = 0;i<10;i++){
        displayStudent(students,i);
    }
    return 0;
}
