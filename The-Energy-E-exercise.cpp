// Sample 1
// Today you decided to go to the gym. You currently have E energy. There are N exercises in the gym. Each of these exercises drains Ai amount of energy from your body.
// You feel tired if your energy reaches 0 or below. Calculate the minimum number of exercises you have to perform such that you become tired. Every unique exercise can only be performed at most 2 times as others also have to use the machines.
// If performing all the exercises does not make you feel tired, return -1.
// Parameters:
// E:: INTEGER
// The first line contains an integer, E, denoting the Energy.
// E:: 1 -> 10^5
// N: INTEGER
// The next line contains an integer, N, denoting the number of exercises.
// N: 1->10^5
// A:: INTEGER ARRAY
// Each line i of the N subsequent lines (where 0 <= i < N ) contains an integer describing the amount of energy drained by ith exercise.
// A:: 1->10^5
// Case#: 1
// Output:
// -1
// E = 1 * 0
// By doing both the exercises 2 times you won't feel tire
// Case#: 3
// Input:
// 2
// 3
// 1
// 5
// 2
// Output:
// 1
// E = 2
// Use 3rd exercise 1 time.
// Hence, total exercise done 1.
include <bits/stdc++.h>
