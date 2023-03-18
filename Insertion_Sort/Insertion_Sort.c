#include<stdio.h>
int main(){
    int i,j,item,arr[]={11,6,2,3,4,5,8,9,7,1,12,13,15,16,18};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (i = 1; i < len; i++)
    {
        item=arr[i];
        j=i-1;
        while(item<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=item;      
    }
    for (i = 0; i < len; i++)
    {
       printf("%d  ",arr[i]);
    }
    
    
}