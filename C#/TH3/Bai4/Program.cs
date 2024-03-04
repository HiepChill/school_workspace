using System;

namespace Bai4
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.Write("Nhập chiều dài: ");
                double length = Convert.ToDouble(Console.ReadLine());

                if (length <= 0)
                {
                    throw new Exception("Chiều dài phải lớn hơn 0");
                }

                Console.Write("Nhập chiều rộng: ");
                double width = Convert.ToDouble(Console.ReadLine());

                if (width <= 0)
                {
                    throw new Exception("Chiều rộng phải lớn hơn 0");
                }

                if (length < width)
                {
                    throw new Exception("Chiều dài phải lớn hơn hoặc bằng chiều rộng");
                }

                double area = length * width;

                Console.WriteLine("Diện tích hình chữ nhật: {0}", area);
            }
            catch (FormatException)
            {
                Console.WriteLine("Lỗi: Chiều dài hoặc chiều rộng nhập vào không có định dạng số");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Lỗi: {0}", ex.Message);
            }

            Console.ReadKey();
        }
    }
}
