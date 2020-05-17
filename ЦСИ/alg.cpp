int  cbinsearch ( int * arr, int size, int value)
{
    int qty = 0 ;
    int left = 0 , right = size - 1 ;
    в то время как (влево <= вправо)
    {
        int mid = (вправо + влево) / 2 ;
        if (arr [mid] <значение) left = mid + 1 ;
        иначе  if (arr [mid]> value) right = mid - 1 ;
        еще
        {
            кол-во ++;
            for ( int j = mid + 1 ; j <size && arr [j] == value; j ++, qty ++);
            for ( int j = mid - 1 ; j> = 0 && arr [j] == value; j--, qty ++);
            перерыв ;
        }
    }
    вернуть кол-во;
}
