namespace Bai2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Nhập số có 7 chữ số: ");

            try
            {
                int number = Convert.ToInt32(Console.ReadLine());

                if (number < 1000000 || number > 9999999)
                {
                    throw new Exception("Số nhập không đúng định dạng 7 chữ số!");
                }

                Console.WriteLine("Số đã nhập: {0}", number);
            }
            catch (FormatException)
            {
                Console.WriteLine("Lỗi: Không phải số nguyên!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Lỗi: {0}", ex.Message);
            }

            Console.ReadLine();
        }
    }
    
}