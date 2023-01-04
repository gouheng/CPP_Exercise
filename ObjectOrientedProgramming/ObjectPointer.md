# Object Pointer & Dynamic Object(对象指针和动态对象)

## accessing Object Members with via Pointers(用指针访问对象成员)
- Object pointers can be $\color{aqua}{assigned(指定,指向)}$ new object names(对象指针可以指向新的对象名)
- $\color{aqua}{assigned(Arrow operator(箭头运算符))}$ **->:** Using pointer ot access object members(箭头运算符->:用指针访问对象成员)
## Create Dynamic Objects on Heap(在堆中创建对象)
- Object declared in function is created in the stack.(在函数中声明的对象都在栈上创建);When the function returns, the object is destroyed(函数返回,则对象被销毁)
- To retain the object, you may create it dynamically on the heap using the new operator(为保留对象,你可以用new 运算符在堆上创建它)
- // ClassName *pObject = new ClassName{};// 用无参构造函数创建对象
- // ClassName *pObject = new ClassName{arguments};// 有参构造函数创建对象
