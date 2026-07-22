<div align="center">

# DSA-LC-Weekly_Contests

### LeetCode Weekly Contest solutions in C++ — one folder per contest, optimized after the dust settles.

![C++](https://img.shields.io/badge/C%2B%2B-STL-00599C?logo=cplusplus&logoColor=white)
![LeetCode](https://img.shields.io/badge/LeetCode-Weekly%20Contests-FFA116?logo=leetcode&logoColor=white)
![Last Commit](https://img.shields.io/github/last-commit/harshiljain2911/DSA-LC-Weekly_Contests)

</div>

---

**C++ solutions from LeetCode Weekly Contests**, organized contest by contest.
Each contest gets its own folder, and where a first working approach was later
improved, both versions are kept side by side.

## Repository Highlights

- 🏁 **Consecutive participation** — solutions from five weekly contests in a
  row (504 through 508), with no gaps in the sequence.
- 📅 **Contest-by-contest record** — solutions are organized contest by
  contest, and improvements are preserved where applicable.
- 🔁 **Optimized after solving** — the first accepted approach and an optimal
  rewrite are kept together (`q1.cpp` / `q1_optimal.cpp`).
- 🗂️ **One folder per contest** — descriptive filenames and commit messages
  record exactly which problem each solution answers.

## Purpose

To apply data-structures and algorithms skills under real contest conditions —
in C++ with STL — and keep an honest record of it:

1. Solve LeetCode Weekly Contest problems and preserve the working solutions.
2. Revisit problems after the contest and record the improved approach
   alongside the original.
3. Track participation contest by contest, in sequence.

## Repository Structure

```
DSA-LC-Weekly_Contests/
├── Weekly_contest_504/
│   ├── q1.cpp              ← first accepted approach
│   └── q1_optimal.cpp      ← optimized rewrite of the same problem
├── Weekly_contest_505/
├── ...
└── Weekly_Contest_<N>/     ← latest contest
```

| Naming convention | Meaning |
| :--- | :--- |
| `Weekly_contest_<N>/` | one folder per contest, numbered as on LeetCode |
| `*_optimal` | optimized rewrite kept alongside the first working approach |
| descriptive filenames | each file is named after the contest problem it solves |

## Contest Log

| Contest | Solutions | Problems |
| :--- | :---: | :--- |
| [Weekly Contest 504](Weekly_contest_504) | 2 | Digit Frequency Store — first approach + optimal rewrite |
| [Weekly Contest 505](Weekly_contest_505) | 2 | Sum of Compatible Numbers in Range · Valid Binary Strings With Cost Limit |
| [Weekly Contest 506](Weekly_contest_506) | 1 | Check Good Integers |
| [Weekly Contest 507](Weekly_contest_507) | 2 | Valid Subarrays With Matching Sum Digits I · Shortest Path With At Most K Consecutive Identical Characters |
| [Weekly Contest 508](Weekly_Contest_508) | 1 | Maximum Total Sum of K Selected Elements |

## Complexity Notation Legend

| Notation | Name | Intuition |
| :--- | :--- | :--- |
| O(1) | Constant | same cost regardless of input size |
| O(log n) | Logarithmic | halves the search space each step |
| O(n) | Linear | touches each element once |
| O(n log n) | Linearithmic | efficient sorting, divide & conquer |
| O(n²) | Quadratic | nested loops over the input |
| O(2ⁿ) | Exponential | explores every subset |

Where a problem has multiple solution files, they are ordered by decreasing
complexity — the first-approach file shows the idea, the optimal file the best bound.

## Contest Strategy

1. **Every contest gets a folder** — solved problems are added per contest,
   keeping the sequence visible.
2. **Optimize after the contest** — when a better approach exists, it is added
   alongside the original rather than replacing it.
3. **Commits name the problem** — each commit message records exactly which
   problem it adds.

## Resources

- [LeetCode Contests](https://leetcode.com/contest/) — the weekly contests these solutions come from
- [cppreference](https://en.cppreference.com) — STL containers & algorithms reference
