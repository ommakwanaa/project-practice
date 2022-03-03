#include <stdio.h>
#include <stdlib.h>
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
       printf("%d ",arr[i]);
    }
}


void merge(int X[], int Y[], int m, int n){

    for (int i = 0; i < m; i++)
    {//printf("\n%d starting x[i]",X[i]);
    // printf("\n%d starting Y[0]",Y[0]);
        if (X[i] > Y[0])
        {
            int temp;
            temp = X[i];
            X[i] = Y[0];
            Y[0] = temp;
            int first = Y[0];
            // printf("i am first %d\n",first);
            int k;
            for (k = 1; k < n && Y[k] < first; k++) {
                // printf("i am Y[k - 1] %d\n",Y[k - 1]);
                // printf("i am Y[k] %d\n",Y[k]);
                Y[k - 1] = Y[k];
            }
            Y[k - 1] = first;

        }
    }
}
 
int main()
{
    int X[] = { 1, 4, 7, 8, 10 };
    int Y[] = { 2, 3, 9 };
 
    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);
 
    merge(X, Y, m, n);

    printf("\nx : ");
    printArray(X,m);
    printf("\ny : ");
    printArray(Y,n);
 
    return 0;
}