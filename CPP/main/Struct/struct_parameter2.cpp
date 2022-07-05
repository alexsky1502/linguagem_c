#include <iostream> // CALL BY ADDRESS aula 19
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void changeLength(struct Rectangle *p, int L) {
    p->length = L;
}

int main(void) {
    struct Rectangle r = {10,5};
    changeLength(&r, 20);
}