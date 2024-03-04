namespace Bai1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.Write("Nhập cạnh a của tam giác: ");
                double a = Convert.ToDouble(Console.ReadLine());

                Console.Write("Nhập cạnh b của tam giác: ");
                double b = Convert.ToDouble(Console.ReadLine());

                Console.Write("Nhập cạnh c của tam giác: ");
                double c = Convert.ToDouble(Console.ReadLine());

                TamGiac tamgiac = new TamGiac(a, b, c);

                Console.WriteLine("Chu vi của tam giác là: " + tamgiac.ChuVi);
                Console.WriteLine("Diện tích của tam giác là: " + tamgiac.DienTich);
                Console.WriteLine("Loại tam giác là: " + tamgiac.KiemTraTamGiac());
            }

            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }

            Console.ReadLine();
        }
    }
}