#include <iostream>
#include <thread>

using namespace std;

void task() {
    int n = 100000;
    while (n != 0) {
        n -= 1;
    }
}

int main() {
    thread thread1(task);
    thread thread2(task);

    thread1.join();
    thread2.join();

    return 0;
}
