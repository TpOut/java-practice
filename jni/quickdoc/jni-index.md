> https://docs.oracle.com/javase/8/docs/technotes/guides/jni/spec/jniTOC.html
>
> [原文翻译](./translate/translate-index.md)



JNI 最重要的是没有依赖底层jvm 的实现，所以jvm 可以单独支持JNI（独立于其他部分）



invocation API



#### 历史实现

- jdk1.0 实现时，native 访问java 对象，是转化成一个c 结构体，但是不同jvm 存储对象的方式是不确定的。且依赖于一个保守（conservative）的垃圾收集器，比如`unhand` 需要浏览native 栈。

    > `unhand` macro 的函数，可以看下http://hepunx.rl.ac.uk/~adye/javatutorial/native/implementing/objects.html 第一节
    >
    > 大概就是说通过这个宏函数，可以把java 对象对应解析成c 的结构体

- Java runtime interface，理想化兼容设计，伴随着很多issues

- Raw native interface and Java/COM interface，通过两层接口处理



#### 目标实现

必须是二进制兼容，高效的，功能性齐全的





[基本用法](jni-usage.md)



