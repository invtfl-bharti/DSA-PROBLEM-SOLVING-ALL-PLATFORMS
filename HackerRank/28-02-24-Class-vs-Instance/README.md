# Person Class Challenge

## Description
In this challenge, we implement a `Person` class with instance variables and methods to handle age-related operations. The class constructor assigns an age to the person, ensuring it is not negative. The class also contains methods to increase the age and print a message based on the age of the person.

## Problem Statement
Write a `Person` class with the following specifications:
- Instance variable: `age`
- Constructor: `Person(int initialAge)` - Assigns `initialAge` to `age` after confirming it's not negative. If it's negative, set `age` to 0 and print a message.
- Method: `amIOld()` - Prints a message based on the age of the person.
- Method: `yearPasses()` - Increases the age of the person by one.

## Input Format
Input is handled for you by the provided stub code in the editor. The first line contains an integer, `T` (the number of test cases), and the subsequent lines each contain an integer denoting the age of a `Person` instance.

## Output Format
For each test case, if a valid age is passed to the constructor, print the output as described in the problem statement. If an invalid age (negative) is passed, the constructor message is printed first.

## Sample Input
4
-1
10
16
18

shell
Copy code

## Sample Output
Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.

shell
Copy code

## Explanation
Explanation for the sample output is provided in the problem statement.

## Constraints
- The number of test cases (T): 1 ≤ T ≤ 5
- Age of a person (initialAge): -5 ≤ initialAge ≤ 100

## Implementation
The solution for this problem can be found in the provided Java code.
