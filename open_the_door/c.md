# C语言OJ入门

### 输入输出
- eg1

```
#include <stdio.h>

int main() {
  char a, b, c;
  scanf("%c%c%c", &a, &b, &c);
  printf("%c%c%c", a, b, c);
  return 0;
}
```


- eg2

```
#include "stdio.h"

int main(int argc, char const *argv[]) {
  char input_string[105];

  scanf("[^\n]", input_string);
  printf("%d", input_string);
  return 0;
}
```

- eg3

```
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int a, b;
  while (scanf("%d  %d\n", &a, &b) != EOF) {
    printf("%d\n", a + b);
  }
  return 0;
}

```
