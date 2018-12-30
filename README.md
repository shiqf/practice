# c 语言学习

如果你所在平台是 Mac OS 系统且是 vim 用户或者 emacs 终端用户，想学习 linux 系统
知识及 Linux 系统下的 c 编程。

请阅读下面的环境配置使用说明，否则直接跳过容器内容。

## docker 容器

引用docker 官方的话。

> 镜像是一种轻量级、可执行的独立软件包，它包含运行某个软件所需的所有内容，包括代码
> 、运行时、库、环境变量和配置文件。

> 容器是镜像的运行时实例 - 实际执行时镜像会在内存中变成什么。默认情况下，它完全独
> 立于主机环境运行，仅在配置为访问主机文件和端口的情况下才执行此操作。

> Docker 使用 Google 公司推出的 Go 语言 进行开发实现，基于 Linux 内核的 cgroup，
> namespace，以及 AUFS 类的 Union FS 等技术，对进程进行封装隔离，属于 操作系统层面
> 的虚拟化技术。

> Docker 在容器的基础上，进行了进一步的封装，从文件系统、网络互联到进程隔离等等，
> 极大的简化了容器的创建和维护。使得 Docker 技术比虚拟机技术更为轻便、快捷。

docker 的好处是不需要安装操作系统或者虚拟机（太费时间），可随时使用配置好的镜像
文件

详细说明看[dokcer 官方](https://docs.docker-cn.com/)

### 安装 docker

brew 用户使用命令：``brew install docker``
brew 安装说明[地址](https://brew.sh/index_zh-cn)

其他 [docker 官方安装方法](https://docs.docker-cn.com/docker-for-mac/install/)

### docker 使用说明

使用 dockerfile 配置

任意创建一个空文件夹例如：

```bash
cd # 跳转到用户主目录中
mkdir ubuntu # 创建文件夹
touch Dockerfile # 创建空Dockerfile文件
vim Dockerfile # 使用vim打开文件或使用其他编辑器，复制下面内容到Dockerfile中
```

使用 ubuntu 镜像文件

```dockerfile
FROM ubuntu:18.10

WORKDIR /root

RUN buildDeps='wget git curl zsh \
python3 python3-dev python3-pip \
cmake build-essential gcc \
vim gdb
&& apt-get update \
&& apt-get install -y $buildDeps

CMD [ "zsh" ]
```

运行使用

```bash
# 创建标签名为 ubuntu:18.10 的镜像容器
docker build -t ubuntu:18.10 .
# 运行容器
# --cap-add=SYS_PTRACE 解除在 docker 内使用 gdb 的限制
# 可以开始使用
docker container run --cap-add=SYS_PTRACE --security-opt seccomp=unconfined -it ubuntu:18.10
exit # 退出
# 显示容器信息
docker container ls --all
# 再次运行容器
docker container start containerId
 # 后面的 zsh 是默认启动 shell
docker container exec -it containerId zsh
```

Enjoy!

另外：如果你觉得界面太单调或vim原始配置太简单。可以使用 zsh 的
[oh-my-zsh](https://github.com/robbyrussell/oh-my-zsh) 的配置和自己的vim配置。

# 语言学习记录

目录结构

.
├── README.md
├── cpp_primer
├── csapp
│   ├── 1
│   ├── 2
│   ├── 3
│   └── README.md
├── leetcode
│   ├── 1.two-sum.c
│   ├── 2.add-two-numbers.c
│   ├── 26.remove-duplicates-from-sorted-array.c
│   └── 528.random-pick-with-weight.c
├── modern
│   ├── 2
│   ├── 3
│   └── 4
└── test
    ├── huanghou.c
    └── main.c

## csapp 练习 和 家庭作业
## leetcode 练习
