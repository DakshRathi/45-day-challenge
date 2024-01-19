void sortZeroesAndOne(int input[], int size)
{

    int start = 0, end = size - 1;
    while (start < end)
    {
        if (!input[start]) start++; // Executes if value at start is 0
        else if (input[end]) end--; // Executes if value at end is 1
        else swap(input[start++], input[end--]);
    }
}