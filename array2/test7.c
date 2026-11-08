#include <stdio.h>

int main(){
    int arr[4][2];
    int sum = 0;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<2;j++){
            scanf("%d ",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    for(int i = 0;i<4;i++){
        int row = arr[i][0]+arr[i][1];
        printf("%d ",row/2);
    }
    printf("\n");
    
    for(int j = 0; j<2;j++){
        int col = arr[0][j]+arr[1][j]+arr[2][j]+arr[3][j];
        printf("%d ",col/4);
    }
    printf("\n");
    printf("%d\n",sum/8);
    return 0;
}