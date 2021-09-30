
#include <iostream>
using namespace std;

class Binary_search
{
    int size; //Data members.
    int value, high, low, middle;
    int arr[];

public:
    Binary_search(void) //constructor that initializes 0 to low.
    {
        low = 0;
    }
    void getArray(int);  //public function to input the array from user.   Syntax : object.getArray(size);
    void displayArray(); //public function to display the array.           Syntax : object.displayArray();
    int bin_search(int); //public function to search any element from the input array. Syntax : object.bin_search(value_to_be_searched);
    void result(int);    //public function to display result of search .   Syntax : object.result(returned_value_of_bin_search_function);
};
void Binary_search ::getArray(int n)
{
    size = n;
    cout << "Enter the element of array [" << n << "] :\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void Binary_search ::displayArray()
{
    cout << "\nArray is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int Binary_search ::bin_search(int val)
{
    value = val;
    high = size - 1;
    while (low <= high)
    {
        middle = (high + low) / 2;
        if (val == arr[middle])
            return middle;

        if (val > arr[middle])
            low = middle + 1;

        else
            high = middle - 1;
    }
    return -1;
}
void Binary_search ::result(int inp)
{
    if (inp == -1)
    {
        cout << "Value not Found !! ";
    }
    else
        cout << "Value found at index " << inp;
}
int main(void)
{
    Binary_search b1;
    int x;
    b1.getArray(5);
    b1.displayArray();
    cout << "Enter the element you want to search : ";
    cin >> x;
    b1.result(b1.bin_search(x));

    return 0;
}
