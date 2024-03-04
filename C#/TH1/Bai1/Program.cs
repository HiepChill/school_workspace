using System;

namespace Bai1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Nhap vao 4 gia tri so nguyen!");
            int a, b, c , d;
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine()); 
            c = Convert.ToInt32(Console.ReadLine()); 
            d = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Tich cua 4 so la: " + a * b * c * d);
        }
    }
}