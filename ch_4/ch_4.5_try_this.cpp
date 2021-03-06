//  ch 4.5 try this
//  C++


ch_4.5_try_this.cpp

// square function without * operator
// produces squared of numbers 0 through 99

int square(int i)
{
    int s{};
    
    for (int c = 0; c < i; c++)
        s += i;
    return s;
}

int main()
{
    for (int integer = 0; integer < 100; ++integer)
        cout << integer << '\t' << square(integer) << '\n';
}

