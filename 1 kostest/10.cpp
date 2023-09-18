package main

import(
    "fmt"
    )

    var a, b, c string

    func main() {
    fmt.Scanf("%s %s %s", &a, &b, &c)
        if a == "Да"{
            if b == "Да"{
                if c == "Да"{
                    fmt.Println("Утка")
                }
                else {
                    fmt.Println("Пингвин")
                }
            }
            else {
                if c == "Да"{
                    fmt.Println("Плезиозавры")
                }
                else {
                    fmt.Println("Дельфин")
                }
            }

        }
        else {
            if b == "Да"{
                if c == "Да"{
                    fmt.Println("Страус")
                }
                else {
                    fmt.Println("Курица")
                }
            }
            else {
                if c == "Да"{
                    fmt.Println("Жираф")
                }
                else {
                    fmt.Println("Кот")
                }
            }

        }
}
