:r !ls *.c
:%s/^.\+$/echo >> markdown.mk; echo \/\\* & \/\\* >> markdown.mk; cat & >> markdown.mk/g
:%s/^$/echo '```c' > markdown.mk/g
:$norm oecho '```' >> markdown.mk
:%s/markdown/2/g
:w !sh
:qa!
