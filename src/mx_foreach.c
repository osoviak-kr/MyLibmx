void mx_foreach(int *arr, int size, void (*f)(int))
{
    if(arr && size > 0 && f)
    {
        for(int i = 0; i < size; i++)
        {
            f(arr[i]);
        }
    }
}
