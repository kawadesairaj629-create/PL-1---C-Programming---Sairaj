/*
Problem (1)
Write a program to make use of basic I/O functions using 
different data types.
Solution(1) Preefined values
*/


#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum = 55;
    per = 88.88;
    grade = 'A';

    printf("-----Student Information-----\n");
    printf("\n Roll Number : %d",rollnum);
    printf("\n Percentage : %f",per);
    printf("\n Grade : %c",grade);
    return 0;
}