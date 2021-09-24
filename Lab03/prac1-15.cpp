//
//  prac1-15.cpp
//  Lab03
//
//  Created by 김다연 on 2021/09/24.
//

#include<stdio.h>

/*온도변환코드
//print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300,
//floating-point version
int main() {
     float fahr, celsius;
     int     lower, upper, step;
     lower = 0;
     upper = 300;
     step = 20;
     fahr = lower;
     while (fahr <= upper) {
celsius = (5.0 / 9.0) * (fahr - 32);
printf("%3.0f %6.1f\n", fahr, celsius);
          fahr = fahr + step;
      }
 }
 */

//문제: f2c()함수 만들어서 호출하기

float f2c(float fahr){
    return (5.0/9.0)*(fahr-32);
}

int main(){
    float fahr, celsius;
    int lower, upper, step;
    
    lower=0;
    upper=300;
    step=20;
    
    fahr=lower;
    while(fahr<=upper){
        celsius = f2c(fahr);
        printf("%3.0f %6.1f\n", fahr ,celsius);
        fahr=fahr+step;
    }
}


