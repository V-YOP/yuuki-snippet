关于mybatis generator的配置和使用。

# 食用指南

1. 在 pom.xml 中添加 mybatis generator插件（用IDEA的插件也行）
    ```xml
    <plugin>
        <groupId>org.mybatis.generator</groupId>
        <artifactId>mybatis-generator-maven-plugin</artifactId>
        <version>1.4.0</version>   
        <configuration>
            <verbose>true</verbose>
        </configuration>
    </plugin>
    ```
2. 拷贝当前目录的generatorConfig.xml到classpath（即resources）下
3. 根据业务去修改相应配置
4. 执行 mvn mybatis-generator:generate