package main

import(
    "fmt"
    )

    var a, b int
    func main() {
    fmt.Scanf("%d %d ", &a, &b)

        print("    |")

        for i: = 1; i <= b; i++ {
            print("   ", i)
        }
    println("")
        print("   ")
        for i: = 1; i <= b * 4 + 2; i++ {
            print("-")
        }
    println("")


        for i: = 1; i <= a; i++ {
            print("   ")
                print(i)
                print("|")

                for j: = 1; j <= b; j++ {
                    if i* j > 9{
                        print("  ", i* j)
                    }
                    else {

                        print("   ", i * j)
                    }

                }
            println("")
        }


}
