using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai22
{
    internal class HoanDoi
    {
        public void HoanVi(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
    }
}
