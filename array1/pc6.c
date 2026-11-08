#include <stdio.h>

int main(){
    int arr[10];
    int min = 0, max = 0;
    for(int i = 0;i<10; i++){
        scanf("%d",&arr[i]);
        
        if(min>arr[i]){
            min = arr[i];
        }else if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d %d",max,min);

}