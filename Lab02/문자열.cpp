#include<stdio.h>
void strsum(char to[],char from1[],char from2[]);
void strmul(char s[],char t[],int n);

int main(){
    char s[100],t[100],u[100];
    
    strmul(t,"abc",2);
    strmul(u,"DE",3);
    strsum(s,t,u);
    printf("출력:%s\n",s);
    
}

void strsum(char to[], char from1[], char from2[]){
    int i,j;
    
    i=0;
    while((to[i]=from1[i])!='\0'){
        ++i;
    }
    j=0;
    while((to[i]=from2[j])!='\0'){
        i++;
        j++;
    }
}


void strmul(char s[],char t[],int n){
    int m,i;
    i=0;
    for(int j=0;j< n;j++){
        m=0;
        while((s[i]=t[m])!='\0'){
            m++;
            i++;

        }
        
        
        
    }
}



