#include <ucontext.h>
#include <iostream>
#include <unistd.h>

void newContextFun() {
  std::cout << "this is the new context" << std::endl;
}

int main() {
  char stack[10*1204];
  //get current context
  ucontext_t curContext;
  getcontext(&curContext);
  //modify the current context
  ucontext_t newContext = curContext;
  newContext.uc_stack.ss_sp = stack;
  newContext.uc_stack.ss_size = sizeof(stack);
  newContext.uc_stack.ss_flags = 0;

//   newContext.uc_link = &curContext;
    newContext.uc_link = NULL;
  //register the new context
  printf("111111111\n");
  makecontext(&newContext, (void(*)(void))newContextFun, 0);
  printf("22222222\n");
  swapcontext(&curContext, &newContext);
  printf("main\n");
  return 0;
}
