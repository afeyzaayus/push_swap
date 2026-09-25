# push_swap

`push_swap` is a 42 project that sorts given numbers using **only two stacks (A and B)** and a limited set of operations.  
The program outputs the sorting steps as a list of operations to standard output.

## Project Overview

- All numbers start in `stack A`.
- `stack B` is used as an auxiliary stack.
- The goal is to sort `stack A` in ascending order with as few moves as possible.

## Supported Operations

Main operations used in this implementation:

- `sa` : swaps the first two elements of stack A.
- `pa` : pushes the top element from stack B to stack A.
- `pb` : pushes the top element from stack A to stack B.
- `ra` : rotates stack A upward (first element goes to the end).
- `rra`: reverse-rotates stack A (last element goes to the front).

## Algorithm Approach

- **Small datasets (<= 70 elements):**  
  A dedicated strategy is used (`sort_small` / `sort_three`).
- **Large datasets (> 70 elements):**  
  Order tags are assigned to elements, then a bitwise **radix sort** approach is applied.

## Build

```bash
make
```

This command builds the project together with `libft` and creates the `push_swap` binary.

## Usage

```bash
./push_swap 3 2 1
```

or

```bash
./push_swap "3 2 1"
```

The output is a line-by-line list of operations:

```text
sa
rra
```

## Invalid Input Cases

The program prints `Error` in the following cases:

- Invalid number format
- Value out of `int` range
- Duplicate numbers
