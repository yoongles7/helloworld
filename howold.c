#include<stdio.h>

int main(){ 
int year1, year2, age;
printf("Enter your birth year-");
scanf("%d",&year1);
printf("Enter current year");
scanf("%d",&year2);

age = (year2 - year1);
printf("You are %d years old.",age);
return 0;
}