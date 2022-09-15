
## Progress
<!-- progress start -->
- cover.tex [:white_check_mark:](cover.tex)
- appendix.tex [:x:](appendix.tex)

| | A | B | C | D |
| --- | --- | --- | --- | --- |
| contest_name |  [:white_check_mark:](pA/problem.json) | [:white_check_mark:](pB/problem.json) | [:white_check_mark:](pC/problem.json) | [:white_check_mark:](pD/problem.json) |
| problem_label |  [:white_check_mark:](pA/problem.json) | [:white_check_mark:](pB/problem.json) | [:white_check_mark:](pC/problem.json) | [:white_check_mark:](pD/problem.json) |
| name |  [:white_check_mark:](pA/problem.json)<br>Arithmetic | [:white_check_mark:](pB/problem.json)<br>pB | [:white_check_mark:](pC/problem.json)<br>pC | [:white_check_mark:](pD/problem.json)<br>pD |
| title |  [:white_check_mark:](pA/problem.json)<br>四則運算 | [:white_check_mark:](pB/problem.json)<br>浮點誤差但不使用checker | [:white_check_mark:](pC/problem.json)<br>浮點誤差使用checker | [:white_check_mark:](pD/problem.json)<br>Checker範例 |
| memory_limit |  512 | 512 | 512 | 512 |
| time_limit |  1.0 | 1.0 | 1.0 | 1.0 |
| has_checker |  False | False | True | True |
| gen | [:white_check_mark:](pA/gen) | [:white_check_mark:](pB/gen) | [:white_check_mark:](pC/gen) | [:white_check_mark:](pD/gen) |
| solution | [:white_check_mark:](pA/solution) | [:white_check_mark:](pB/solution) | [:white_check_mark:](pC/solution) | [:white_check_mark:](pD/solution) |
| validator | [:white_check_mark:](pA/validator) | [:white_check_mark:](pB/validator) | [:white_check_mark:](pC/validator) | [:x:](pD/validator)<br>[validator.cpp](pD/validator/validator.cpp) |
| subtasks.json<br>global_validators |  [:white_check_mark:](pA/subtasks.json) | [:white_check_mark:](pB/subtasks.json) | [:white_check_mark:](pC/subtasks.json) | [:white_check_mark:](pD/subtasks.json) |
| tests | [:white_check_mark:](pA/tests) | [:white_check_mark:](pB/tests) | [:white_check_mark:](pC/tests) | [:white_check_mark:](pD/tests) |
| statement/index.md | [:white_check_mark:](pA/statement/index.md) | [:x:](pB/statement/index.md) | [:x:](pC/statement/index.md) | [:x:](pD/statement/index.md) |
| statement/index.pdf | [:white_check_mark:](pA/statement/index.pdf) | [:white_check_mark:](pB/statement/index.pdf) | [:white_check_mark:](pC/statement/index.pdf) | [:white_check_mark:](pD/statement/index.pdf) |
<!-- progress end -->

## Subtasks
<!-- subtasks start -->
| | 1 | 2 | 3 |
| --- | --- | --- | --- |
| A | 20<br>$A = 0$、$1 \leq B \leq 10^{4}$ | 30<br>$0 \leq A, B \leq 10^{4}$ | 50<br>無額外限制 |
| B | 20<br>Simple tests | 80<br>Hacked tests |
| C | 20<br>Simple tests | 80<br>Hacked tests |
| D | 20<br>$A, B \leq 10$ | 30<br>$A, B \leq 100$ | 50<br>無額外限制 |
<!-- subtasks end -->

