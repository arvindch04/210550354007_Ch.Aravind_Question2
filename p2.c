#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h> /* For mode constants */
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int *count;

int main()
{
    int shmd;
    shmd = shm_open("/key", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

    ftruncate(shmd, sizeof(int));
    count = (int *)mmap(NULL, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shmd, 0);
    while (1)
    {
        printf("Count: %d\n", *count);  //observe that there is no num, we are just reading in p2 an writing in p1
        sleep(1);
    }
    return 0;
}