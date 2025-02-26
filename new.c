#include<stdio.h>

void bubblesort(int arr[], int );



void bubblesort(int arr[] , int n ){

    for (int i = 0; i < n-1; i++)
    {
           for (int j = 0; j < n-i-1; j++)
            {
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1] = temp; 
                }
            }
            
    }
    
}


int main(){

    int arr[]={55,56,54,23,12,18,99,75,32,53};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr , n);

    printf("\nTHE SORTED ARRAY IS = \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
return 0;

}



