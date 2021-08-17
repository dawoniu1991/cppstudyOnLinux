#include <iostream>
#include <stdarg.h>

//void funtest(const char *msg,...){
void funtest(int msg,...){
  va_list valist;
  //int csgs=atoi(msg);
  int csgs=msg;
  va_start(valist,msg);
  int paramcout=0;
  while(paramcout<csgs){
  char *p;
  p=va_arg(valist,char *);
  printf("===%d~~~~~~~~~%s\n",paramcout,p);
  paramcout++;
  }
  va_end(valist);
}

int main(){

  funtest(3,"aapp","bbtt","ccnn");
  return 0;
}
