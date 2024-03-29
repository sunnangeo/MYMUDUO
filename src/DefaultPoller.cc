#include <stdlib.h>

#include "../include/EPollPoller.h"
#include "../include/Poller.h"

Poller* Poller::newDefaultPoller(EventLoop* loop) {
  if (::getenv("MUDUO_USE_POLL")) {
    return nullptr;  // 生成poll的实例
  } else {
    return new EPollPoller(loop);  // 生成epoll的实例
  }
}