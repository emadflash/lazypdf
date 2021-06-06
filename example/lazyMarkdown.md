<p style='text-align: justify;'>
## **print the Fibonacci series up to n term.**
</p>

### _input_
	
	    9

### _output_
	
	    1 1 2 3 5 8 13 21 34 55

----
```c
 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 1, b = 1;
    int c = a + b;

    printf("%d ", b);
    for (int i = 0; i < n; ++i) {
        printf("%d ", b);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    return 0;
}
```

![](/home/yds/Projects/lazypdf/example/program-1.png)


<p style='text-align: justify;'>
## **check whether the entered number is prime or not.**
</p>

### _input_
	
	    69

### _output_
	
	    not prime

----
```c
 #include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0)
            count++;
    }
    if (count > 1)
        printf("not prime\n");
    else
        printf("prime\n");
    return 0;
}
```

![](/home/yds/Projects/lazypdf/example/program-2.png)


<p style='text-align: justify;'>
## **Take input of 3 digit number and check whether it is an Armstrong number and Palindrome number or not.**
</p>

### _input_
	
	    13

### _output_
	
	    Not a armstrong number
	    Not a palindrome number

----
```c
 #include <math.h>
#include <stdio.h>

int main() {
    int digit;
    int rev_num = 0;
    int palindrome_sum = 0;
    int num;
    scanf("%d", &num);

    int n = num;
    while (n > 0) {
        digit = n % 10;
        rev_num = rev_num * 10 + digit;
        palindrome_sum += pow(digit, 3);
        n /= 10;
    }

    if (palindrome_sum != num)
        printf("Not a armstrong num\n");
    else
        printf("A armstrong num\n");

    if (rev_num != num)
        printf("Not a palindrome num\n");
    else
        printf("A palindrome num\n");
    return 0;
}
```

![](/home/yds/Projects/lazypdf/example/program-3.png)


<p style='text-align: justify;'>
## **find the sum of following series 1-X1/1! + X2/2! - ............+ Xn /n!**
</p>

### _input_
	 
	    1
	    3

### _output_
	
	    0.5

----
```c
 #include <stdio.h>

int main() {
    int num;
    int end;
    scanf("%d%d", &num, &end);
    int fact = 1;

    float base_w_power = num;
    float sum = 1;
    for (int i = 1; i < end; ++i) {
        fact *= i;
        base_w_power *= num;
        if (i % 2 == 0) {
            sum += base_w_power / fact;
        } else {
            sum -= base_w_power / fact;
        }
    }
    printf("%f\n", sum);
    return 0;
}
```

![](/home/yds/Projects/lazypdf/example/program-4.png)


<p style='text-align: justify;'>
## **print the entire prime no between 1 and 300.**
</p>

### _input_
	
	    None

### _output_
	
	    1
	    1
	    2
	    ..

----
```c
 #include <stdio.h>

int main() {
    int count;
    for (int i = 1; i < 300; ++i) {
        count = 0;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0)
                ++count;
        }
        if (count == 0)
            printf("%d\n", i);
    }
    return 0;
}
```

![](/home/yds/Projects/lazypdf/example/program-5.png)


<p style='text-align: justify;'>
## **draw the following figure**
</p>

### _input_
	
	    None

### _output_
	
	    3 2 1
	    2 1
	    1

----
```c
 int main() {
    for (int i = 3; i > 0; --i) {
        for (int j = i; j > 0; --j) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
```

![](/home/yds/Projects/lazypdf/example/program-6.png)


