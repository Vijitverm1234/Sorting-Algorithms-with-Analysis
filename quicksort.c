// Online C compiler to run C program online
#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partion(int arr[],int p,int r){
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(arr[j]<x){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[r],&arr[i+1]);
    return i+1;
}
void quickSort(int arr[],int p,int r){
    
    if(p<r){
        int q=partion(arr,p,r);
        quickSort(arr,0,q-1);
        quickSort(arr,q+1,r);
    }
}
int main() {
    // Write C code here
    printf("Try programiz.pro");
    int arr[5]={8,2,5,1,0};
    quickSort(arr,0,4);
     for(int i=0;i<5;i++){
         printf(" %d ",arr[i]);
     }
    return 0;
}