# C++ STL

標準樣板函式庫(Standard Template Library)包含
   容器(container)
   迭代器(iterator)
   演算法(algorithm)

一、容器

    1. 循序式容器(sequence containers)

    循序式容器是一種線性的資料儲存容器，分成vector、deque與list等三種

    2. 配接器(container adapters)
    
    為序列式容器的變形，只允許特定儲存資料的方向，分成stack、queue與priority_queue等三種

    3. 關聯式容器(associative containers)

    為非線性儲存容器，可以快速搜尋資料，可以用於儲存資料的集合，與鍵值與儲存值(key與value)配對的資料結構，分成set、multiset、map與multimap等四種

二、迭代器

    類似指標的功能
    
    只有vector與deque支援隨機的迭代器
    
    list、set、multiset、map與multimap支援雙向的迭代器
    
    配接器stack、queue與priority_queue不支援迭代器的使用

The properties of each iterator category are:<br>
<br>
<table class="boxed">
<tr><th colspan="4">category</th><th>properties</th><th>valid expressions</th></tr>
<tr><td colspan="4" rowspan="2">all categories</td><td><i><a href="/CopyConstructible">copy-constructible</a></i>, <i><a href="/CopyAssignable">copy-assignable</a> and <i><a href="/Destructible">destructible</a></i></td><td><code>X b(a);<br>
b = a;</code></td></tr>
<tr><td>Can be incremented</td><td><code>++a<br>
a++</code></td></tr>
<tr><td rowspan="10"><a href="/RandomAccessIterator">Random Access</a></td><td rowspan="6"><a href="/BidirectionalIterator">Bidirectional</a></td><td rowspan="5"><a href="/ForwardIterator">Forward</a></td><td rowspan="2"><a href="/InputIterator">Input</a></td><td>Supports equality/inequality comparisons</td><td><code>a == b<br>
a != b</code></td></tr>
<tr><td>Can be dereferenced as an <i>rvalue</i></td><td><tt>*a<br>
a-&gt;m</tt></td></tr>
<tr><td><a href="/OutputIterator">Output</a></td><td>Can be dereferenced as an <i>lvalue</i> <br>
(only for <i>mutable iterator types</i>)</td><td><tt>*a = t<br>
*a++ = t</tt></td></tr>
<tr><td rowspan="2"></td><td><i><a href="/DefaultConstructible">default-constructible</a></i></td><td><tt>X a;<br>
X()</tt></td></tr>
<tr><td>Multi-pass: neither dereferencing nor incrementing affects dereferenceability</td><td><code>{ b=a; *a++; *b; }</code> </td></tr>
<tr><td colspan="2"></td><td>Can be decremented</td><td><tt>--a<br>
a--<br>
*a--</tt></td></tr>
<tr><td colspan="3" rowspan="4"></td><td>Supports arithmetic operators <tt>+</tt> and <tt>-</tt></td><td><tt>a + n<br>
n + a<br>
a - n<br>
a - b</tt></td></tr>
<tr><td>Supports inequality comparisons (<tt>&lt;</tt>, <tt>&gt;</tt>, <tt>&lt;=</tt> and <tt>&gt;=</tt>) between iterators</td><td><tt>a &lt; b<br>
a &gt; b<br>
a &lt;= b<br>
a &gt;= b</tt></td></tr>
<tr><td>Supports compound assignment operations <tt>+=</tt> and <tt>-=</tt></td><td><tt>a += n<br>
a -= n</tt></td></tr>
<tr><td>Supports offset dereference operator (<tt>[]</tt>)</td><td><tt>a[n]</tt></td></tr>
</table>

三、演算法

    提供搜尋、排序與比較等功能
    
    header <algorithm>

References:
1. https://www.cplusplus.com/reference/stl/
2. https://sites.google.com/view/zsgititit/home/jin-jiec-cheng-shi-she-ji/stl

