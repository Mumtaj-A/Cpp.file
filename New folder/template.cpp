#include <iostream>

template <class T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T f, T s) : first(f), second(s) {}

    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }

    void setFirst(T f) {
        first = f;
    }

    void setSecond(T s) {
        second = s;
    }
};

int main() {
    Pair<int> intPair(10, 20);
    std::cout << "First element: " << intPair.getFirst() << std::endl;
    std::cout << "Second element: " << intPair.getSecond() << std::endl;

    Pair<std::string> strPair("Hello", "World");
    std::cout << "First element: " << strPair.getFirst() << std::endl;
    std::cout << "Second element: " << strPair.getSecond() << std::endl;

    return 0;
}