#include <stdio.h>

int main(){
    int arr[100];
    arr[0]=100;
    scanf("%d",&arr[1]);
    printf("%d %d ",arr[0],arr[1]);
    int i =1;
    while (1){
        arr[i+1] = arr[i-1] - arr[i];
        printf("%d ",arr[i+1]);
        if(arr[i+1]<0){
            break;
        }
        i++;
    }
    return 0;
}