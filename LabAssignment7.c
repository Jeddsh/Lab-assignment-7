#include <stdio.h>

void BubbleSort(int arr[9], int n){
    int i, j, swaps, temp;
    //travers array the length of the array minus 1 times to fully sort it 
    for(i = 0; i < n-1; i++){
        swaps = 0;
        printf("Interation #%d", (i+1));

        //testing output
        //printf("\t array: ");

        //traverses the entire unsorted array and sets the largest number at the biggest position of the iteration
        for(j = 0; j < n-i-1; j++){
            //swaps the position if the current element is larger than the next and increments swaps variable
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }

        /* testing block
        for(j = 0; j < n; j++){
            printf("%d ", arr[j]);
        }
        */

        printf("\t Number of swaps this iteration: %d\n", swaps);
    }
}

int main(){
    int len = 9;
    int arr[9] ={97, 16, 45, 63, 13, 22, 7, 58, 72};

    BubbleSort(arr, len);

    return 0;
}