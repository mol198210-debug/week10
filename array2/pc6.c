#include <stdio.h>

int main(){
    int arr[3][3];
    int row[3]={0};
    int col[3]={0};
    int sum = 0;

    for(int i = 0; i< 3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&arr[i][j]);
            row[i] += arr[i][j];
            col[j] += arr[i][j];
            sum += arr[i][j];
        }
    }
    for(int i = 0; i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("%d\n",row[i]);
    }
    for(int j = 0; j<3; j++){
        printf("%d ",col[j]);
    }
    printf("%d\n",sum);

    return 0;
}