#include<stdio.h>
#include<string.h>
#include <pthread.h>

void* print1(void* data){
    printf("1111111\n");
}

void* print2(void* data){
    printf("2222222\n");
}

void* print3(void* data){
    printf("3333333\n");
}

int main(void){
    pthread_t t,t1,t2;

    pthread_create(&t,0,print1,NULL);
    pthread_create(&t1,0,print2,NULL);
    pthread_create(&t2,0,print3,NULL);

    pthread_join(t,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("\n");
}