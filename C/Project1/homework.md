```c
#include <stdio.h>

void hapGop(int x, int y, int*hap, int*gop){
    *hap = x + y;
    *gop = x * y;
}

void main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    int mul = 0;
    printf("두 수를 입력하시오 :\n");
    scanf("%d%d",&a,&b);
    
    hapGop(a, b, &sum, &mul);
    printf("합 : %d\n", sum);
    printf("곱 : %d\n", mul);
}

```

```c
#include <stdio.h>

void Factorial(int x, int*mul){
    for(int i = x ; i > 0; i--){
        *mul = *mul * i;
    }
}

void main()
{
    int a = 1 ;
    int factorial = 1;
    printf("정수를 1개 입력해주세요 : ");
    scanf("%d",&a);
    Factorial(a, &factorial);
    printf("Factorial : %d\n", factorial);
}
```

```c
#include <stdio.h>
void func(int size, int*a){
    for(int i = 0; i < size; i++){
        printf("%d\n",*(a+i));
    }
}

void main()
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    func(size, a);
}
```

```c
#include <stdio.h>
void Swap(int x,int y){
    int Temp = 0;
    Temp = x;
    x = y;
    y = Temp;
    printf("함수 안 변경 x = %d , y = %d\n", x, y);
}

void main()
{
    int a = 1;
    int b = 2;
    printf("초기값 a = %d , b = %d\n",a,b);
    Swap(a,b);
    printf("함수 밖 출력 a = %d , b = %d\n",a,b);
}
```

```c
#include <stdio.h>
void Swap(int*x,int*y){
    int Temp = 0;
    Temp = *x;
    *x = *y;
    *y = Temp;
    printf("함수 안 변경 x = %d , y = %d\n",*x,*y);
}

void main()
{
    int a = 1;
    int b = 2;
    printf("초기값 a = %d , b = %d\n",a,b);
    Swap(&a,&b);
    printf("함수 밖 출력 a = %d , b = %d\n",a,b);
}
```

```c
#include <stdio.h>

void main()
{
    void *a;
    double b = 3.14;
    a = &b;
    printf("%.2f", *(double*)a);
}
```

```c
#include <stdio.h>

void main()
{
    int arr[2];
    printf("두 개의 숫자를 입력해주세요 : ");
    scanf("%d%d", &arr[0], &arr[1]);
    if(arr[0]>arr[1]){
        printf("큰 수는 %d 입니다.", arr[0]);
    } else if(arr[1]>arr[0]){
        printf("큰 수는 %d 입니다.", arr[1]);
    } else if(arr[1] == arr[0]){
        printf("두 수는 같습니다.");
    } else{
        printf("입력값이 올바르지 않습니다. 다시 입력해주세요.");
    }
}
```

```c
#include <stdio.h>

void findMaxNum(int*a, int*b){
    if(*a > *b){
        printf("큰 수는 %d 입니다.", *a);
    } else if(*b > *a){
        printf("큰 수는 %d 입니다.", *b);
    } else if(*a == *b){
        printf("두 수는 같습니다.");
    } else{
        printf("입력값이 올바르지 않습니다. 다시 입력해주세요.");
    }
}

void main()
{
    int arr[2];
    printf("두 개의 숫자를 입력해주세요 : ");
    scanf("%d%d", &arr[0], &arr[1]);
    findMaxNum(&arr[0],&arr[1]);
}
```

```c
#include <stdio.h>

void main()
{
    int arr[100];
    int sum = 0;
    for(int i = 0; i < 100; i++){
        arr[i] = i + 1;
        sum = sum + arr[i];
    }
    printf("배열 요소의 총 합: %d", sum);
}
```

```c
#include <stdio.h>

void main()
{
    int arr[] = {3,5,2,11,10};
    int maxNum = 0;
    for(int i = 0; i < 5; i++){
        if( arr[i]> maxNum ){
            maxNum = arr[i];
        }
    }
    printf("가장 큰 값은 : %d", maxNum);
}
```

```c
#include <stdio.h>

void main()
{
    int arr[] = {1,2,3,4,5};
    int *a = arr;
    printf("배열의 요소 출력 : ");
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ",arr[i]);
    };
    printf("배열의 주소 출력 : ");
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ",&arr[i]);
    };
    printf("배열의 이름 출력 : %d\n", arr);
    printf("배열의 이름 출력 : %d\n", &arr);
    printf("배열의 이름 출력 : %d\n", a);
}
```

```c
#include <stdio.h>

void main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        printf("%d ", *(a + i));
    }
}
```

```c
#include <stdio.h>

struct object {
    char name[10];
    int height;
    int weight;
};

void main()
{
    struct object item;
    printf("물건의 이름을 입력해주세요 : ");
    scanf("%s", item.name);

    printf("물건의 높이(cm)를 입력해주세요 : ");
    scanf("%d", &item.height);

    printf("물건의 무게(kg)를 입력해주세요 : ");
    scanf("%d", &item.weight); 
    
    printf("물건의 이름 : %s\n", item.name);
    printf("물건의 높이(cm) : %d\n", item.height);
    printf("물건의 무게(kg) : %d\n", item.weight);
    printf("보낼 물건의 정보 : %s, %dcm, %dkg\n", item.name, item.height, item.weight);
}
```
