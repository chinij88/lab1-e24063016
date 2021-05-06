# AIC2021 Project1 - TPU

我是用modelsim撰寫本次 lab
因為我的modelsim不知道如何同時使用python 所以我是使用python先將binary 檔案 跑出來製作成input1/2/3去讀取
在makefile 本身也將python 部分的code 做修改拿掉  /testbench部分則是修改讀取檔案的內容
每次要進行測試時要修改src裡面的matrix define尺寸 或可直接將尺寸設計成9 9 9 9就可以將make test 1/2/3一次測完不用修改尺寸 

MONSTER我本身環境沒有進行測試 但是猜測應該可行 再請助教試看看
執行cycle數大概
code講解 我本身top 底下有4個 block  /tpu  buffer_a buffer_b  buffer_out

tpu本身內容我是寫 一個finite state machine  裡面有九個 A REG  九個B REG  test reg(存result)
16個Mac REG 拿來做乘和累加
```
STATE講解

parameter	s_reset=0,  //RESET STATE ==>把OUTPUT /REG 都歸0


	 	s_read_b=1, // ==> 設計內容為讀取K值 然後填進我們REG 因為我們每一排的REG都開了9個 所以如果> K值的部分就把它寫0 暫存在B 目前這樣我們就有達到 存取B之值 
                                並且B之值可以重複利用
					
		
		s_read_a=2, // ==> 設計內容為讀取K值 然後填進我們REG 因為我們每一排的REG都開了9個 所以如果> K值的部分就把它寫0 暫存在A 這樣我們就有達到 存取A之值
		                並且A之值可以重複利用
		
		s_compute=3,  // ==>設計16個MUL 把A/B用 ststolic array的方式餵進那16個mac  然後最後的結果 存進test reg  拿來暫存方便之後output不會流掉
    
            A1  A2  A3   A4
             ⇩   ⇩   ⇩   ⇩
     B1====> o   o   o   o
     B2====> o   o   o   o
     B3====> o   o   o   o
     B4====> o   o   o   o    
    
    
		s_delay=4,   //==>因為用來delay 一個cycle 順便把counter歸0 
    
		s_output=5;  //同時輸出餵index和值  從0開始慢慢增加index同時輸出不同的test
    
    
    功能上大致上是這樣
```
![image](https://github.com/AIC2021/project1-tpu-chinij88/blob/master/aic.png)