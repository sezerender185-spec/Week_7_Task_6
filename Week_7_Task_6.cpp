
#include <iostream>
bool compare(int x, int y) {   
        return x<y;
}
int main()
{
    int a = 10; int b(0);

    bool(*ptr)(int, int);
    ptr = &compare;

    bool result= compare(a, b);
    std::cout << result << " Zero is false, One is true!";
    return 0;
}

