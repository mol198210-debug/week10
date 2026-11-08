#include <stdio.h>

int arr[10];
int cnt = 0;
int main(){
    while (cnt<10){
        scanf(" %c",&arr[cnt]);
        cnt++;
    }
    for(int i = 0;i<10;i++){
        printf("%c",arr[i]);
    }
    printf("\n");

    return 0;
}