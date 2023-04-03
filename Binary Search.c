#include<stdio.h>
#include<time.h>

int BS(int arr[],int low,int high,int key){
    if(high>=low){
        int mid = (low + high)/2;
        if (arr[mid] == key)
            return mid;
        else if(arr[mid]>key)
            return BS(arr,low,mid-1,key);
        else 
            return BS(arr,mid+1,high,key);
    }
    // else 
        // return -1;
}

int main(){
    int a[10];
    int n,l,k,h;
    l= 0;
    h = n-1;
    
    printf("Enter number of array:");
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        printf("Enter the elements - %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter key to find:");
    scanf("%d",&k);
    clock_t start = clock();
    int res = BS(a,l,h,k);
    clock_t end = clock();
    if (res == -1)
    printf("Element not found!");
    else 
    printf("Key found at:%d\n",res);
    
    
    printf("Start time:%lf",(double) start);
    printf("End time:%lf", (double) end);
    printf("Total time:%lf",(double) end - start);
    
    return 0;
}