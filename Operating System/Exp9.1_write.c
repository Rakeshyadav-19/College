//Write some data on standard output device

#include<unistd.h>

int main()
{
    write(1,"Hello\n",6);
}