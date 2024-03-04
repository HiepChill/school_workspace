namespace Bai5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Nhap xau ki tu: ");
            string input = Console.ReadLine ();

            char[] a = input.ToArray();

            Array.Reverse(a);

            string output = new string(a);

            Console.WriteLine("Xau sau khi dao: " + output);
        }
    }      
}