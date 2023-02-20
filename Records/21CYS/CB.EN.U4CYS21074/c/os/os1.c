#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
    int shmid;
    char buff[100];
    void *shard_mem;
    shmid=shmget((key_t)1263,1024,0666|IPC_CREAT);
    shard_mem=shmat(shmid,NULL,0);
    printf("%p",shard_mem);
    read(0,buff,10);
    strcpy((char *)shard_mem,buff);
    printf("%s",(char*)shard_mem);
    
    
    return 0;
}