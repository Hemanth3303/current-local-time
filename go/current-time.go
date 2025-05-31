package main

import (
	"fmt"
	"time"
)

func main() {
	current_time := time.Now()

	fmt.Println("24 Hour Format: " + current_time.Format("2006-01-02 15:04:05"))
	fmt.Println("12 Hour Format: " + current_time.Format("2006-01-02 03:04:05 pm"))
}
