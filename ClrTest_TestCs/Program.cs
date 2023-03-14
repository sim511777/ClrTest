using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClrTest_TestCs {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine($"ClrTest.Managed.Add(3, 4) : {ClrTest.Managed.Add(3, 4)}");
            Console.Read();
        }
    }
}
