" 在命令运行目录读取c结尾的文件列表
:r !ls *.c
" 每个文件在makrdown文件中换行、插入文件名、插入文件内容
:%s/^.\+$/echo >> markdown.md; echo \/\\* & \\*\/ >> markdown.md; cat & >> markdown.md/g
" 在markdown文件中首行中用```c
:%s/^$/echo '```c' > markdown.md/g
" 添加末尾空行
:$r !echo
" 在markdown文件中末行中用```
:%s/^$/echo '```' >> markdown.md/g
" 定义markdown文件名称
:%s/markdown/2/g
" 运行命令
:w !sh
" 退出
:qa!

