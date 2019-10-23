/*How to install on ubuntu: sudo apt install golang-go
* How to compile: go build helloWorld.go
* How to run: ./helloWorld.go
* How to just run: go run helloWorld.go
*/
package main

import "fmt"

func main() {
	fmt.Println("Hello World")
	//values
	fmt.Println("go" + "lang")
	fmt.Println("1+1=", 1+1)
	fmt.Println("7.0/3.0=", 7.0/3.0)
	fmt.Println(true && false)
	fmt.Println(true || false)
	fmt.Println(!true)

	//variables
	str :="Marcos"
	fmt.Println(str)

	var str2 string = "Dalte";
	fmt.Println(str2)
}

