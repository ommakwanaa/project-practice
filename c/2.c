/*Take marks of 3 subjects of students and returning total and precentage .*/

#include <stdio.h>
int total(int a , int b, int c){   //Total of 3 subjects
    return a+b+c;       //returning sum
}
int precentage(int a , int b, int c){   //Precentage of 3 subjects
    float precent;
    precent = total(a,b,c)*100/300;
    return precent;       //returning precentage
}
int main()
{
 int marks1,marks2,marks3,avg,TOTAL;
 float PRECENTAGE;

 // Taking marks of subject
 printf("Enter maths marks from 100 ");
 scanf("%d",&marks1);
 printf("\nEnter social science marks from 100 ");
 scanf("%d",&marks2);
 printf("\nEnter science marks from 100 ");
 scanf("%d",&marks3);

 // calling sum and precentage function
 TOTAL = total(marks1,marks2,marks3);
 PRECENTAGE = precentage(marks1,marks2,marks3);

 // printing sum and precentage function
 printf("\nTotal of marks %d",TOTAL);
 printf("\nPrecentage of marks %f\n",PRECENTAGE);


}