#include<iostream>
using namespace std;

//描述：P1生产者 Q1消费者 R1既是生产者又是消费者。这三者使用一个缓冲区实现消费和生产。用PV操作实现之。

void P(int) {}
void V(int) {}

int empty = 1;
int full = 0;
// int mutex = 1;

void P1() {
    P(empty) {}

}

int main() {

    return 0;
}