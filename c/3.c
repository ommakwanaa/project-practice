/* search and sequence .*/

#include <stdio.h>
int main()
{
 int ARRAY[10] = {1,5,4,8,9,2,0,6,11,7},input,FLAG=0;
 // Taking input from user
 printf("Enter number to find input ");
 scanf("%d",&input);
 printf("sequence: ");
 for (int i = 0; i < sizeof(ARRAY)/sizeof(int); i++){
    printf("%d",ARRAY[i]);
    if (ARRAY[i]==input){FLAG = 1;}
 }
 if (FLAG ==1){printf("\nYES\n");}
 else{printf("\nNO\n");}

}