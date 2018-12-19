:r !ls *.c
:%s/^.\+$/echo >> markdown.md; echo \/\\* & \\*\/ >> markdown.md; cat & >> markdown.md/g
:%s/^$/echo '```c' > markdown.md/g
:$norm oecho '```' >> markdown.md
:%s/markdown/2/g
:w !sh
:qa!
