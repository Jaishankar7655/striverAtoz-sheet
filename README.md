# 🧠 DSA Journey — C++ Problem Solving

This repository documents my ongoing journey learning Data Structures and Algorithms in C++ — through implementation, debugging, optimization, and repeated problem-solving. It follows the Striver A2Z DSA sheet structure, starting with array fundamentals.

All statistics on this page are generated directly from [`data/dsa_progress.csv`](data/dsa_progress.csv) by [`scripts/analyze_dsa.py`](scripts/analyze_dsa.py) — nothing below is hand-typed or estimated.

## 📊 Progress Dashboard

| Metric             | Count |
| ------------------- | ----: |
| Unique Problems     |    25 |
| Total Code Attempts |    36 |
| Solved              |    19 |
| Attempted (buggy)   |     4 |
| In Progress         |     1 |
| Optimization Needed |     1 |
| Topics Covered      |     6 |
| Patterns Practiced  |    23 |

![DSA Overview](assets/charts/01_overview.png)

## ✅ Reality Check

This repository contains both successful solutions and failed attempts, and this README does not paper over that. Of the 25 unique problems tracked:

- **19 are solved** with logic traced and verified by hand (e.g. Next Permutation, Two Sum, Container With Most Water, First Missing Positive).
- **4 are attempted but currently buggy** — for example, `smallest-element.cpp` has an off-by-one loop bound, and `longest-consecutive.cpp` has a condition (`i == i + 1`) that can never be true, so the function never actually finds a consecutive streak.
- **1 needs optimization** — Maximum Subarray Sum has a working brute-force version, but the file meant to hold Kadane's Algorithm doesn't implement Kadane's logic (no reset-on-negative), so it doesn't actually give the max subarray sum yet.
- **1 is still in progress** — Sort Colors / Dutch National Flag has no working attempt yet: one file (`dutch-nation-flag.cpp`) doesn't even compile (duplicate variable declaration, a reference to an undefined variable), and the other has two DNF approaches sitting commented-out and untested.

Failed and incomplete implementations are intentionally kept in the repo rather than deleted, because debugging, spotting edge cases, and rewriting inefficient approaches are part of the actual learning process — not just the clean final answers.

A few files also have **misleading names relative to what they actually do** (flagged individually in the tracker table below), most likely from copy-pasting a previous file as a starting point. These are naming issues, not logic issues, and are called out rather than silently corrected.

## 📚 Topics Covered

- Arrays — 17
- Arrays / Hashing — 4
- Arrays / Math — 1
- Arrays / Bit Manipulation — 1
- Arrays / Two Pointers — 1
- Arrays / DP — 1

![Topic Distribution](assets/charts/02_topic_distribution.png)

## 📈 Status Breakdown

![Status Distribution](assets/charts/03_status_distribution.png)

## 🎚️ Difficulty Breakdown

Easy: 16 · Medium: 7 · Hard: 2

![Difficulty Distribution](assets/charts/04_difficulty_distribution.png)

## 🔁 Patterns Practiced

| Pattern | Problems |
| --- | ---: |
| Two Pointers | 5 |
| Linear Scan | 3 |
| Brute Force | 2 |
| Set | 2 |
| Hashing / Hash Map | 2 |
| Boyer-Moore Voting | 1 |
| Kadane's Algorithm | 1 |
| XOR | 1 |
| Reversal Algorithm | 1 |
| Stable Partition | 1 |
| Pivot Search + Suffix Reversal | 1 |
| Three-Way Partitioning | 1 |
| Sorting-based Scan | 1 |
| One-Pass Greedy | 1 |
| Sum Formula | 1 |
| ...and 7 more single-occurrence patterns | — |

![Pattern Distribution](assets/charts/05_pattern_distribution.png)

## 🔄 Attempts vs. Unique Problems

25 unique problems produced 36 total coding attempts — meaning roughly 44% of problems were revisited at least once (bug fix, brute-force → optimal, or a second independent attempt). This is not inflation; it's shown explicitly so attempt count is never confused with solved count.

![Attempts vs Unique Problems](assets/charts/06_attempts_vs_solved.png)

