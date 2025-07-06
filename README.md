# crep
"A dime store grep program written in C++"

<img src="static/grep_in_a_cave.png" alt="Screenshot" width="400" height="200">


## About this Project:
This prog was written as part of learning C++. In its current state,
it's likely not any more dependable than the title suggests.  :)

## Goals:
- [x] Basic case-sensitive search
- [ ] Case-insensitive
- [x] Line numbers
- [ ] Whole-word match (bounded by spaces?)
- [ ] Regex
- [ ] Multiple files (recurse dir)
- [ ] Invert match ?
- [ ] Match count
- [ ] Context lines ?
- [ ] Stdin support ?
- [ ] Output formatting (color, filenames, etc.)

## Compiling and running 

<b>Prerequisites:</b>
- Requires a compiler (clang)
- make

```
make build
```
> build crep:

```
make clean
```
> remove crep and build files

```
# Installs to /usr/local/bin/
make install
```
> install to Linux machine: &ensp;
> NOTE: location can be tailored to your needs.

```
# Uninstalls crep (should you actually install it)
make uninstall
```
