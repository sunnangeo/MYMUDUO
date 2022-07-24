# noncopyable

noncopyable被继承以后，子类对象可以正常的构造和析构，但是无法进行拷贝构造和赋值操作。将拷贝构造和等号操作符删除，构造和析构函数默认实现。

# Logger

单例模式的日志类，用宏函数接受可变参数

```c++
class Logger {
public:
	static Logger* instance();//static Logger& instance();
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
private:
    Logger() = default;
    ~Logger() = default;
}
Logger* Logger::instance() {//Logger& Logger::instance()
    static Logger logger;//static Logger& logger;
    return &logger;//return logger;
}
```

# Timestamp

explicit防止隐式转换

# InetAddress

封装了一个sockaddr_in的类，构造函数可以提供“端口+IP”或直接给“sockaddr_in”，可以获取IP、IP+Port、Port

# TcpServer

大树的根

# EventLoop

事件循环

# Channel

封装了sockfd和事件EPOLLIN