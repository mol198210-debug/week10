#include <stdio.h>

int main(){
    char arr[26];
    for(int i = 0;i<=25;i++){
        arr[i]='A'+i;
    }
    for(int i = 25;i>=0;i--){
        printf("%c ",arr[i]);
    }
}