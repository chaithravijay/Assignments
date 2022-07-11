#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;
int main(int argc, char*argv)
{
 int N;
 N = fork();
 if(N%2! = 0)
 {
    for(int i=0;i<100;i++)
     cout<<"odd numbers:"<<endl;
     cout<<"i="<<i<<endl;\
     exit(0);
}
else
{
  if(N%2 ==0){
   sleep(10);
   for(int j=0;j=100;j++)
   cout<<"even numbers:"<<endl;
   cout<<"j="<<j<<endl;
}
}
waitpid(0);
return 0;
}