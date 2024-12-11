## What is interger promotion?
When smaller data type than int like char, short is used as operand, the operand is converted to int or usigned int then calculated. This is called 'interger promotion'. So why is this need? There is two reasons.
1. Faster operations
2. To avoid overflow

```c
	char a = 1;
	int b = 2;
	printf("size of sum type : %d\n", sizeof(a+b)); /// size of sum type : 4
	
	char c = 1;
	char d = 2;
	printf("size of sum type : %d\n", sizeof(c+d)); /// size of sum type : 4
```

link: https://www.idryman.org/blog/2012/11/21/integer-promotion/

In assembly level, char or short data type value is stored in 32bit(resister) then calculated. So data type which is smaller than int type is promoted to int type when these type variable is calcultated or used as parameter. 


## Why is it promoted to int type not long long type?
Computer is usaully 64bit architecture not 32bit. In search, there are two reasons that C compiler converts these two type to int.
1. Compataibility with old code
2. 64bit architecture also provide 32bit operations

I think memory size is not related with promotion. When type is promoted, register bit is filled with zero or one whether assembly command. It does not affect to memeroy.
