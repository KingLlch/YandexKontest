package main

import(
	"fmt"

	)

	var a int
	var bankomat[5] int

	func main() {
	fmt.Scanf("%d", &a)

		bankomat[0] = a / 5000
		a = a - bankomat[0] * 5000

		bankomat[1] = a / 1000
		a = a - bankomat[1] * 1000

		bankomat[2] = a / 500
		a = a - bankomat[2] * 500

		bankomat[3] = a / 200
		a = a - bankomat[3] * 200

		bankomat[4] = a / 100

		fmt.Println(bankomat[0], bankomat[1], bankomat[2], bankomat[3], bankomat[4])
}
