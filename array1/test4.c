#include <stdio.h>

int main(){
    float arr[6];
    float input;
    int cnt = 0;
    while (cnt<6){
        scanf("%f",&input);
        arr[cnt]=input;
        cnt++;
    }
    double sum = 0;
    for(int i = 0; i<cnt;i++){
        sum += arr[i];
    }
    printf("%.1f\n",sum/cnt);
    return 0;
}