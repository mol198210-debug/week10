#include <stdio.h>

int main(){
    int arr[100];
    int input;
    int cnt = 0;
    while (cnt<100){
        scanf("%d",&input);
        if(input==0){
            break;
        }
        arr[cnt] = input;
        cnt++;
    }
    printf("%d\n",cnt);
    for(int i = 0;i<cnt;i++){
        if(arr[i]%2==0){
            arr[i]/=2;
        }
        else if(arr[i]%2==1){
            arr[i]*=2;
        }
        printf("%d ",arr[i]);
    }
    return 0;
}