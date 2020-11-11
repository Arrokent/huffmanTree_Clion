#include "charArray.h"

int main() {
    string testmes = "hello world";

    charArray* ca = new charArray(testmes);

    ca->show();
}
