// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
void shellSort(int a[],int n){
    for(int gap=floor(n/2);gap>=1;gap=gap/2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i--){
                if(a[i+gap]>a[i]){
                    break;
                }
                else{
                    int c=a[i+gap];
                    a[i+gap]=a[i];
                    a[i]=c;
                }
            }
        }
    }
}
int main() {
    // Write C code here
    int a[10]={5,2,1,4,0};
    shellSort(a,5);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}