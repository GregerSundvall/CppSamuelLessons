
#include <iostream>
#include <bitset>

using namespace std;


enum settings {
    PRINT_JSON = 0b1,
    PRINT_UGLY = 0b10,
    INFINITE_LIVES = 0b100
};

void doSomething(int options){
    if (options & PRINT_JSON){
        //do something
        // instead of a bunch of bools.
    }
}


int main(int argc, char* argv[])
{
    //int x = 0xFA; // hexadecimal
    int y = 0b110101011; //binary
    y = y << 3;
    cout << bitset<8>(y) << endl;
    cout << (int)y << endl;

    char x = 0b0;
    for (unsigned char i=0 ; i<255 ; i++){
        cout << bitset<8>(x) << " "<< static_cast<int>(i) << " " << hex << (x) << endl;
    }

    int z = 31 | 100; // OR.  Sets bit (to 1) where any of them is 1
    z = 31 & 100; // AND. Sets bit where both have 1 in the position.
    z = 31 ^ 100; // XOR. Sets bit where only one of them has a 1.
    z = ~ 100; // NOT. Flips bit.
    z <<= 4;
    cout << bitset<8>(z) << endl;


    const int bit_pos_1 = 0b1;
    const int bit_pos_2 = 0b10;
    const int bit_pos_3 = 0b100;
    const int bit_pos_4 = 0b1000;
    int yy = 0b11100001;
    yy |= bit_pos_1 | bit_pos_2 | bit_pos_3;

    if (y & bit_pos_4){
        cout << "Bit 4 is on" << endl;
    } else{
        cout << "Bit 4 is off" << endl;

    }


    int* pointer = new int[100]{};
    // Do stuff
    delete[] pointer;
    pointer = nullptr;

    int a = 100; // name always dereferences and returns the value on the memory address.

    int* pointerX = &a; // Stores and returns a memory address.
    *pointerX = 200;

    int& b = a;
    int* ptr = &a;

    std::cout << std::endl;
    return 0;
}
