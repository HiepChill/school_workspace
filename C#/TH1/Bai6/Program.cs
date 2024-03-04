namespace Bai6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Nhap xau ky tu: ");
            string input = Console.ReadLine();
            
            string output = input.Replace("no", "yes");

            Console.WriteLine("Xau ky tu sau khi thay the: " + output);

            Console.ReadKey();
        }
    }
}