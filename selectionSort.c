#include<stdio.h> 
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
}
void main(){
int arr[]={5,6,2,1,3};
selectionSort(arr,5);
for(int i=0;i<5;i++){
    printf(" %d ",arr[i]);
}

}