#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    // int arr[10]={12,56,4,89,45,98,101,78,30,1};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 45;
    int size, arr[100], element;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    printf("Enter array element:\n");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nThe elements are: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter an element to search: ");
    scanf("%d",&element);

    int result =  linearSearch(arr, size, element);
    if(result==-1){
        printf("Element not in array");
    } else {
        printf("Found element %d at index %d", element, result);
    }
    return 0;
}