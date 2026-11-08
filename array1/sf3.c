#include <stdio.h>

int main(){
    int arr[100];
    int cnt = 0;
    int input;
    while (cnt<100){
        scanf("%d",&input);
        if (input == 0){
            break;
        }
        arr[cnt]=input;
        cnt++;
    }
    for(int i = cnt - 1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}