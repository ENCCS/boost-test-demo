[![Build Status](https://github.com/ENCCS/boost-test-demo/actions/workflows/test.yml/badge.svg)](https://github.com/ENCCS/boost-test-demo/actions/workflows/test.yml)
[![Coverage Status](https://coveralls.io/repos/github/ENCCS/boost-test-demo/badge.svg?branch=main)](https://coveralls.io/github/ENCCS/boost-test-demo?branch=main)
[![License](https://img.shields.io/badge/license-%20BSD--3-blue.svg)](../main/LICENSE)

# boost-test-demo

C++ unit test demo using [Boost.Test](https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/index.html)
with continuous integration provided by [GitHub
Actions](https://docs.github.com/en/actions) and test coverage deployed to
[Coveralls](https://coveralls.io/r/ENCCS/boost-test-demo).

- [Build and test history](https://github.com/ENCCS/boost-test-demo/actions)
- [Code coverage](https://coveralls.io/r/ENCCS/boost-test-demo)
- Licensed under [BSD-3](../main/LICENSE)


## How to build this demo

```bash
git clone https://github.com/ENCCS/boost-test-demo.git
cd boost-test-demo
cmake -S. -Bbuild 
cmake --build build
```


## Running the tests

Either using `ctest`:
```
$ cd build
$ ctest

Test project /home/user/boost-test-demo/build
    Start 1: add
1/2 Test #1: add ..............................   Passed    0.00 sec
    Start 2: subtract
2/2 Test #2: subtract .........................   Passed    0.01 sec

100% tests passed, 0 tests failed out of 2

Total Test time (real) =   0.01 sec
```

Or directly using `unit_tests`:
```
$ cd build 
$ ./bin/unit_tests --log_level=success

Running 2 test cases...
Entering test module "test module name"
/home/roberto/Workspace/ENCCS/boost-test-demo/test/example_add.cpp(5): Entering test case "add"
/home/roberto/Workspace/ENCCS/boost-test-demo/test/example_add.cpp(8): info: check res == 3.0 has passed
/home/roberto/Workspace/ENCCS/boost-test-demo/test/example_add.cpp(5): Leaving test case "add"; testing time: 261us
/home/roberto/Workspace/ENCCS/boost-test-demo/test/example_subtract.cpp(5): Entering test case "subtract"
/home/roberto/Workspace/ENCCS/boost-test-demo/test/example_subtract.cpp(8): info: check res == -1.0 has passed
/home/roberto/Workspace/ENCCS/boost-test-demo/test/example_subtract.cpp(5): Leaving test case "subtract"; testing time: 245us
Leaving test module "test module name"; testing time: 615us

*** No errors detected
```
