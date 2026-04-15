#include <stdio.h>

int main() {
    int N; //입력될 문자의 개수 N
    scanf("%d", &N);

    char str[100]; //임의로 입력가능한 문자열 개수 지정
    scanf("%s", str); //문자열 입력받기

    int max_lower = 0, count_lower = 0; //max_lower는 연속 소문자 최대 개수, count_lower는 몇개인지 하나씩 늘릴 변수
    int max_digit = 0, count_digit = 0; //max_digit은 연속 숫자 문자의 최대 개수, count_digit은 몇개인지 하나씩 늘릴 변수

    for (int i = 0; i < N; i++) //반복문으로 문자열 내의 첫번재 문자부터 확인하면서 처음에 입력받은 문자 개수를 넘어가지 않는 조건
    {
        if (str[i] >= 'a' && str[i] <= 'z') //문자가 영어 소문자일때
        {
            count_lower++; //영어소문자 개수 1 증가
            count_digit = 0; //숫자가 아니기에 0으로 넣기
            if (count_lower > max_lower) //연속횟수가 최대 문자 개수보다 클때 저장하는게 의미가 있으니 넣어줌
            {
                max_lower = count_lower;
            }
        } 
        else if (str[i] >= '0' && str[i] <= '9') //문자가 숫자 문자일때
        {
            count_digit++; //숫자 문자 개수 1 증가
            count_lower = 0; //영어소문자가 아니기에 0으로 지정
            if (count_digit > max_digit) //연속횟수가 최대 문자 개수보다 커질때 최대개수를 저장해줌
            {
                max_digit = count_digit;
            }
        } 
        else //둘다 해당이 안될 경우 카운트를 모두 0으로 지정
        {
            count_lower = 0;
            count_digit = 0;
        }
    }

    printf("%d\n", max_lower); //연속된 소문자의 최대 개수 출력
    printf("%d\n", max_digit); //연속된 숫자 문자의 최대 개수 출력

    return 0;
}
