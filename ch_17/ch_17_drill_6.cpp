// Chapter 17 Drill 6
//

 /*
  This drill has two parts. The first exercises/builds your
  understanding of free-store allocated arrays and contrasts arrays
  with vectors:
  
  1. Allocate an array of ten ints on the free store using new.
  2. Print the values of the ten ints to cout.
  3. Deallocate the array (using delete[]).
  4. Write a function print_array10(ostream& os, int* a) that prints
     out the values of a (assumed to have ten elements) to os.
  5. Allocate an array of ten ints on the free store;
     initialize it with the values 100, 101, 102, etc.; and print out its values.
  6. Allocate an array of 11 ints on the free store; initialize it with the values
     100, 101, 102, etc.; and print out its values.
 */


#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a)
{
    os << '{';
    for (int i = 0; i < 11; i++) {
        os << a[i];
        if (i != 10) os << ", ";
    }
    os << '}' << endl;
}

int main()
{
    int* ptr = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    print_array(cout, ptr);
    
    delete[] ptr;
}
