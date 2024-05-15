#include <iostream>

using namespace std;

int main() {

    int x, y;

    for(x = 0, y = 1; x <= 10; x++, y+=2){
        cout << x << " - "<< y <<  endl;
    }

    return 0;
}
////////////

#include <iostream>

using namespace std;

int main() {

    int x, y, z;

    for(x = 0, y = 1, z = 0; x <= 10; x++, y+=2, z+=2){
        cout << x << " - ";
        cout << y << " - ";
        cout << z << endl;
    }

    return 0;
}