## Scores
<!-- scores start -->
| score | count | groups |
| --- | --- | --- |
| 20 | 4 | (A1) (B1) (C1) (D1) |
| 30 | 2 | (A2) (D2) |
| 40 | 6 | (A1, B1) (A1, C1) (B1, C1) (A1, D1) (B1, D1) (C1, D1) |
| 50 | 10 | (A1, A2) (A2, B1) (A2, C1) (A2, D1) (A1, D2) (B1, D2) (C1, D2) (D1, D2) (A3) (D3) |
| 60 | 5 | (A1, B1, C1) (A1, B1, D1) (A1, C1, D1) (B1, C1, D1) (A2, D2) |
| 70 | 20 | (A1, A2, B1) (A1, A2, C1) (A2, B1, C1) (A1, A2, D1) (A2, B1, D1) (A2, C1, D1) (A1, B1, D2) (A1, C1, D2) (B1, C1, D2) (A1, D1, D2) (B1, D1, D2) (C1, D1, D2) (A1, A3) (A3, B1) (A3, C1) (A3, D1) (A1, D3) (B1, D3) (C1, D3) (D1, D3) |
| 80 | 10 | (A1, A2, D2) (A2, B1, D2) (A2, C1, D2) (A2, D1, D2) (A2, A3) (A3, D2) (A2, D3) (D2, D3) (B2) (C2) |
| 90 | 12 | (A1, A3, B1) (A1, A3, C1) (A3, B1, C1) (A1, A3, D1) (A3, B1, D1) (A3, C1, D1) (A1, B1, D3) (A1, C1, D3) (B1, C1, D3) (A1, D1, D3) (B1, D1, D3) (C1, D1, D3) |
| 100 | 25 | (A1, A2, A3) (A2, A3, B1) (A2, A3, C1) (A2, A3, D1) (A1, A3, D2) (A3, B1, D2) (A3, C1, D2) (A3, D1, D2) (A1, A2, D3) (A2, B1, D3) (A2, C1, D3) (A2, D1, D3) (A1, D2, D3) (B1, D2, D3) (C1, D2, D3) (D1, D2, D3) (A3, D3) (A1, B2) (B1, B2) (B2, C1) (B2, D1) (A1, C2) (B1, C2) (C1, C2) (C2, D1) |
| 110 | 6 | (A2, A3, D2) (A2, D2, D3) (A2, B2) (B2, D2) (A2, C2) (C2, D2) |
| 120 | 16 | (A1, A3, D3) (A3, B1, D3) (A3, C1, D3) (A3, D1, D3) (A1, B1, B2) (A1, B2, C1) (B1, B2, C1) (A1, B2, D1) (B1, B2, D1) (B2, C1, D1) (A1, B1, C2) (A1, C1, C2) (B1, C1, C2) (A1, C2, D1) (B1, C2, D1) (C1, C2, D1) |
| 130 | 22 | (A2, A3, D3) (A3, D2, D3) (A1, A2, B2) (A2, B1, B2) (A2, B2, C1) (A2, B2, D1) (A1, B2, D2) (B1, B2, D2) (B2, C1, D2) (B2, D1, D2) (A3, B2) (B2, D3) (A1, A2, C2) (A2, B1, C2) (A2, C1, C2) (A2, C2, D1) (A1, C2, D2) (B1, C2, D2) (C1, C2, D2) (C2, D1, D2) (A3, C2) (C2, D3) |
| 140 | 2 | (A2, B2, D2) (A2, C2, D2) |
| 150 | 16 | (A1, A3, B2) (A3, B1, B2) (A3, B2, C1) (A3, B2, D1) (A1, B2, D3) (B1, B2, D3) (B2, C1, D3) (B2, D1, D3) (A1, A3, C2) (A3, B1, C2) (A3, C1, C2) (A3, C2, D1) (A1, C2, D3) (B1, C2, D3) (C1, C2, D3) (C2, D1, D3) |
| 160 | 9 | (A2, A3, B2) (A3, B2, D2) (A2, B2, D3) (B2, D2, D3) (A2, A3, C2) (A3, C2, D2) (A2, C2, D3) (C2, D2, D3) (B2, C2) |
| 180 | 6 | (A3, B2, D3) (A3, C2, D3) (A1, B2, C2) (B1, B2, C2) (B2, C1, C2) (B2, C2, D1) |
| 190 | 2 | (A2, B2, C2) (B2, C2, D2) |
| 210 | 2 | (A3, B2, C2) (B2, C2, D3) |
<!-- scores end -->
