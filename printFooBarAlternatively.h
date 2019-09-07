class FooBar {
private:
    int n;
    std::mutex mu1, mu2;

public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            mu2.lock();
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            mu1.unlock();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            mu1.lock();
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            mu2.unlock();
        }
    }
};