#include <stdio.h>

int main(){
    int arr[11]={0};
    int input = 0;
    while (1){
        scanf("%d",&input);
        if(input==0){
            break;
        }
        arr[input/10]++;
    }
    for(int i = 10;i>0;i--){
        if(arr[i]>0){
            printf("%d : %d\n",i*10,arr[i]);
        }
    }
    return 0;
}