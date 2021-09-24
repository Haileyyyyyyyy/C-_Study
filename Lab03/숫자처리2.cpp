//
//  숫자처리2.cpp
//  Lab03
//
//  Created by 김다연 on 2021/09/24.
//

#include <stdio.h>

int main(){
    int prime[1000];
    int p,n,i;
    
    prime[0]=prime[1]=0;
    for(p=2;p<1000;p++){
        prime[p]=1;
        
    }
    for(p=2;p*p<1000;p++){
        if (prime[p]==1){
            for(n=2;n*p<1000;n++){
                prime[n*p]=0;
                
            }
        }
    }
   

    i=0;
    for(p=0;p<1000;p++){
        if(prime[p]==1){
            printf("%3d\t",p);
            i++;
            if(i==15){
                printf("\n");
                i=0;
            }
        }
        
                
            }
           
}
