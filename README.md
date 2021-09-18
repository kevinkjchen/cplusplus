# C++ STL

標準樣板函式庫(Standard Template Library)包含

   容器(container)
   
   迭代器(iterator)
   
   演算法(algorithm)
   
<br>
一、容器

>1. 循序式容器(sequence containers):
>
>     是一種線性的資料儲存容器，分成vector、deque與list等三種
>
>2. 配接器(container adapters):
>
>     為序列式容器的變形，只允許特定儲存資料的方向，分成stack、queue與priority_queue等三種
>
>3. 關聯式容器(associative containers):
>
>     為非線性儲存容器，可以快速搜尋資料，可以用於儲存資料的集合，與鍵值與儲存值(key與value)配對的資料結構，分成set、multiset、map與multimap等四種
    
<h4>Sequence containers</h4>
<table class="boxed containers">
<tr><td colspan="2">Headers</td><th class="cpp11"><tt><a href="/&lt;array&gt;">&lt;array&gt;</a></tt></th><th class="cpp98"><tt><a href="/&lt;vector&gt;">&lt;vector&gt;</a></tt></th><th class="cpp98"><tt><a href="/&lt;deque&gt;">&lt;deque&gt;</a></tt></th><th class="cpp11"><tt><a href="/&lt;forward_list&gt;">&lt;forward_list&gt;</a></tt></th><th class="cpp98"><tt><a href="/&lt;list&gt;">&lt;list&gt;</a></tt></th></tr>
<tr><td colspan="2">Members</td><th class="cpp11"><a href="/array">array</a></th><th class="cpp98"><a href="/vector">vector</a></th><th class="cpp98"><a href="/deque">deque</a></th><th class="cpp11"><a href="/forward_list">forward_list</a></th><th class="cpp98"><a href="/list">list</a></th></tr>
<tr><td rowspan="3"> </td><td><i>constructor</i></td><td class="cpp11"><i>implicit</i></td><td class="cpp98"><a href="/vector::vector">vector</a></td><td class="cpp98"><a href="/deque::deque">deque</a></td><td class="cpp11"><a href="/forward_list::forward_list">forward_list</a></td><td class="cpp98"><a href="/list::list">list</a></td></tr>
<tr><td><i>destructor</i></td><td class="cpp11"><i>implicit</i></td><td class="cpp98"><a href="/vector::~vector">~vector</a></td><td class="cpp98"><a href="/deque::~deque">~deque</a></td><td class="cpp11"><a href="/forward_list::~forward_list">~forward_list</a></td><td class="cpp98"><a href="/list::~list">~list</a></td></tr>
<tr><td><tt>operator=</tt></td><td class="cpp11"><i>implicit</i></td><td class="cpp98"><a href="/vector::operator=">operator=</a></td><td class="cpp98"><a href="/deque::operator=">operator=</a></td><td class="cpp11"><a href="/forward_list::operator=">operator=</a></td><td class="cpp98"><a href="/list::operator=">operator=</a></td></tr>
<tr><td rowspan="4">iterators</td><td><tt>begin</tt></td><td class="cpp11"><a href="/array::begin">begin</a></td><td class="cpp98"><a href="/vector::begin">begin</a></td><td class="cpp98"><a href="/deque::begin">begin</a></td><td class="cpp11"><a href="/forward_list::begin">begin</a><br><a href="/forward_list::before_begin">before_begin</a></td><td class="cpp98"><a href="/list::begin">begin</a></td></tr>
<tr><td><tt>end</tt></td><td class="cpp11"><a href="/array::end">end</a></td><td class="cpp98"><a href="/vector::end">end</a></td><td class="cpp98"><a href="/deque::end">end</a></td><td class="cpp11"><a href="/forward_list::end">end</a></td><td class="cpp98"><a href="/list::end">end</a></td></tr>
<tr><td><tt>rbegin</tt></td><td class="cpp11"><a href="/array::rbegin">rbegin</a></td><td class="cpp98"><a href="/vector::rbegin">rbegin</a></td><td class="cpp98"><a href="/deque::rbegin">rbegin</a></td><td class="none"> </td><td class="cpp98"><a href="/list::rbegin">rbegin</a></td></tr>
<tr><td><tt>rend</tt></td><td class="cpp11"><a href="/array::rend">rend</a></td><td class="cpp98"><a href="/vector::rend">rend</a></td><td class="cpp98"><a href="/deque::rend">rend</a></td><td class="none"> </td><td class="cpp98"><a href="/list::rend">rend</a></td></tr>
<tr><td rowspan="4">const iterators</td><td><tt>cbegin</tt></td><td class="cpp11"><a href="/array::cbegin">cbegin</a></td><td class="cpp11"><a href="/vector::cbegin">cbegin</a></td><td class="cpp11"><a href="/deque::cbegin">cbegin</a></td><td class="cpp11"><a href="/forward_list::cbegin">cbegin</a><br><a href="/forward_list::cbefore_begin">cbefore_begin</a></td><td class="cpp11"><a href="/list::cbegin">cbegin</a></td></tr>
<tr><td><tt>cend</tt></td><td class="cpp11"><a href="/array::cend">cend</a></td><td class="cpp11"><a href="/vector::cend">cend</a></td><td class="cpp11"><a href="/deque::cend">cend</a></td><td class="cpp11"><a href="/forward_list::cend">cend</a></td><td class="cpp11"><a href="/list::cend">cend</a></td></tr>
<tr><td><tt>crbegin</tt></td><td class="cpp11"><a href="/array::crbegin">crbegin</a></td><td class="cpp11"><a href="/vector::crbegin">crbegin</a></td><td class="cpp11"><a href="/deque::crbegin">crbegin</a></td><td class="none"> </td><td class="cpp11"><a href="/list::crbegin">crbegin</a></td></tr>
<tr><td><tt>crend</tt></td><td class="cpp11"><a href="/array::crend">crend</a></td><td class="cpp11"><a href="/vector::crend">crend</a></td><td class="cpp11"><a href="/deque::crend">crend</a></td><td class="none"> </td><td class="cpp11"><a href="/list::crend">crend</a></td></tr>
<tr><td rowspan="7">capacity</td><td><tt>size</tt></td><td class="cpp11"><a href="/array::size">size</a></td><td class="cpp98"><a href="/vector::size">size</a></td><td class="cpp98"><a href="/deque::size">size</a></td><td class="none"> </td><td class="cpp98"><a href="/list::size">size</a></td></tr>
<tr><td><tt>max_size</tt></td><td class="cpp11"><a href="/array::max_size">max_size</a></td><td class="cpp98"><a href="/vector::max_size">max_size</a></td><td class="cpp98"><a href="/deque::max_size">max_size</a></td><td class="cpp11"><a href="/forward_list::max_size">max_size</a></td><td class="cpp98"><a href="/list::max_size">max_size</a></td></tr>
<tr><td><tt>empty</tt></td><td class="cpp11"><a href="/array::empty">empty</a></td><td class="cpp98"><a href="/vector::empty">empty</a></td><td class="cpp98"><a href="/deque::empty">empty</a></td><td class="cpp11"><a href="/forward_list::empty">empty</a></td><td class="cpp98"><a href="/list::empty">empty</a></td></tr>
<tr><td><tt>resize</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::resize">resize</a></td><td class="cpp98"><a href="/deque::resize">resize</a></td><td class="cpp11"><a href="/forward_list::resize">resize</a></td><td class="cpp98"><a href="/list::resize">resize</a></td></tr>
<tr><td><tt>shrink_to_fit</tt></td><td class="none"> </td><td class="cpp11"><a href="/vector::shrink_to_fit">shrink_to_fit</a></td><td class="cpp11"><a href="/deque::shrink_to_fit">shrink_to_fit</a></td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>capacity</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::capacity">capacity</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>reserve</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::reserve">reserve</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td rowspan="4">element access</td><td><tt>front</tt></td><td class="cpp11"><a href="/array::front">front</a></td><td class="cpp98"><a href="/vector::front">front</a></td><td class="cpp98"><a href="/deque::front">front</a></td><td class="cpp11"><a href="/forward_list::front">front</a></td><td class="cpp98"><a href="/list::front">front</a></td></tr>
<tr><td><tt>back</tt></td><td class="cpp11"><a href="/array::back">back</a></td><td class="cpp98"><a href="/vector::back">back</a></td><td class="cpp98"><a href="/deque::back">back</a></td><td class="none"> </td><td class="cpp98"><a href="/list::back">back</a></td></tr>
<tr><td><tt>operator[]</tt></td><td class="cpp11"><a href="/array::operator[]">operator[]</a></td><td class="cpp98"><a href="/vector::operator[]">operator[]</a></td><td class="cpp98"><a href="/deque::operator[]">operator[]</a></td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>at</tt></td><td class="cpp11"><a href="/array::at">at</a></td><td class="cpp98"><a href="/vector::at">at</a></td><td class="cpp98"><a href="/deque::at">at</a></td><td class="none"> </td><td class="none"> </td></tr>
<tr><td rowspan="12">modifiers</td><td><tt>assign</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::assign">assign</a></td><td class="cpp98"><a href="/deque::assign">assign</a></td><td class="cpp11"><a href="/forward_list::assign">assign</a></td><td class="cpp98"><a href="/list::assign">assign</a></td></tr>
<tr><td><tt>emplace</tt></td><td class="none"> </td><td class="cpp11"><a href="/vector::emplace">emplace</a></td><td class="cpp11"><a href="/deque::emplace">emplace</a></td><td class="cpp11"><a href="/forward_list::emplace_after">emplace_after</a></td><td class="cpp11"><a href="/list::emplace">emplace</a></td></tr>
<tr><td><tt>insert</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::insert">insert</a></td><td class="cpp98"><a href="/deque::insert">insert</a></td><td class="cpp11"><a href="/forward_list::insert_after">insert_after</a></td><td class="cpp98"><a href="/list::insert">insert</a></td></tr>
<tr><td><tt>erase</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::erase">erase</a></td><td class="cpp98"><a href="/deque::erase">erase</a></td><td class="cpp11"><a href="/forward_list::erase_after">erase_after</a></td><td class="cpp98"><a href="/list::erase">erase</a></td></tr>
<tr><td><tt>emplace_back</tt></td><td class="none"> </td><td class="cpp11"><a href="/vector::emplace_back">emplace_back</a></td><td class="cpp11"><a href="/deque::emplace_back">emplace_back</a></td><td class="none"> </td><td class="cpp11"><a href="/list::emplace_back">emplace_back</a></td></tr>
<tr><td><tt>push_back</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::push_back">push_back</a></td><td class="cpp98"><a href="/deque::push_back">push_back</a></td><td class="none"> </td><td class="cpp98"><a href="/list::push_back">push_back</a></td></tr>
<tr><td><tt>pop_back</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::pop_back">pop_back</a></td><td class="cpp98"><a href="/deque::pop_back">pop_back</a></td><td class="none"> </td><td class="cpp98"><a href="/list::pop_back">pop_back</a></td></tr>
<tr><td><tt>emplace_front</tt></td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/deque::emplace_front">emplace_front</a></td><td class="cpp11"><a href="/forward_list::emplace_front">emplace_front</a></td><td class="cpp11"><a href="/list::emplace_front">emplace_front</a></td></tr>
<tr><td><tt>push_front</tt></td><td class="none"> </td><td class="none"> </td><td class="cpp98"><a href="/deque::push_front">push_front</a></td><td class="cpp11"><a href="/forward_list::push_front">push_front</a></td><td class="cpp98"><a href="/list::push_front">push_front</a></td></tr>
<tr><td><tt>pop_front</tt></td><td class="none"> </td><td class="none"> </td><td class="cpp98"><a href="/deque::pop_front">pop_front</a></td><td class="cpp11"><a href="/forward_list::pop_front">pop_front</a></td><td class="cpp98"><a href="/list::pop_front">pop_front</a></td></tr>
<tr><td><tt>clear</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::clear">clear</a></td><td class="cpp98"><a href="/deque::clear">clear</a></td><td class="cpp11"><a href="/forward_list::clear">clear</a></td><td class="cpp98"><a href="/list::clear">clear</a></td></tr>
<tr><td><tt>swap</tt></td><td class="cpp11"><a href="/array::swap">swap</a></td><td class="cpp98"><a href="/vector::swap">swap</a></td><td class="cpp98"><a href="/deque::swap">swap</a></td><td class="cpp11"><a href="/forward_list::swap">swap</a></td><td class="cpp98"><a href="/list::swap">swap</a></td></tr>
<tr><td rowspan="7">list operations</td><td><tt>splice</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::splice_after">splice_after</a></td><td class="cpp98"><a href="/list::splice">splice</a></td></tr>
<tr><td><tt>remove</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::remove">remove</a></td><td class="cpp98"><a href="/list::remove">remove</a></td></tr>
<tr><td><tt>remove_if</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::remove_if">remove_if</a></td><td class="cpp98"><a href="/list::remove_if">remove_if</a></td></tr>
<tr><td><tt>unique</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::unique">unique</a></td><td class="cpp98"><a href="/list::unique">unique</a></td></tr>
<tr><td><tt>merge</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::merge">merge</a></td><td class="cpp98"><a href="/list::merge">merge</a></td></tr>
<tr><td><tt>sort</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::sort">sort</a></td><td class="cpp98"><a href="/list::sort">sort</a></td></tr>
<tr><td><tt>reverse</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/forward_list::reverse">reverse</a></td><td class="cpp98"><a href="/list::reverse">reverse</a></td></tr>
<tr><td rowspan="2">observers</td><td><tt>get_allocator</tt></td><td class="none"> </td><td class="cpp98"><a href="/vector::get_allocator">get_allocator</a></td><td class="cpp98"><a href="/deque::get_allocator">get_allocator</a></td><td class="cpp11"><a href="/forward_list::get_allocator">get_allocator</a></td><td class="cpp98"><a href="/list::get_allocator">get_allocator</a></td></tr>
<tr><td><tt>data</tt></td><td class="cpp11"><a href="/array::data">data</a></td><td class="cpp11"><a href="/vector::data">data</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
</table>

