#include<stdio.h>

void Sort(int arr[], int size){
    int swap=0;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}

int Binary_Search(int arr[], int size, int element){
    int low = 0, high = size-1;
    while(low<=high){
         int mid = (low + high)/2;
        if(arr[mid]==element){
            return mid;
        } 
        if(arr[mid]>element){
            high = mid - 1;
        } else{
            low = mid + 1;
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

    Sort(arr, size);
    printf("Sorted Elements: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter an element to search: ");
    scanf("%d",&element);
    
    int result = Binary_Search(arr, size, element);
    if(result == -1){
        printf("\nElement not in array");
    } else{
        printf("\nFound element %d at index %d", element, result);
    }   
    return 0;
}
