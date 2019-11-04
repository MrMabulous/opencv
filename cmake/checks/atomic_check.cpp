#include <atomic>

static int test()
{
    //std::atomic<long long> x;
    // TODO: ESP32 does not have hardware support for 64bit atomics. Adding software support would be a cleaner solution.
    std::atomic<long> x;
    return x;
}

int main()
{
    return test();
}
