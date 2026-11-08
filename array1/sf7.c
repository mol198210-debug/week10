#include <stdio.h>

int main(){
    int arr[10];
    int input;
    int cnt = 0;
    while (cnt<10){
        scanf("%d",&input);
        arr[cnt]=input;
        cnt++;
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 0;i<5;i++){
        sum1 += arr[2*i+1];
        sum2 += arr[2*i];
    }
    printf("sum : %d\n",sum1);
    printf("avg : %.1f\n",(double)sum2/5);
    
}