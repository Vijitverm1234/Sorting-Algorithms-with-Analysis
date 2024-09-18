// Online C compiler to run C program online
#include <stdio.h>
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main() {
    // Write C code here
    int a[10]={5,2,1,4,0};
    insertionSort(a,5);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}