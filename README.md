# libft - 42 first programming project
## Latest version notes
### v2.1
#### Major changes
libft now includes an extra compilation option that allows building a math extension pack.
This math extension pack features vec3 (3x1 vectors) and mat44 (4x4 matrices) functions for multiple purposes.

For the math extension, I've been using matrix and vectors double-like typedefs. They both can be found under `includes/libftmath.h`.

This extension only accepts 4x4 matrices for doubles, as C limit generalizing variables and can't therefore expand.

**To compile using the math extension, do `make math`**

#### Minor changes
Only two minor changes happened:

1. Some functions were not documented, now that's fixed (even tho function names are self-descriptive, for coherence documentation was added).
2. `ft_split` was the only function that used break through my entire 42 cursus. It was replaced.
## Previous versions notes
### v2.0
Version 2.0! This version changes a lot of stuff, optimises previous functions and points to achieve huge improvements.

1. Lists have been reworked
2. Memory functions have crash check
3. Lots and lots of other stuff and new functions
### v1.0
This is a simple library which imports some large extended functions made by myself.
In fact, the objective of this project is to **show evolution** during the whole 42 cursus. Each function has, for this reason, a brief description of it purpose and what it returns.

## Score
This project was finished in under a week, and cannot be submitted again but it has suffered major changes. It got a 107/115 (list functions didn't work properly back then).

![Visual proof of success](https://i.imgur.com/0HN4tCc.png)
