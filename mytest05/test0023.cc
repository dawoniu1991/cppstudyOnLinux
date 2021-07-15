#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <wait.h>

void  *thread_one(void *args)
{
    printf( "thread_one pid is %lld \n " ,   getpid ());
     printf( "thread_one tid is %lld \n " ,   pthread_self ());
}

void   *thread_two(void *args)
{
     printf( "thread_two pid is %lld \n " ,   getpid ());
     printf( "thread_two tid is %lld \n " ,   pthread_self ());
}

int   main  ( int   argc ,   char   ** argv )
{
     pid_t   pid ;
     pthread_t   tid_one ,   tid_two ;
     if  (( pid   =   fork())  ==   - 1 )  {
         perror( "fork" );
         exit( EXIT_FAILURE );
     }   else   if  ( pid   ==   0 )  {
         pthread_create( &tid_one ,   NULL ,  thread_one ,   NULL );
         pthread_join( tid_one ,   NULL );
     }   else   {
         pthread_create( &tid_two ,   NULL ,  thread_two ,   NULL );
         pthread_join( tid_two ,   NULL );
     }
     int ret=wait( NULL );
      printf("子进程pid=%d\n", ret);
    return 0;
}
