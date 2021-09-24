//(1)다음 프로그램을 실행시키고 결과를 관찰하라.

#include <stdio.h>
#include <stdio.h>
#define FIRSTCHAR '0'
#define LASTCHAR '9'

int main() {
    int ch;
    for (ch = FIRSTCHAR; ch <= LASTCHAR; ch = ch + 1)
        printf("%02X (%d) : '%c'\n", ch, ch, ch);
    
}

