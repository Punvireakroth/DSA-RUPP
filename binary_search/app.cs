public static int BinarySearchFor1stOccurance(int[] dataArray, int key)
{ 
    int min = 0;
    int max = dataArray.Length - 1;
    
    while(min <= max)
    {
        int mid = (max + min) / 2;
        if(dataArray[mid] == key)
        {
            // Found the key, return the index
            return mid;
        }
        else if(key < dataArray[mid])
        {
            max = mid - 1;
        } 
        else
        {
            min = mid + 1;
        }
    }
    
    // Key not found, return -1
    return -1;
}
