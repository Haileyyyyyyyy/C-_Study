#include <stdio.h>

/*개수미정의 정수들을 키보드에서 입력받아 스 중 가장 큰 수를 출력하는 프로그램*/

int main(){
    int x,maxval;
    scanf("%d",&maxval); //변수 maxval를 입력받은 수로 초기화
    while(scanf("%d",&x)!=EOF) //EOF(Command+Z)가 나올때까지 입력받음
        if(x>maxval) //x(새로 입력받은 수)>maxval(현재까지중 가장 큰 수)이면
            maxval=x; //maxval을 x(새로 입력받은 수 )로 업데이트
    printf("maximum value = %d\n",maxval); //최종 maxval 을 출력
}

