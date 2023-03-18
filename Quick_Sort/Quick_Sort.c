#include<stdio.h>
void swap(int* a, int* b)
{
int t = *a;
*a = *b;
*b = t;
}

void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", arr[i]);
}

int quick_sort(int arr[],int first,int last){
    int pivot;
    if(first<last){
        pivot= partition(arr,first,last);
        quick_sort(arr,first,pivot-1);
        quick_sort(arr,pivot+1,last);
    }      
};
int partition(int arr[],int first,int last){
    int i,j,pivot;
    pivot=arr[last];
    i=first-1;
    for (j = first; j <=last-1; j++)
    {
        if(arr[j]<=pivot){
            i++;
           swap(&arr[i], &arr[j]);
        }

    }
    swap(&arr[i + 1], &arr[last]);
    return (i+1);
};
int main()
{
int first=0,last,len,arr[]={32,13,89,23,10,45,67,34,56,78,85,5,90,73};
len=sizeof(arr)/sizeof(arr[0]);
last=len-1;
quick_sort(arr,first,last);
printArray(arr, len);
return 0;
}
