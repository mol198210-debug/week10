#include <stdio.h>

int main(){
    int arr[100];
    int cnt = 0;
    int input;
        while (cnt<100){
            scanf("%d", &input);
            if(input==0){
                break;
            }
            arr[cnt]=input;
            cnt++;
        }
        for(int i =1; i<cnt;i+=2){
            printf("%d ",arr[i]);
        }
        printf("\n");

        return 0;
}
