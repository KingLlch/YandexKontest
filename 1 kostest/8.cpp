package main

import(
    "fmt"
    )

    var a, b, c int
    var max int

    func main() {
    fmt.Scanf("%d %d %d", &a, &b, &c)
        if (a > b) {
            max = a

        }
        else {
            max = b
        }
    if (max > c) {
        fmt.Println(max)

    }
    else {
        fmt.Println(c)

    }

}
