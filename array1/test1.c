#include <stdio.h>

int main(){
    char arr[10];
    char input;
    int cnt = 0;
    while (cnt<10){
        scanf(" %c",&input);
        arr[cnt] = input;
        cnt++;
    }
    for(int i = cnt-1; i>=0;i--){
        printf("%c ",arr[i]);
    }
    printf("\n");
    return 0;
}