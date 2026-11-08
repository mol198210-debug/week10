#include <stdio.h>
#include <ctype.h>

int main(){
    char ch ='N';
    printf("문자 : %c\n",ch); 

    printf("알파벳 여부 : %s\n",isalpha(ch)?"예":"아니요"); //알파벳인가?
    
    printf("대문자 여부 : %s\n",isupper(ch)?"예":"아니요"); //대문자인가?
    
    printf("소문자 여부 : %s\n",islower(ch)?"예":"아니요"); //소문자인가?
    
    printf("숫자 여부 : %s\n",isdigit(ch)?"예":"아니요"); //숫자인가?
    
    printf("알파벳 또는 숫자 여부 : %s\n",isalnum(ch)?"예":"아니요"); //알파벳 또는 숫자인가?
    
    printf("16진수 숫자 여부 : %s\n",isxdigit(ch)?"예":"아니요"); //16진수인가?
    
    printf("구두점 문자 여부 : %s\n",ispunct(ch)?"예":"아니요"); //구두점 문자인가?
    
    printf("인쇄 가능 문자 여부 : %s\n",isprint(ch)?"예":"아니요"); //인쇄 가능 문자인가?
    
    printf("제어 문자 여부 : %s\n",iscntrl(ch)?"예":"아니요"); //제어 문제인가?
    
    printf("아스키 문자 여부 : %s\n",isascii(ch)?"예":"아니요"); //아스키 문자인가?

    return 0;
}