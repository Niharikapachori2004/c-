
{
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1, nextTerm;
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << a << ", ";
            continue;
        }
        if (i == 2)