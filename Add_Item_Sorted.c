#include<stdio.h>
#define max 50
int main(){
    int arr[max],n,i,j,temp,val;
    printf("Enter the number of values you want to give (Max limit 50): ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value at %d position: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Your input in sorted manner is given below:\n");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\nEnter the value you want to enter in sorted array: ");
    scanf("%d",&val);
    for(i=0;i<n-1;i++){
        if(arr[i]>val)
        break; 
    }
    for(j=n-1;j>=i;j--){
        arr[j+1]=arr[j];
    }
    arr[i]=val;
    printf("Your updated array is:\n");
    for(j=0;j<=n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}