#include "../include/Poller.h"

#include "../include/Channel.h"

Poller::Poller(EventLoop *loop) : ownerLoop_(loop) {}

bool Poller::hasChannel(Channel *channel) const {
  auto it = channels_.find(channel->fd());
  return it != channels_.end() && it->second == channel;
}

//静态方法不在poller实现，因为defalt一定会include epoller 这不合理