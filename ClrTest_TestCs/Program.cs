using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClrTest;
using ClrTest2;

namespace ClrTest_TestCs {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine($"Managed.Add(3, 4) : {Managed.Add(3, 4)}");
            Console.WriteLine($"Managed2.Add(3, 4) : {Managed2.Add(3, 4)}");
            Console.Read();
        }
    }
}
