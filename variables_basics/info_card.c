#include <stdio.h> 


int main(void) {

char name[50];
int age;
float height;

printf("please enter your name:  ");
scanf("%s", name);


printf("please enter your age:  ");
scanf("%d", &age);

printf("Please enter your age (in meters):  "); 
scanf("%f", &height);


printf("-----------------personal data------------------\n");

printf("Helloooo! %s \n", name);

printf("below is your full details\n");

printf("Name  : %s \n", name);

printf("Age   : %d \n", age);

printf("Height: %.2f meters \n", height); 
 
}
