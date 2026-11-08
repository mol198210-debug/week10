#include <stdio.h>

int main(){
    int arr[100];
    int input;
    int cnt = 0;
    while (cnt<100){
        scanf("%d",&input);
        if(input == 0 )
        break;
        arr[cnt]=input;
        cnt++;
    }
    int num = 0;
    int sum = 0;
    for(int i = 0; i<cnt;i++){
        if(arr[i]%5==0){
            num++;
            sum+=arr[i];
        }
    }
    printf("Multiples of 5 : %d\n",num);
    printf("sum : %d\n",sum);
    printf("avg : %.1f",(double)sum/num);
    return 0;
}