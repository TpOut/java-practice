

**文档**

@author, @version,@since,@deprecated,@see, @param,@return,@throws等 ,...,...等，不用...,... 如果引用了一个本地图片，可以放到doc-files目录下

@see用法示例：

```text
@see classPathName.className#methodName()
@see <a href="www.sample.com">this is a label</a>
//显示在see also
@see "Core java 2 volumn 2"
```

多个@see需要放在一起 如果要单独放置可以使用@link，如：

```text
{@link package.class#featrue label}
```

![&#x6355;&#x83B7;.PNG](https://upload-images.jianshu.io/upload_images/1936727-53b27b41ed675e20.PNG?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

> 核心技术4.9.7章描述了生成注释的步骤

**this**

 如果一个类有多个构造方法， 最好尽可能使用 this\( 参数列表 ） 实现它们。 通常， 无参數或参数少的构造方法可以用 this\( 参数列表 ） 调用参数多的构造方法。 这样做通常 可以简化代码， 使类易于阅读和维护。

但是android中很多系统组件构造时，某个少参数的构造方法会带有主题属性，而多参数的没有主题属性，在自定义继承的时候，需要调用super才更合适。