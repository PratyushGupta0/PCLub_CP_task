John is the commander of an army battalion .In front of him is a mountain range containing 'n' mountains. All of the mountains happen to have distinct heights from
to 'n' inclusive.In his battalion there are two types of troops, let us say X and Y. And he has been given certain orders by the high command, which are as follows:

1) The troops of type X must occupy a strong point. A strong point is defined as a mountain which is higher than whatever neighbours it has. If it has two 
   neighbours , it must be higher than both of them, and if it has just a single neighbour(the mountain is at the ends of the mountain range) , it must be higher 
   than its neighbour.
  
2) The troops of type Y are block a weak point.A weak point is defined as a mountain which is lower than whatever neighbours it has. If it has two 
   neighbours , it must be lower than both of them, and if it has just a single neighbour(the mountain is at the ends of the mountain range) , it must be lower 
   than its neighbour.
 It is possible that both the X and Y troops are sent to the same position.
John only knows that the range has n mountains of distinct heights ranging from 1 to 'n' inclusive. To get information about the mountain heights , John can ask the
high command queries over the communication line. However the lines are damaged due to bad weather and he can only ask a single query at a time. In every query , he asks the height of one of the mountains in the range. Help John with sending his troops to the right places.

**Input**
The first line contains a number 't' the number of testcases. 1<=t<=100,000.
In the t subsequent lines , there will be a number 'n' in each line , denoting the number of mountains in that range.  100<=n<=1e10.

**Queries**
Fors asking queries you must output the following sequence :
? index
where index in the number of the mountain whose height you are querying. The response to this query will be a number denoting the height of the mountain. You can ask at most 300 queries for any testcase.

**Output**
You must output the location of the minima before the maxima. To output the minima, you should output:
A index
To output the maxima , you should output
B index.
Every query and output must be on a separate line. 

Example input:
1

3

Example output:            Interactor output:
? 1                             3

? 2                             1

? 3                             2

A 2

B 1

Here index 1 and 3 are a strong point so we output one of them and index 2 is a weak point.
