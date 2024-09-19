#include<stdio.h> 
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
       for(int j=0;j<n-1-i;j++){
           if(arr[j+1]<arr[j]){
               int c=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=c;
           }
       }
    }
}
void main(){
int arr[]={5,6,2,1,3};
bubbleSort(arr,5);
for(int i=0;i<5;i++){
    printf(" %d ",arr[i]);
}

}