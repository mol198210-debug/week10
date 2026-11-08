#include <stdio.h>

int main(){
    int arr[10];
    int cnt = 0;
    int input;
    while (cnt<10){
        scanf("%d",&input);
        arr[cnt] = input;
        cnt++;
    }
    int sum = 0;
    for(int i = 0; i<10;i++){
        sum += arr[i];
    }
    printf("sum = %d\n",sum);
    printf("avg = %.1f\n",(double)sum/10);
}