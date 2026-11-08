#include <stdio.h>

int main(){
    int arr[5][4];
    int row[4]={0};
    for(int i = 0; i<5;i++){
        int sum = 0;
        int cnt = 0;
        for(int j = 0;j<4;j++){
            scanf("%d",&arr[i][j]);
            row[i] += arr[i][j];
            sum += arr[i][j];
            cnt++;
        }
        printf("%d %.1f\n",sum,(double)sum/cnt);
    }
    return 0;
}