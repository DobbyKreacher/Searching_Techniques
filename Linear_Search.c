#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int size=0, arr[], element=0;
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
