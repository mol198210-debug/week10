#include <stdio.h>

int arr[5];
int n;
int cnt = 0;
int main(){
    while(cnt<5){
        scanf("%d",&arr[cnt]);
        cnt++;
    }
    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}