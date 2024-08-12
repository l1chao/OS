#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct semaphore {
    int value;
    struct pcb* list;
}semaphore;

void P(semaphore s) {
    s.value--;
    if (s.value < 0) {
        asleep(s.list);//阻塞进程
    }
}

void V(semaphore s) {
    s.value++;
    if (s.value <= 0) { //s.value在++之后 <=0，表示在s.value++之前有s.value<=-1，这意味着V操作释放的那个打印机，现在可以awake一个阻塞的进程。
        awake(s.list);//分配打印机
    }
}

void V(semaphore s) {
    s.value++;
    if (s.value <= 0) {//若还有阻塞进程，则唤醒之。
        awake(s.list);
    }
}

typedef struct semaphore {
    int value;
    struct pcb* list;
}semaphore;

void P(semaphore s) {
    s.value--;
    if (s.value < 0) {
        asleep(s.list);
    }
}

void V(semaphore s) {
    s.value++;
    if (s.value <= 0) {
        awake(s.list);
    }
}
//上面的V操作，在过程中的s.value==0和结束后的s.value==0含义不一样，这意味着在过程中，不同进度的同一变量代表的意义不同。

int main() {


    return 0;
}
