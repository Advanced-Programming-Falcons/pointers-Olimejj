#include <iostream>

using namespace std;

int main(void){
    int size = 0;
    cout << "enter the size of the array: ";
    cin >> size;
    int* array = new int[size];

    //fills array with values 2xindex till size
    for(int i = 0; i < size; i++){
        array[i] = i * 2;
    }
    int* temp_array = array;

    //prints out all the values in the array
    for(int i = 0; i< size; i++){
        cout << *temp_array << endl;
        temp_array++;
    }

    temp_array = array;
    for(int i = 0; i < size; i++){
        *temp_array = *temp_array + 5;
        cout << *temp_array << endl;
        temp_array++;
    }
    cout << endl;
    int temp_int1 = *(temp_array - 1);
    temp_array = array;
    int temp_int2 = *temp_array;
    for(int i = 0; i < size; i++){
        //current location saved in temp2
        temp_int2 = *temp_array;

        // current location swapped with temp
        *temp_array = temp_int1;

        // set temp = to temp2
        temp_int1 = temp_int2;
        temp_array++;
        cout << temp_int1 << endl;
    }
    cout << endl;
    for(int* ptr = array; ptr < array+size; ptr++){
        cout << *ptr << endl;
    }

    cout << "end of program" << endl;

    delete[] array;


    return 0;
}
