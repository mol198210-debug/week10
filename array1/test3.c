#include <stdio.h>

int main(){
    int arr[10];
    int input;
    int cnt = 0;
    while (cnt < 10){
        scanf("%d",&input);
        arr[cnt]=input;
        cnt++;
    }
    int odd = 0,even = 0;
    for(int i = 0;i<5;i++){
        even += arr[2*i+1];
        odd += arr[2*i];
    }
    printf("odd : %d\n",odd);
    printf("even : %d\n",even);
    return 0;
}