#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h> /* For mode constants */
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>



int main()
{
    int shmd;
    shmd = shm_open("/key", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);  //Always remeber "/" before key if you forget that program will not work
   //shmd is shared memory descriptor

    ftruncate(shmd, sizeof(int)); //as memory is fixed
    
    count = (int *)mmap(NULL, sizeof(int), PROT_READ, MAP_SHARED, shmd, 0);
    while (1)
    {
       = grep ^M  /usr/share/dict/words
    }
    return 0;
}
