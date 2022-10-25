/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[2], media;
    srand(time(0));   
    vetor[0]=10+rand()%990;
    vetor[1]=10+rand()%990;
    media=(vetor[0]+vetor[1])/2;
    printf("v1: %d\n", vetor[0]);
    printf("v2: %d\n", vetor[1]);
    printf("media: %d" ,media);
    
    return 0;
}
