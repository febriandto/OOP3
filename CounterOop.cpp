#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    
    void increment() {
        count++;
    }

    int getCount() {
        return count;
    }
};

int main() {
    Counter myCounter;

    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();
    myCounter.increment();

    // Tampilkan nilai count saat ini
    std::cout << "Current Count: " << myCounter.getCount() << std::endl;

    return 0;
}
