```yaml
name: Parallel Commands

on: [push]

jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - name: Compile with GCC
        run: gcc -o myprogram myprogram.c &
      - name: Download with wget
        run: wget https://example.com/myfile.txt &
      - name: Run third command
        run: wait
```
