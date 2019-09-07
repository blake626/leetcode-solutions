class Foo {
public:
    
    std::mutex mu1, mu2;
    
    Foo() {
        // lock the mutexes
        mu1.lock();
        mu2.lock();
    }

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        // unlock this resource
        mu1.unlock();
    }

    void second(function<void()> printSecond) {
        // lock it and display printFirst
        mu1.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        // unlock resources 
        mu1.unlock();
        mu2.unlock();
    }

    void third(function<void()> printThird) {
        // lock it and display printSecond
        mu2.lock();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};