#include <stdio.h>

int main(){
    int cnt[10]={0};
    int num;
    while (1){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        int last = num%10;
        cnt[last]++;
    }
    for(int i = 0;i<=9;i++){
        if(cnt[i]>0){
            printf("%d : %d\n",i,cnt[i]);
        }
    }
    return 0;
}