## ⏱️ Progress Timeline

Progress timeline unavailable because reliable historical dates were not found. The repository's Git history only contains 7 commits spanning 3 distinct dates (2026-07-22, 2026-07-25, 2026-08-08), which isn't enough to build a meaningful monthly trend without guessing.

## 🔍 What the Data Shows

- **Arrays dominate the practice so far** (17 of 25 problems), with array + hashing combinations (union, duplicates, longest consecutive) forming the next-largest group — consistent with this being the start of the A2Z sheet.
- **Two Pointers is the most-practiced pattern** (5 occurrences) — rotation, reversal, union, and container-with-water problems all lean on it, and the two-pointer union attempt in particular shows it's still being debugged (see Reality Check).
- **Repeated attempts cluster around genuinely tricky logic**, not random problems: rotation-by-K (reversal boundaries), majority element (Boyer-Moore's return + verification step), and Sort Colors/DNF (3-way partition invariants) are exactly the kind of problems where a first pass commonly has an off-by-one or missing step — the data backs that up rather than contradicting it.
- **Hard-difficulty problems (First Missing Positive, Longest Consecutive Sequence) are a 50/50 split** — one solved cleanly, one still buggy — suggesting hashing/in-place tricks at Hard level are the current growth edge, not Medium-level two-pointer work which is mostly solved.
- There isn't yet enough data to say anything reliable about non-array topics (strings, linked lists, trees, DP, graphs) — they simply haven't been attempted in this repository yet.

## 🎯 Current Focus

Based on the most recent commit (2026-08-08) and the newest files in the repo:

- Array edge cases and off-by-one loop bounds
- Hashing-based array problems (duplicates, longest consecutive sequence)
- Two-pointer correctness (container with water, union of arrays)
- Fixing broken in-progress attempts (Sort Colors / DNF) rather than starting new topics

## 🚀 Next Targets

Realistic next steps based on gaps in the current dataset — not claims of completion:

1. Finish Sort Colors / Dutch National Flag (currently 2 commented approaches + 1 non-compiling attempt, none working)
2. Fix the 4 currently-buggy "Attempted" problems (Smallest Element, Majority Element, Reverse Array, Longest Consecutive Sequence)
3. Implement a correct version of Kadane's Algorithm (the optimized file doesn't currently do what its name says)
4. Move beyond Arrays into Strings and Linked Lists, per the A2Z sheet order
5. Start Binary Search and Sliding Window, which don't appear anywhere in the repo yet

## 🛠️ Technologies Used

- C++ (STL: `vector`, `set`, `map`, `unordered_map`, `pair`)
- VS Code
- Git / GitHub
- Python, Pandas, Matplotlib (for the analytics in this README)

## 📁 Repository Structure

```
striverAtoz-sheet/
├── 01-array-basics/
├── 02-array-rotation-and-reversal/
├── 03-searching-sorting-and-math/
├── 04-vectors-and-stl/
├── 05-two-pointers-and-subarrays/
├── data/
│   ├── dsa_progress.csv          # source of truth for every stat on this page
│   └── stl_practice_files.csv    # STL/language demos, excluded from DSA stats
├── scripts/
│   └── analyze_dsa.py            # regenerates all charts from the CSV
├── assets/
│   └── charts/                   # 6 generated charts, embedded above
├── *.cpp                         # root-level problems added most recently
└── README.md
```

## 📋 Problem Tracker