<h4>Associative containers</h4>
<table class="boxed containers">
<tr><td colspan="2">Headers</td><th colspan="2"><tt><a href="/&lt;set&gt;">&lt;set&gt;</a></tt></th><th colspan="2"><tt><a href="/&lt;map&gt;">&lt;map&gt;</a></tt></th><th colspan="2"><tt><a href="/&lt;unordered_set&gt;">&lt;unordered_set&gt;</a></tt></th><th colspan="2"><tt><a href="/&lt;unordered_map&gt;">&lt;unordered_map&gt;</a></tt></th></tr>
<tr><td colspan="2">Members</td><th><a href="/set">set</a></th><th><a href="/multiset">multiset</a></th><th><a href="/map">map</a></th><th><a href="/multimap">multimap</a></th><th><a href="/unordered_set">unordered_set</a></th><th><a href="/unordered_multiset">unordered_multiset</a></th><th><a href="/unordered_map">unordered_map</a></th><th><a href="/unordered_multimap">unordered_multimap</a></th></tr>
<tr><td rowspan="3"> </td><td><i>constructor</i></td><td class="cpp98"><a href="/set::set">set</a></td><td class="cpp98"><a href="/multiset::multiset">multiset</a></td><td class="cpp98"><a href="/map::map">map</a></td><td class="cpp98"><a href="/multimap::multimap">multimap</a></td><td class="cpp11"><a href="/unordered_set::unordered_set">unordered_set</a></td><td class="cpp11"><a href="/unordered_multiset::unordered_multiset">unordered_multiset</a></td><td class="cpp11"><a href="/unordered_map::unordered_map">unordered_map</a></td><td class="cpp11"><a href="/unordered_multimap::unordered_multimap">unordered_multimap</a></td></tr>
<tr><td><i>destructor</i></td><td class="cpp98"><a href="/set::~set">~set</a></td><td class="cpp98"><a href="/multiset::~multiset">~multiset</a></td><td class="cpp98"><a href="/map::~map">~map</a></td><td class="cpp98"><a href="/multimap::~multimap">~multimap</a></td><td class="cpp11"><a href="/unordered_set::~unordered_set">~unordered_set</a></td><td class="cpp11"><a href="/unordered_multiset::~unordered_multiset">~unordered_multiset</a></td><td class="cpp11"><a href="/unordered_map::~unordered_map">~unordered_map</a></td><td class="cpp11"><a href="/unordered_multimap::~unordered_multimap">~unordered_multimap</a></td></tr>
<tr><td><i>assignment</i></td><td class="cpp98"><a href="/set::operator=">operator=</a></td><td class="cpp98"><a href="/multiset::operator=">operator=</a></td><td class="cpp98"><a href="/map::operator=">operator=</a></td><td class="cpp98"><a href="/multimap::operator=">operator=</a></td><td class="cpp11"><a href="/unordered_set::operator=">operator=</a></td><td class="cpp11"><a href="/unordered_multiset::operator=">operator=</a></td><td class="cpp11"><a href="/unordered_map::operator=">operator=</a></td><td class="cpp11"><a href="/unordered_multimap::operator=">operator=</a></td></tr>
<tr><td rowspan="4">iterators</td><td><tt>begin</tt></td><td class="cpp98"><a href="/set::begin">begin</a></td><td class="cpp98"><a href="/multiset::begin">begin</a></td><td class="cpp98"><a href="/map::begin">begin</a></td><td class="cpp98"><a href="/multimap::begin">begin</a></td><td class="cpp11"><a href="/unordered_set::begin">begin</a></td><td class="cpp11"><a href="/unordered_multiset::begin">begin</a></td><td class="cpp11"><a href="/unordered_map::begin">begin</a></td><td class="cpp11"><a href="/unordered_multimap::begin">begin</a></td></tr>
<tr><td><tt>end</tt></td><td class="cpp98"><a href="/set::end">end</a></td><td class="cpp98"><a href="/multiset::end">end</a></td><td class="cpp98"><a href="/map::end">end</a></td><td class="cpp98"><a href="/multimap::end">end</a></td><td class="cpp11"><a href="/unordered_set::end">end</a></td><td class="cpp11"><a href="/unordered_multiset::end">end</a></td><td class="cpp11"><a href="/unordered_map::end">end</a></td><td class="cpp11"><a href="/unordered_multimap::end">end</a></td></tr>
<tr><td><tt>rbegin</tt></td><td class="cpp98"><a href="/set::rbegin">rbegin</a></td><td class="cpp98"><a href="/multiset::rbegin">rbegin</a></td><td class="cpp98"><a href="/map::rbegin">rbegin</a></td><td class="cpp98"><a href="/multimap::rbegin">rbegin</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>rend</tt></td><td class="cpp98"><a href="/set::rend">rend</a></td><td class="cpp98"><a href="/multiset::rend">rend</a></td><td class="cpp98"><a href="/map::rend">rend</a></td><td class="cpp98"><a href="/multimap::rend">rend</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td rowspan="4">const iterators</td><td><tt>cbegin</tt></td><td class="cpp11"><a href="/set::cbegin">cbegin</a></td><td class="cpp11"><a href="/multiset::cbegin">cbegin</a></td><td class="cpp11"><a href="/map::cbegin">cbegin</a></td><td class="cpp11"><a href="/multimap::cbegin">cbegin</a></td><td class="cpp11"><a href="/unordered_set::cbegin">cbegin</a></td><td class="cpp11"><a href="/unordered_multiset::cbegin">cbegin</a></td><td class="cpp11"><a href="/unordered_map::cbegin">cbegin</a></td><td class="cpp11"><a href="/unordered_multimap::cbegin">cbegin</a></td></tr>
<tr><td><tt>cend</tt></td><td class="cpp11"><a href="/set::cend">cend</a></td><td class="cpp11"><a href="/multiset::cend">cend</a></td><td class="cpp11"><a href="/map::cend">cend</a></td><td class="cpp11"><a href="/multimap::cend">cend</a></td><td class="cpp11"><a href="/unordered_set::cend">cend</a></td><td class="cpp11"><a href="/unordered_multiset::cend">cend</a></td><td class="cpp11"><a href="/unordered_map::cend">cend</a></td><td class="cpp11"><a href="/unordered_multimap::cend">cend</a></td></tr>
<tr><td><tt>crbegin</tt></td><td class="cpp11"><a href="/set::crbegin">crbegin</a></td><td class="cpp11"><a href="/multiset::crbegin">crbegin</a></td><td class="cpp11"><a href="/map::crbegin">crbegin</a></td><td class="cpp11"><a href="/multimap::crbegin">crbegin</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>crend</tt></td><td class="cpp11"><a href="/set::crend">crend</a></td><td class="cpp11"><a href="/multiset::crend">crend</a></td><td class="cpp11"><a href="/map::crend">crend</a></td><td class="cpp11"><a href="/multimap::crend">crend</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td rowspan="4">capacity</td><td><tt>size</tt></td><td class="cpp98"><a href="/set::size">size</a></td><td class="cpp98"><a href="/multiset::size">size</a></td><td class="cpp98"><a href="/map::size">size</a></td><td class="cpp98"><a href="/multimap::size">size</a></td><td class="cpp11"><a href="/unordered_set::size">size</a></td><td class="cpp11"><a href="/unordered_multiset::size">size</a></td><td class="cpp11"><a href="/unordered_map::size">size</a></td><td class="cpp11"><a href="/unordered_multimap::size">size</a></td></tr>
<tr><td><tt>max_size</tt></td><td class="cpp98"><a href="/set::max_size">max_size</a></td><td class="cpp98"><a href="/multiset::max_size">max_size</a></td><td class="cpp98"><a href="/map::max_size">max_size</a></td><td class="cpp98"><a href="/multimap::max_size">max_size</a></td><td class="cpp11"><a href="/unordered_set::max_size">max_size</a></td><td class="cpp11"><a href="/unordered_multiset::max_size">max_size</a></td><td class="cpp11"><a href="/unordered_map::max_size">max_size</a></td><td class="cpp11"><a href="/unordered_multimap::max_size">max_size</a></td></tr>
<tr><td><tt>empty</tt></td><td class="cpp98"><a href="/set::empty">empty</a></td><td class="cpp98"><a href="/multiset::empty">empty</a></td><td class="cpp98"><a href="/map::empty">empty</a></td><td class="cpp98"><a href="/multimap::empty">empty</a></td><td class="cpp11"><a href="/unordered_set::empty">empty</a></td><td class="cpp11"><a href="/unordered_multiset::empty">empty</a></td><td class="cpp11"><a href="/unordered_map::empty">empty</a></td><td class="cpp11"><a href="/unordered_multimap::empty">empty</a></td></tr>
<tr><td><tt>reserve</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::reserve">reserve</a></td><td class="cpp11"><a href="/unordered_multiset::reserve">reserve</a></td><td class="cpp11"><a href="/unordered_map::reserve">reserve</a></td><td class="cpp11"><a href="/unordered_multimap::reserve">reserve</a></td></tr>
<tr><td rowspan="2">element access</td><td><tt>at</tt></td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/map::at">at</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_map::at">at</a></td><td class="none"> </td></tr>
<tr><td><tt>operator[]</tt></td><td class="none"> </td><td class="none"> </td><td class="cpp98"><a href="/map::operator[]">operator[]</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_map::operator[]">operator[]</a></td><td class="none"> </td></tr>
<tr><td rowspan="6">modifiers</td><td><tt>emplace</tt></td><td class="cpp11"><a href="/set::emplace">emplace</a></td><td class="cpp11"><a href="/multiset::emplace">emplace</a></td><td class="cpp11"><a href="/map::emplace">emplace</a></td><td class="cpp11"><a href="/multimap::emplace">emplace</a></td><td class="cpp11"><a href="/unordered_set::emplace">emplace</a></td><td class="cpp11"><a href="/unordered_multiset::emplace">emplace</a></td><td class="cpp11"><a href="/unordered_map::emplace">emplace</a></td><td class="cpp11"><a href="/unordered_multimap::emplace">emplace</a></td></tr>
<tr><td><tt>emplace_hint</tt></td><td class="cpp11"><a href="/set::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/multiset::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/map::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/multimap::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/unordered_set::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/unordered_multiset::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/unordered_map::emplace_hint">emplace_hint</a></td><td class="cpp11"><a href="/unordered_multimap::emplace_hint">emplace_hint</a></td></tr>
<tr><td><tt>insert</tt></td><td class="cpp98"><a href="/set::insert">insert</a></td><td class="cpp98"><a href="/multiset::insert">insert</a></td><td class="cpp98"><a href="/map::insert">insert</a></td><td class="cpp98"><a href="/multimap::insert">insert</a></td><td class="cpp11"><a href="/unordered_set::insert">insert</a></td><td class="cpp11"><a href="/unordered_multiset::insert">insert</a></td><td class="cpp11"><a href="/unordered_map::insert">insert</a></td><td class="cpp11"><a href="/unordered_multimap::insert">insert</a></td></tr>
<tr><td><tt>erase</tt></td><td class="cpp98"><a href="/set::erase">erase</a></td><td class="cpp98"><a href="/multiset::erase">erase</a></td><td class="cpp98"><a href="/map::erase">erase</a></td><td class="cpp98"><a href="/multimap::erase">erase</a></td><td class="cpp11"><a href="/unordered_set::erase">erase</a></td><td class="cpp11"><a href="/unordered_multiset::erase">erase</a></td><td class="cpp11"><a href="/unordered_map::erase">erase</a></td><td class="cpp11"><a href="/unordered_multimap::erase">erase</a></td></tr>
<tr><td><tt>clear</tt></td><td class="cpp98"><a href="/set::clear">clear</a></td><td class="cpp98"><a href="/multiset::clear">clear</a></td><td class="cpp98"><a href="/map::clear">clear</a></td><td class="cpp98"><a href="/multimap::clear">clear</a></td><td class="cpp11"><a href="/unordered_set::clear">clear</a></td><td class="cpp11"><a href="/unordered_multiset::clear">clear</a></td><td class="cpp11"><a href="/unordered_map::clear">clear</a></td><td class="cpp11"><a href="/unordered_multimap::clear">clear</a></td></tr>
<tr><td><tt>swap</tt></td><td class="cpp98"><a href="/set::swap">swap</a></td><td class="cpp98"><a href="/multiset::swap">swap</a></td><td class="cpp98"><a href="/map::swap">swap</a></td><td class="cpp98"><a href="/multimap::swap">swap</a></td><td class="cpp11"><a href="/unordered_set::swap">swap</a></td><td class="cpp11"><a href="/unordered_multiset::swap">swap</a></td><td class="cpp11"><a href="/unordered_map::swap">swap</a></td><td class="cpp11"><a href="/unordered_multimap::swap">swap</a></td></tr>
<tr><td rowspan="5">operations</td><td><tt>count</tt></td><td class="cpp98"><a href="/set::count">count</a></td><td class="cpp98"><a href="/multiset::count">count</a></td><td class="cpp98"><a href="/map::count">count</a></td><td class="cpp98"><a href="/multimap::count">count</a></td><td class="cpp11"><a href="/unordered_set::count">count</a></td><td class="cpp11"><a href="/unordered_multiset::count">count</a></td><td class="cpp11"><a href="/unordered_map::count">count</a></td><td class="cpp11"><a href="/unordered_multimap::count">count</a></td></tr>
<tr><td><tt>find</tt></td><td class="cpp98"><a href="/set::find">find</a></td><td class="cpp98"><a href="/multiset::find">find</a></td><td class="cpp98"><a href="/map::find">find</a></td><td class="cpp98"><a href="/multimap::find">find</a></td><td class="cpp11"><a href="/unordered_set::find">find</a></td><td class="cpp11"><a href="/unordered_multiset::find">find</a></td><td class="cpp11"><a href="/unordered_map::find">find</a></td><td class="cpp11"><a href="/unordered_multimap::find">find</a></td></tr>
<tr><td><tt>equal_range</tt></td><td class="cpp98"><a href="/set::equal_range">equal_range</a></td><td class="cpp98"><a href="/multiset::equal_range">equal_range</a></td><td class="cpp98"><a href="/map::equal_range">equal_range</a></td><td class="cpp98"><a href="/multimap::equal_range">equal_range</a></td><td class="cpp11"><a href="/unordered_set::equal_range">equal_range</a></td><td class="cpp11"><a href="/unordered_multiset::equal_range">equal_range</a></td><td class="cpp11"><a href="/unordered_map::equal_range">equal_range</a></td><td class="cpp11"><a href="/unordered_multimap::equal_range">equal_range</a></td></tr>
<tr><td><tt>lower_bound</tt></td><td class="cpp98"><a href="/set::lower_bound">lower_bound</a></td><td class="cpp98"><a href="/multiset::lower_bound">lower_bound</a></td><td class="cpp98"><a href="/map::lower_bound">lower_bound</a></td><td class="cpp98"><a href="/multimap::lower_bound">lower_bound</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>upper_bound</tt></td><td class="cpp98"><a href="/set::upper_bound">upper_bound</a></td><td class="cpp98"><a href="/multiset::upper_bound">upper_bound</a></td><td class="cpp98"><a href="/map::upper_bound">upper_bound</a></td><td class="cpp98"><a href="/multimap::upper_bound">upper_bound</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td rowspan="5">observers</td><td><tt>get_allocator</tt></td><td class="cpp98"><a href="/set::get_allocator">get_allocator</a></td><td class="cpp98"><a href="/multiset::get_allocator">get_allocator</a></td><td class="cpp98"><a href="/map::get_allocator">get_allocator</a></td><td class="cpp98"><a href="/multimap::get_allocator">get_allocator</a></td><td class="cpp11"><a href="/unordered_set::get_allocator">get_allocator</a></td><td class="cpp11"><a href="/unordered_multiset::get_allocator">get_allocator</a></td><td class="cpp11"><a href="/unordered_map::get_allocator">get_allocator</a></td><td class="cpp11"><a href="/unordered_multimap::get_allocator">get_allocator</a></td></tr>
<tr><td><tt>key_comp</tt></td><td class="cpp98"><a href="/set::key_comp">key_comp</a></td><td class="cpp98"><a href="/multiset::key_comp">key_comp</a></td><td class="cpp98"><a href="/map::key_comp">key_comp</a></td><td class="cpp98"><a href="/multimap::key_comp">key_comp</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>value_comp</tt></td><td class="cpp98"><a href="/set::value_comp">value_comp</a></td><td class="cpp98"><a href="/multiset::value_comp">value_comp</a></td><td class="cpp98"><a href="/map::value_comp">value_comp</a></td><td class="cpp98"><a href="/multimap::value_comp">value_comp</a></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td></tr>
<tr><td><tt>key_eq</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::key_eq">key_eq</a></td><td class="cpp11"><a href="/unordered_multiset::key_eq">key_eq</a></td><td class="cpp11"><a href="/unordered_map::key_eq">key_eq</a></td><td class="cpp11"><a href="/unordered_multimap::key_eq">key_eq</a></td></tr>
<tr><td><tt>hash_function</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::hash_function">hash_function</a></td><td class="cpp11"><a href="/unordered_multiset::hash_function">hash_function</a></td><td class="cpp11"><a href="/unordered_map::hash_function">hash_function</a></td><td class="cpp11"><a href="/unordered_multimap::hash_function">hash_function</a></td></tr>
<tr><td rowspan="4">buckets</td><td><tt>bucket</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::bucket">bucket</a></td><td class="cpp11"><a href="/unordered_multiset::bucket">bucket</a></td><td class="cpp11"><a href="/unordered_map::bucket">bucket</a></td><td class="cpp11"><a href="/unordered_multimap::bucket">bucket</a></td></tr>
<tr><td><tt>bucket_count</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::bucket_count">bucket_count</a></td><td class="cpp11"><a href="/unordered_multiset::bucket_count">bucket_count</a></td><td class="cpp11"><a href="/unordered_map::bucket_count">bucket_count</a></td><td class="cpp11"><a href="/unordered_multimap::bucket_count">bucket_count</a></td></tr>
<tr><td><tt>bucket_size</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::bucket_size">bucket_size</a></td><td class="cpp11"><a href="/unordered_multiset::bucket_size">bucket_size</a></td><td class="cpp11"><a href="/unordered_map::bucket_size">bucket_size</a></td><td class="cpp11"><a href="/unordered_multimap::bucket_size">bucket_size</a></td></tr>
<tr><td><tt>max_bucket_count</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::max_bucket_count">max_bucket_count</a></td><td class="cpp11"><a href="/unordered_multiset::max_bucket_count">max_bucket_count</a></td><td class="cpp11"><a href="/unordered_map::max_bucket_count">max_bucket_count</a></td><td class="cpp11"><a href="/unordered_multimap::max_bucket_count">max_bucket_count</a></td></tr>
<tr><td rowspan="3">hash policy</td><td><tt>rehash</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::rehash">rehash</a></td><td class="cpp11"><a href="/unordered_multiset::rehash">rehash</a></td><td class="cpp11"><a href="/unordered_map::rehash">rehash</a></td><td class="cpp11"><a href="/unordered_multimap::rehash">rehash</a></td></tr>
<tr><td><tt>load_factor</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::load_factor">load_factor</a></td><td class="cpp11"><a href="/unordered_multiset::load_factor">load_factor</a></td><td class="cpp11"><a href="/unordered_map::load_factor">load_factor</a></td><td class="cpp11"><a href="/unordered_multimap::load_factor">load_factor</a></td></tr>
<tr><td><tt>max_load_factor</tt></td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="none"> </td><td class="cpp11"><a href="/unordered_set::max_load_factor">max_load_factor</a></td><td class="cpp11"><a href="/unordered_multiset::max_load_factor">max_load_factor</a></td><td class="cpp11"><a href="/unordered_map::max_load_factor">max_load_factor</a></td><td class="cpp11"><a href="/unordered_multimap::max_load_factor">max_load_factor</a></td></tr>
</table>    

<br>
二、迭代器

>    類似指標的功能
>    
>    只有vector與deque支援隨機的迭代器
>    
>    list、set、multiset、map與multimap支援雙向的迭代器
>    
>    配接器stack、queue與priority_queue不支援迭代器的使用

The properties of each iterator category are:<br>
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

<br>
三、演算法

>    提供搜尋、排序與比較等功能
>   
>    header <algorithm>

References:
1. https://www.cplusplus.com/reference/stl/
2. https://sites.google.com/view/zsgititit/home/jin-jiec-cheng-shi-she-ji/stl

