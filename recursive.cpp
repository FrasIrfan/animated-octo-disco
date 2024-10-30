#include <iostream>
using namespace std;

void makeParathas(int n)
{
    // Base case to stop the execution
    if (n == 0)
    {
        cout << "All parathas are done!" << endl;
        return;
    }

    // Recursive case to make a paratha and then call the function to make the next one
    cout << "Making paratha number " << n << endl;
    makeParathas(n - 1);
}

int main()
{
    int totalParathas = 5;
    makeParathas(totalParathas);
    return 0;
}