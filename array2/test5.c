#include <stdio.h>

int main(){
    int arr[4][3];
    int sum = 0;
    for(int i = 0;i<4;i++){
        int row = 0;
        for(int j = 0;j<3;j++){
            scanf("%d ",&arr[i][j]);
            row += arr[i][j];
            sum += arr[i][j];
        }
        printf("%d\n",row);
    }
    printf("%d\n",sum);
}