#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h> /* For mode constants */
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

char buff[128]

int main()
{
    int shmd,i;
    shmd = shm_open("/key", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

    ftruncate(shmd, sizeof(int));
    count = (int *)mmap(NULL, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shmd, 0);
    while(buff[i] !='\0')
    {
       i++;
    }
    printf("Length of string %s is %d", buff, i);
    return 0;
}
