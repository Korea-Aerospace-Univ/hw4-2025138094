#include <stdio.h>

int main()
{
    int a, b, count = 0; //정답과 맞출때 들어갈 변수 a,b 선언과 시도횟수를 위한 count 변수 선언과 초기화
    
    scanf("%d", &a); //정답인 숫자를 받아옴

  //반복문을 통해 숫자를 맞출때까지 반복
    do{
        scanf("%d", &b); //정답으로 넣어볼 숫자 받아오기
        count++; //반복되기에 시도횟수를 1씩 더해줌
        
        if(b > a) //정답보다 클때
        {
            printf("%d>?\n", b);
        }
        else if(b < a) //정답보다 작을때
        {
            printf("%d<?\n", b);
        }
        else //정답일때
        {
            printf("%d==?\n", b);
        }
    } while(b != a);
    
    printf("%d", count); //마지막으로 시도횟수 출력

    return 0;
}
