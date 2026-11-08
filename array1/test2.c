#include <stdio.h>

int main(){
    int arr[5];
    int input;
    int cnt = 0;
    while (cnt<5){
        scanf("%d",&input);
        arr[cnt] = input;
        cnt++;
    }
    int sum = 0;
    for(int i = 0; i<5; i+=2){
        sum += arr[i];
    }
    printf("%d\n",sum);
    return 0;
}