# Object Oriented Programming 面向对象编程

## Features of OO (面向对象的特征)

😎

* Abstraction (抽象)
* Polymorphism (多态)
* Inheritance (继承)
* Encapsulation (封装)

---

## Create Objects and Access the members

### Constructor (构造函数)

* Ctors:
* Automatic invocation($\color{red}{"自动调用"}$)
* Has the same name as the defining class ($\color{red}{"与类同名"}$)
* NO return value(include $\color{red}{"void"}$) 无返回值
* Can be overloaded ($\color{red}{"可重载"}$)
* May have no argument ($\color{red}{"可不带参数"}$)

## Constructing Objects(创建对象)

* Without Arguments:(无参数)
* With Arguments:(有参数)  Circle circle2{5.5} //C++11列表初始化 // 带有窄化检查

## Object Member Access Operator (对象成员访问运算符)

* To access the data & functions of an object:(点运算符$\color{red}{.}$访问对象中的数据和函数)

## Object Copy & Anonymous Object (对象拷贝和匿名对象)
# Class is Type (类是一种数据类型)
* 用原生数据类型定义变量,用类名定义对象
*  $\color{yellow}{"auto c5 = Circle{5.}"}$  // 匿名对象
## MemberVise Copy (成员拷贝)
* $\color{yellow}{=}$ 使用赋值运算符
* **默认情况下,对象中的每个数据域都被拷贝到另一个对象的对应部分**
## Anonymous Object (匿名对象)
* 有时需要创建,一个只能用一次的对象
* 这种不命名的对象叫做匿名对象

## class Replaces struct
* C语言中使用结构体类型来表示一组数据
* 在C++中,结构体已被类取代
## Local class & Nested class(局部类和嵌套类)
* 局部类是在一个函数中声明的类
* 嵌套类是在另一个类中声明的类
