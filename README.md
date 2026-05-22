# Competitive Programming Repository

This repository contains a collection of competitive programming solutions written in C++. Most files are Codeforces-style problem solutions, typically following the format of processing multiple test cases and using fast I/O.

## Repository Structure

- `*.cpp` - C++ source files, each likely corresponding to a Codeforces problem or practice solution.
- `run.exe`, `test.exe` - compiled executables that may be used for local testing or running solutions, if available.

## How to Use

1. Open the repository in your preferred IDE or editor.
2. Pick a `.cpp` source file to inspect or run.
3. Compile a C++ source file using a C++ compiler such as `g++` or `clang++`.

Example:

```bash
g++ -std=c++17 -O2 -Wall 1904A_Forked.cpp -o 1904A_Forked.exe
./1904A_Forked.exe
```

If the solution uses multiple test cases, provide input in standard input as expected by the source file.

## Notes

- Most source files use `ios_base::sync_with_stdio(false)` and `cin.tie(NULL)` for faster I/O.
- The structure of each file is generally:
  - `t_case()` function to solve one test case
  - `main()` to read `t` and call `t_case()` repeatedly

## Common Workflow

- Edit or create a new `.cpp` file for a new problem.
- Compile the file locally.
- Run the compiled executable with input from the problem statement or custom test cases.

## Suggested Improvements

- Add problem names or links in comments for each file.
- Add a `build` script or `Makefile` for easier compilation.
- Include sample input/output files for testing.

## License

This repository is intended for personal practice and study. Feel free to adapt the structure for your own competitive programming workflow.
