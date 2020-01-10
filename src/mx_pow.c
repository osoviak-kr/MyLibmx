double mx_pow(double n, unsigned int pow)
{
    double res = 1;

    if (pow == 0)
    {
        return res;
    }
    while (pow--)
    {
        res *= n;
    }
    return res;
}
