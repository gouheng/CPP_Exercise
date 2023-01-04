# 😄Separating Declaration from Implementation

# 😏将声明与实现分离

## How we do in C?(在C语言中我们怎么做?)

* ![picture](./image/profile/1672768036099.png)

---

## C++ allow you to separate class declaration from implementation

- **$\color{aqua}{separate}$**(分离)
- **$\color{aqua}{declaration}$**(声明)
- **$\color{aqua}{implementation}$**(实现)

+ $\color{cyan}{.h}$ 类声明,描述类的结构
+ $\color{cyan}{.cpp}$ 类实现,描述类方法的实现
+ **FunctionType ClassName $\color{pink}{::(::二元作用域解析运算符(简称"域分隔符"))}$ FunctionName()
  {//...}**

## Inline Declaration & Inline Function(内联声明与内联函数)

- When a function is **implemented inside a class declaration**, it automatically becomes an **inline function**.(当函数在类声明中实现,它自动成为内联函数)

```C++
class A{
    public:
        double test()
        {
            return 1.;
        }
}
```
