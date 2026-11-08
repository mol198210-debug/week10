#include <stdio.h>

int main(){
    int cnt[10]={0};
    int input;
    while (1){
        scanf("%d",&input);
        if(input==0){
            break;
        }
        if(input>0&&input<100){
            int digit = input/10;
            cnt[digit]++;
        }
    }
    for(int i = 0;i<=9;i++){
        if(cnt[i]>0){
            printf("%d : %d\n",i,cnt[i]);
        }
    }
    return 0;
}