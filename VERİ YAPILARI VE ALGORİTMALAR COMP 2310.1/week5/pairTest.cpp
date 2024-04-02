#include "pair.h"

#define prettyPrint(value) (value?"Passed":"Failed")


GenericPair<string, int> *findPair(GenericPair<string, int> *pairs, string key) {

}

int main() {
    GenericPair<string, int> *pairs[3];
    string keys[] = {"Ata", "Berk", "Mehmet"};
    int values[] = {28, 29, 30};
    for (int i = 0; i < 3; i++) {
        pairs[i] = new GenericPair<string, int>(keys[i], values[i]);
    }
    cout << "Test case 1 : " << prettyPrint(pairs[0]->getValue() == 28) << endl;
    cout << "Test case 2 : " << prettyPrint(pairs[0]->getKey() == "Ata") << endl;
    pairs[0]->setKey("Ayşe");
    pairs[0]->setValue(30);
    cout << "Test case 3 : " << prettyPrint(pairs[0]->getValue() == 30) << endl;
    cout << "Test case 4 : " << prettyPrint(pairs[0]->getKey() == "Ayşe") << endl;

    return 0;
}