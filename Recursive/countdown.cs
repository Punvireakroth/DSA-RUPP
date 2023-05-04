using System;

class Program
{
    static void Main(String[] args)
    {
        CountDown(5);
    }

    static void CountDown(int num)
    {
        if (num <= 0)
        {
            Console.WriteLine("All Done");
            return;
        }
        Console.WriteLine(num);
        num--;
        CountDown(num);
    }
}