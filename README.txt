Question A:
	Compile:
		g++ -o lab3 main.cpp
	Execute:
		./lab3

Question B:

SIZE=1000
--------------------------------------------------
Script started on 2016年04月05日 (週二) 03時08分49秒
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ ./lab3B
Enter Size : 1000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0 seconds
v1/v2 are the same.
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ exit

Script done on 2016年04月05日 (週二) 03時09分01秒
--------------------------------------------------

SIZE=10000
--------------------------------------------------
Script started on 2016年04月05日 (週二) 03時10分13秒
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ ./lab3B
Enter Size : 10000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 1.28 seconds
v1/v2 are the same.
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ exit

Script done on 2016年04月05日 (週二) 03時10分37秒
--------------------------------------------------

SIZE=100000
--------------------------------------------------
Script started on 2016年04月05日 (週二) 03時10分44秒
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ ./lab3B[3Pexitgit push[4Pexit./lab3B
Enter Size : 100000
sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 128.57 seconds
v1/v2 are the same.
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ exit

Script done on 2016年04月05日 (週二) 03時22分12秒
--------------------------------------------------

SIZE=1000000
--------------------------------------------------
Script started on 2016年04月05日 (週二) 03時25分03秒
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ ./10[K[Klab3B
Enter Size : 1000000
sort(): 0.52 seconds
v1/v2 are different.
^C
]0;F74046056@2016cpp: ~/lab3[01;32mF74046056@2016cpp[00m:[01;34m~/lab3[00m$ exit

Script done on 2016年04月05日 (週二) 11時11分14秒
--------------------------------------------------

	Explanation:
		在SIZE=100000，理論上兩者複雜度的倍率=n^2/nlog(n)=6000(大約)
		但實際上只有3200倍
		可見Insertion Sort並不是每次都會碰上最糟情況(n^2)，這次比理論快一些
		在SIZE=1000000，理論上兩者複雜度的倍率=n^2/nlog(n)=50000(大約)
		最糟的情況會跑7個多小時
		還要在加上程式中比對vector的時間
		因此沒有時間跑完

		這次實驗觀察到複雜度(n^2)在大量排序時效率非常低下
		寫起來簡單，但跑過一次之後應該也不太想用了

