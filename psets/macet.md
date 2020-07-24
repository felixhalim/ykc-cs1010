# Macet

Jakarta, a city that never sleeps, is often considered as one of the most crowded city in Indonesia. Every Jakartan sees _macet_ (congestion) daily and they are indeed sick of it.

Manies, as newly-elected governor looked at this problem and decided to solve this problem. Solution that he proposed is the implementation of [odd-even rationing](https://en.wikipedia.org/wiki/Odd%E2%80%93even_rationing) in various vital places. The rule itself is simple but a lot of people doesn't know that zero is considered even.

To solve this issue, he ordered a slight change to the rule which instead of checking the last digit on the plate, they are now checking the last non zero digit on the plate.

Your job is to create a simple program which determine if given plate is odd or even!

## Input

4 digit integer

## Output

String which says "Odd" or "Even"

| Sample Input | Sample Output |
| ------------ | ------------- |
| `6665`       | "Odd"         |
| `9680`       | "Even"        |
| `4210`       | "Odd"         |
| `1981`       | "Even"        |