| # | Problem | Topic | Pattern | Difficulty | Status | Attempts |
| - | ------- | ----- | ------- | ---------- | ------ | -------- |
| P01 | Find Largest Element in Array | Arrays | Linear Scan | Easy | Solved | 2 |
| P02 | Find Second Largest Element | Arrays | Two-Pass Linear Scan | Easy | Solved | 1 |
| P03 | Find Smallest Element in Array | Arrays | Linear Scan | Easy | Attempted | 1 |
| P04 | Missing Number | Arrays / Math | Sum Formula | Easy | Solved | 1 |
| P05 | Majority Element (> n/2 times) | Arrays | Boyer-Moore Voting | Medium | Attempted | 2 |
| P06 | Maximum Subarray Sum (Kadane's Algorithm) | Arrays | Brute Force + Kadane's Algorithm | Medium | Optimization Needed | 2 |
| P07 | Single Number (Find Unique Element via XOR) | Arrays / Bit Manipulation | XOR | Easy | Solved | 1 |
| P08 | Rotate Array Left by One | Arrays | In-place Shift | Easy | Solved | 1 |
| P09 | Rotate Array by K Places [(LC 189)](https://leetcode.com/problems/rotate-array/) | Arrays | Reversal Algorithm | Medium | Solved | 2 |
| P10 | Reverse an Array | Arrays | Two Pointers | Easy | Attempted | 2 |
| P11 | Move Zeroes to End [(LC 283)](https://leetcode.com/problems/move-zeroes/) | Arrays | Two Pointers / Stable Partition | Easy | Solved | 1 |
| P12 | Union of Two Sorted Arrays | Arrays | Two Pointers / Hashing | Easy | Solved | 2 |
| P13 | Rearrange Array Elements by Sign [(LC 2149)](https://leetcode.com/problems/rearrange-array-elements-by-sign/) | Arrays | Two Pointers / Extra Array | Medium | Solved | 1 |
| P14 | Linear Search | Arrays | Linear Search | Easy | Solved | 1 |
| P15 | Check if Array is Sorted | Arrays | Linear Scan | Easy | Solved | 1 |
| P16 | Remove Duplicates from Array | Arrays / Hashing | Set | Easy | Solved | 1 |
| P17 | Two Sum [(LC 1)](https://leetcode.com/problems/two-sum/) | Arrays / Hashing | Two Pointers on Sorted Pairs | Easy | Solved | 1 |
| P18 | Next Permutation [(LC 31)](https://leetcode.com/problems/next-permutation/) | Arrays | Pivot Search + Suffix Reversal | Medium | Solved | 1 |
| P19 | Sort Colors / Dutch National Flag [(LC 75)](https://leetcode.com/problems/sort-colors/) | Arrays | Three-Way Partitioning | Medium | In Progress | 3 |
| P20 | Container With Most Water [(LC 11)](https://leetcode.com/problems/container-with-most-water/) | Arrays / Two Pointers | Two Pointers | Medium | Solved | 2 |
| P21 | First Missing Positive [(LC 41)](https://leetcode.com/problems/first-missing-positive/) | Arrays | Sorting-based Scan | Hard | Solved | 1 |
| P22 | Find All Duplicates in Array | Arrays / Hashing | Hash Map | Easy | Solved | 1 |
| P23 | Longest Consecutive Sequence [(LC 128)](https://leetcode.com/problems/longest-consecutive-sequence/) | Arrays / Hashing | Set | Hard | Attempted | 2 |
| P24 | Leaders in an Array | Arrays | Right-to-Left Scan / Brute Force | Easy | Solved | 2 |
| P25 | Best Time to Buy and Sell Stock [(LC 121)](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Arrays / DP | One-Pass Greedy | Easy | Solved | 1 |

> Full per-file notes (what's wrong, what's correct, why a status was assigned) are in [`data/dsa_progress.csv`](data/dsa_progress.csv). 5 STL/language-practice files (`vector` basics, `pair` demos, iterators, pass-by-reference) are tracked separately in [`data/stl_practice_files.csv`](data/stl_practice_files.csv) and excluded from the problem stats above since they aren't DSA problems.

## 🔬 Regenerating These Stats

```bash
pip install pandas matplotlib
python3 scripts/analyze_dsa.py
```

This reads `data/dsa_progress.csv`, prints a summary to the console, and rewrites every chart in `assets/charts/`. Update the CSV as problems get fixed or added, then re-run the script — the README's numbers should be manually synced to match afterward.

## 🌐 Connect

- GitHub: [Jaishankar7655](https://github.com/Jaishankar7655)
- LinkedIn: [Jaishankar Jaiswal](https://www.linkedin.com/in/jaishankar-jaiswal-14253926b)
- Portfolio: [CodeForMe](https://codeformme.netlify.app/)
