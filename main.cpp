
#include <iostream>


void incrementWithAlias(int& number)
{
    number++;
}

void incrementWithPointer(int* number)
{
    (*number) ++;
    *number += 1;
}

int incrementWithReturn(int number)
{
    number++;
    return number;
}

void swap(int items[])
{
    std::cout << "Size in func: "<< sizeof(items) << std::endl;
    // function only gets the pointer to the array's first int!
    // for loop on array won't work, for example.
}

void swapWithLength(int items[], size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << items[i] << " ";
    }

    int temp = items[0];
    items[0] = items[length -1];
    items[length -1] = temp;
}

void swapWithReference(int(&items)[5])
{

}

// void swapWithTemplate(T(&items)[S]) //Not working in rider?
// {
//     T temp = item[0];
//     items[0] = items[S - 1];
//     items[S - 1] = temp;
// }

int main(int argc, char* argv[])
{
    int num = 15;
    incrementWithAlias(num);
    incrementWithPointer(&num);
    num = incrementWithReturn(num);

    int numbers[]{1,2,3,4,5};
    std::cout << "Size in main: "<< sizeof(numbers) << std::endl;
    swap(numbers);
    swapWithLength(numbers, std::size(numbers));
    for (size_t i = 0; i < std::size(numbers); i++)
    {
        std::cout << numbers[i] << " ";
    }
    int* numbersPointer = numbers;
    numbersPointer[3] = 123; // will set the value 3 steps after the first.
    // Hopefully this is still inside array...

    int(&ref)[5] = numbers; //Will be same and updated with numbers var.


    char str[]("hello");
    std::cout << sizeof(str) << std::endl;
    std::cout << str << std::endl;
    str[0] = 'h';


    int x = 10;
    int* pointer = &x;
    std::cout << "Value of x: " << *pointer << std::endl;
    std::cout << "Address of x: " << pointer << std::endl;

    int& xAlias = x;

    int arr[5];
    int arrTwo[5]{};
    int arrThree[5]{1,2,3,4,5};
    int arrFour[]{1,2,3,4,5};
    int arrFive[10]{1,2,3,4,5}; // The rest will be filled with zeroes.

    int sizeOfArr = sizeof(arr); //Returns size in memory (bytes * 10??)
    int LengthOfArr = sizeof(arr) /  sizeof(int); // Returns length
    size_t LengthOfArrAgain = sizeof(arr) /  sizeof(int); // safer ?
    size_t lengthAgain = std::size(arr); // newer, may not work.

    for (size_t i {}; i < LengthOfArrAgain; ++i)
    {
        std::cout << arr[i] << " ";
    }

    for (int value : arr)
    {
        std::cout << value << " ";
    }

    for (size_t i {}; i < std::size(arr); ++i)
    {
        std::cout << arr[i] << " ";
    }


    std::cout << std::endl;
    return 0;
}
