#include <stdio.h>

int main(){
    int arr[7]={0};
    int cnt = 0;
    int input = 0;
    while (cnt<10){
        scanf("%d",&input);
        cnt++;
        arr[input]++;
    }
    for(int i = 1;i<=6;i++){
        printf("%d : %d\n",i,arr[i]);
    }
    return 0;
}