#include <iostream>

int main()
{
    int n;

    // Taking user input for the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Loop to iterate through each row
    for (int i = 1; i <= n; ++i)
    {
        // Loop to print asterisks and numbers in each row
        for (int j = 1; j <= i; ++j)
        {
            // Printing asterisks for the first half
            if (j <= i)
                std::cout << "*";

            // Printing numbers for the second half
            if (j < i)
                std::cout << j;

            // Printing numbers in reverse order for the second half
            if (j >= 1 && j < i)
                std::cout << i - j;
        }

        // Move to the next line after completing each row
        std::cout << std::endl;
    }

    return 0;
}
