namespace Bai7 
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Nhap xau ky tu: ");
            string input = Console.ReadLine();

            string[] a = input.Split(' ');
           
            string output = "";
            foreach (string i in a)
            {
                if (i == "") continue;
                output += "\"" + i + "\"" + " ";
             
            }

            Console.WriteLine("Xau sau khi dat dau ngoac kep: " + output);

        }
    }
}