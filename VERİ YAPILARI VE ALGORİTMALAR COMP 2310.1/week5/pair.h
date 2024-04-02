#include <iostream>

using namespace std;

template<class K, class V>
class GenericPair {
private:
    K key;
    V value;
public:
    GenericPair(K key, V value) {
        this->key = key;
        this->value = value;
    }
};

