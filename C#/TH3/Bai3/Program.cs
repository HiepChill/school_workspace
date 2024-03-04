using System;

namespace ExceptionHandling
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.Write("Nhập số a: ");
                int a = Convert.ToInt32(Console.ReadLine());

                Console.Write("Nhập số b: ");
                int b = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("{0} + {1} = {2}", a, b, a + b);
                Console.WriteLine("{0} - {1} = {2}", a, b, a - b);
                Console.WriteLine("{0} * {1} = {2}", a, b, a * b);

                if (b == 0)
                {
                    throw new DivideByZeroException("Số b không thể bằng 0");
                }

                Console.WriteLine("{0} / {1} = {2}", a, b, (double)a / b);
            }
            catch (FormatException)
            {
                Console.WriteLine("Lỗi: Dữ liệu nhập vào không hợp lệ!");
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine("Lỗi: " + e.Message);
            }
            catch (Exception e)
            {
                Console.WriteLine("Lỗi: " + e.Message);
            }

            Console.ReadKey();
        }
    }
}
