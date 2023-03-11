using System;
using System.Security.Cryptography;

namespace RecursiveFibonacci
{
    internal class Program
    {
        static int recursiveFibonacci(int N)
        {
            if (N <= 1)
            {
                return N;
            }
            else
            {
                return recursiveFibonacci(N - 1) + recursiveFibonacci(N - 2);
            }
        }
        static void Main(string[] args)
        {
            int N;
            do
            {
                Console.WriteLine("This program display a list of Fibonacci numbers up to");
                Console.Write("the sequence number you enter (maximum value 20): ");
                N = int.Parse(Console.ReadLine());
            } while (N <= 0 || N > 20);


            Console.WriteLine("The Fibonacci Sequence:");
            int x = 0;
            while (x < N)
            {
                Console.WriteLine("The {0,2}th Fibonacci number is {1,4}", x + 1, recursiveFibonacci(x));
                x++;
            }
            Console.ReadKey();
        }
    }
}
