using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    internal class TamGiac
    {
        private double canhA;
        private double canhB;
        private double canhC;

        public TamGiac(double a, double b, double c)
        {
            // Kiểm tra tính hợp lệ của ba cạnh tam giác
            if (a + b > c && a + c > b && b + c > a)
            {
                canhA = a;
                canhB = b;
                canhC = c;
            }
            else
            {
                throw new Exception("Không phải ba cạnh của một tam giác");
            }
        }

        // Tính chu vi của tam giác
        public double ChuVi
        {
            get { return canhA + canhB + canhC; }
        }

        // Tính diện tích của tam giác
        public double DienTich
        {
            get
            {
                double p = ChuVi / 2;
                return Math.Sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
            }
        }

        // Kiểm tra loại tam giác (thường, vuông, cân, vuông cân, đều)
        public string KiemTraTamGiac()
        {
            if (canhA == canhB && canhB == canhC)
            {
                return "Tam giác đều";
            }
            else if (canhA == canhB || canhB == canhC || canhA == canhC)
            {
                if (canhA * canhA + canhB * canhB == canhC * canhC || canhB * canhB + canhC * canhC == canhA * canhA || canhA * canhA + canhC * canhC == canhB * canhB)
                {
                    return "Tam giác vuông cân";
                }
                else
                {
                    return "Tam giác cân";
                }
            }
            else if (canhA * canhA + canhB * canhB == canhC * canhC || canhB * canhB + canhC * canhC == canhA * canhA || canhA * canhA + canhC * canhC == canhB * canhB)
            {
                return "Tam giác vuông";
            }
            else
            {
                return "Tam giác thường";
            }
        }
    }
}
