
#include <stdio.h>

int main() {
    int arr[6];
    int i,max=0,min=0;
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<=5;i++){
        if(arr[i]<=min){
        min=arr[i];}
        if(arr[i]>max){
        max=arr[i];}
        
    }
    printf("\nmax value is %d",max);
    printf("\nmin value is %d",min);
    return 0;
}