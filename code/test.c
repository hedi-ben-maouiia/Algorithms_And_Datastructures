#include <stdlib.h>
#include <stdio.h>
#include "algorithms.h"

void read_array(int arr[],int len){
    for(int i=0;i<len;++i){
        int rand = 1 + random() % len; 
        arr[i] = rand; 
    } 
}

void print_array(int arr[],int len){
    for(int i=0;i<len;++i)
        printf("%d ",arr[i]);
    printf("\n");
}



int main(void){
    int len;
    scanf("%d",&len);
    int arr[len];
    read_array(arr,len);
    insertion_sort(arr, len);
    print_array(arr,len);
    return 0;
}
