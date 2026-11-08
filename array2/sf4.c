#include <stdio.h>

int main(){
    int arr[10];
    int input;
    int cnt = 0;
    while (cnt < 10){
        scanf("%d",&input);
        arr[cnt]=input;
        cnt++;
    }
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    for(int i = 0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}