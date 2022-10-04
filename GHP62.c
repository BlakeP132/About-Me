#include <stdio.h>
#include <string.h>
/*
Author: Blake Pinos
Created: April 29, 2022
*/

struct Auto_t{
char make[20];
char model[20];
int odometer;
char mdate[20];
char pdate[20];
float tank;
float fuel;
} Automobiles[4];

int main(void){
void scan_auto();
//Calls the scan auto function 
scan_auto();
return 0;
}

void scan_auto(){
int i;
//For loop for 4 cars that asks the user to input each car information and prints and stores them
for(i=0;i<4;i++){
printf("Enter the information of car %d: \n",i+1);
printf("Enter the cars make: \n");
scanf("%s", Automobiles[i].make);
printf("Enter the cars model: \n");
scanf("%s", Automobiles[i].model);
printf("Enter the cars odometer: \n");
scanf("%d", &Automobiles[i].odometer);
printf("Enter the cars manufacture date with /: \n");
scanf("%s", Automobiles[i].mdate);
printf("Enter the cars purchase date with /: \n");
scanf("%s", Automobiles[i].pdate);
printf("Enter the cars tank capacity: \n");
scanf("%f", &Automobiles[i].tank);
printf("Enter the cars current fuel level: \n");
scanf("%f", &Automobiles[i].fuel);
}
printf("The information for the cars are: \n");
//Prints out the information of the 4 cars
for(i=0;i<4;i++){
printf("%s   %s   %d   %s   %s   %.1f   %.1f", Automobiles[i].make, Automobiles[i].model, Automobiles[i].odometer, Automobiles[i].mdate, Automobiles[i].pdate, Automobiles[i].tank, Automobiles[i].fuel);
printf("\n");
}

}



