using System;

class Program
{
    static void Main(String[] args)
    {
        int answer = sumRange(4);
        Console.WriteLine(answer);
    }

    static int sumRange(int num)
    {
        if (num == 1) return 1;
        return num + sumRange(num - 1);
    }
}