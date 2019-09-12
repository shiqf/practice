" let i = 1
" while i < 105
"   echo "count is" i
"   let i += 1
" endwhile

" for i in range(1, 4)
"     echo "hello " . i
" endfor

" echo 0x7f 036
" echo 0x7f -036

let s:count = 1
while s:count < 5
    source other.vim
    let s:count += 1
endwhile
echo s:count
echo test
