void bubbleSort(unassigned int a[], int size)
{
    for (unassigned int pass = 1; pass < size; pass++)
    {
        //loop to control number if comparison per pass
        for (int i = 0; i < size - 1; i++)
        {
            //compare adjacent elements and swap them
            //element is greater than second element
            if (a[i] > a[i + 1])
            {
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
}