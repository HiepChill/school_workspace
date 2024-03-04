namespace Bai2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a , b;
            do
            {
                Console.WriteLine("Nhap 2 so nguyen: ");
                a = Convert.ToInt32(Console.ReadLine());
                b = Convert.ToInt32(Console.ReadLine());
                if (a > 10 && b > 10)
                {
                    Console.WriteLine("Ca 2 so khong duoc lon hon 10! Vui long nhap lai!");
                }
            }
            while (a > 10 && b > 10);

            Console.WriteLine(a);
            Console.WriteLine(b); 
        }
    }
}