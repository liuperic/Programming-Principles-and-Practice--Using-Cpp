// Chapter 17 Drill pt2 #8
//

 /*
  The second part focuses on pointers and their relations to arrays.
  Using print_array() from the last drill:
  
  1. Allocate an int, initialize it to 7, and assign its address to a variable p1.
  2. Print out the value of p1 and of the int it points to.
  3. Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.;
     and assign its address to a variable p2.
  4. Print out the value of p2 and of the array it points to.
  5. Declare an int* called p3 and initialize it with p2.
  6. Assign p1 to p2.
  7. Assign p3 to p2.
  8. Print out the values of p1 and p2 and of what they point to.
 */


#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)       // from ch17 drill pt 1 (unmodified)
{
    os << '{';
    for (int i = 0; i < n; i++) {
        os << a[i];
        if (i != n - 1) os << ", ";
    }
    os << '}' << endl;
}

int main()
{
    int* p1 = new int{7};
    int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
    int* p3 = p2;
    
    p2 = p1;
    p2 = p3;
    
    cout << p1 << endl << *p1 << endl;  // pointing to memory of integer 7
    cout << p2 << endl << *p2 << endl;  // pointing to memory of array of 7 integers
    
    delete p1;
    delete[] p2;
}
