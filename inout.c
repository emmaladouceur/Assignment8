//Emma Ladouceur

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
FILE *inFile = fopen("inout.txt", "r");


char inout[100];

float a;

fgets(inout, sizeof(inout), inFile);
int i;
float total, mean, sumsquare, std;
for(i = 0; i<=9; i++){

a = atof(inout);
printf("%f\n", a);
fgets(inout, 100, inFile);

total = total + a;

}
int numarr[9];

mean = total/9;
for(i=0; i<9;i++){

sumsquare = (total-mean)*(total-mean);

}
std = sqrt(sumsquare/i-1);

printf("The average is: %f\n", mean);
printf("The Standard Deviation is: %f", std);
fclose(inFile);
return 0;


}
