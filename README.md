# Learning C programming language

A collection of tasks to learn C programming language and practice your skills.

## How to use it?

1. **Get**. Download or clone this repo using git to your local machine and init submodules.
   ```shell
   git clone https://github.com/EgorOrachyov/learning-c.git
   cd learning-c
   ```

2. **Setup**. Import this repository sources as a CMake project inside your favorite IDE or use any code editor.

3. **Build**. Build tutorial examples to validate your development environment.
   ```shell
   cmake . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
   cmake --build build --target all -j 4
   ```

4. **Solve**. Start from basic tasks, write missing code in declared interfaces, and make tests working correctly and as
   it expected from functions description.

5. **Experiment**. Modify code, add new functions, do whatever you want.

## Tasks

| Task name                                 | Description                                                                   |
|:------------------------------------------|:------------------------------------------------------------------------------|
| [`1. 📁 strings`](./strings)               | Implement basic string manipulation utilities                                 |
| [`2. 📁 array`](./array)                   | Implement dynamically-sized heap-allocated array of values                    |
| [`3. 📁 linked list`](./linked_list)       | Implement dynamically-sized heap-allocated linked list of values              |
| [`4. 📁 priority queue`](./priority_queue) | Implement heap-based priority queue                                           |
| [`5. 📁 sorting`](./sorting)               | Implement various sorting algorithms and test their performance               |
| [`6. 📁 dictionaries`](./dictionaries)     | Implement list and hash-table based dictionaries and test their performance   |

## License

```text
MIT License

Copyright (c) 2022 Egor Orachyov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```