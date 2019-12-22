#include <stdio.h>
#include <stdbool.h>
#include "isort.h"

int avi_arr2[LENGTH2];

int main()
{

 printf("enter a number to array ");
    int input = 0;
    int counter = 0;
    
    do
    {

        scanf("%d", &input);
        avi_arr2[counter] = input;
        counter++;
    } while (counter < LENGTH2);

    // for (int i = 0; i < LENGTH2; i++)
    // {
    //     printf("%d , ", avi_arr2[i]);
    // }
    // printf("\n");

    int *P = &avi_arr2[0];
    insertion_sort(P, LENGTH2);
    printf("after insertion sort\n");
    for (int i = 0; i < LENGTH2; i++)
    {
        if(i==LENGTH2-1){
            printf("%d", avi_arr2[i]);
        }else{
        printf("%d , ", avi_arr2[i]);
        }
    }
    printf("\n");
    
}
