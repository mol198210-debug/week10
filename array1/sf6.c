#include <stdio.h>

int main(){
    int arr[100];
    int cnt = 0;
    int input;
    while (1<=cnt+1 && cnt<=100){
        scanf("%d",&input);
        if (input == 0){
            break; 
        }
        arr[cnt]=input;
        cnt++;
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0;i<cnt;i++){
        
        if(max<arr[i]){
            max = arr[i];
        }
        else if(min> arr[i]){
            min = arr[i];
        }
    }
    printf("%d\n", max-min);
    return 0;
}