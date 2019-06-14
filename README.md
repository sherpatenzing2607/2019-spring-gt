# Graph Theory Project(Chinese Postman Problem)
This repository contains the implementation of Brute Force Algorithm, which tries to solve a famous mathematical problem called the "Chinese Postman Problem". 


## Compile and Run Instruction

1. Run the makefile.
2. Execute the execuatble file obtained from Step 1.


## Project Description

Brute Force Algorithm is used in this code to solve the Chinese Postman Problem. The implementation best works if the network is fully connected with all the possible edges weighted with values greater than 0. Also, the network does not work well is the node/vertice has a loop to it's own. 

The code provides full flexibilty to create the network by following the steps to enter the number and names of the nodes. Once all the nodes are set, you can add weights to each edge manually. Since the network implemenatation has considered birection edge, therefore user has to be carefull with entering the same value in both the direction(ie. If user enters the weight value from node A->B as 10, then user should also enter the weight value from node B->A as 10). If not done so, the network might not work well. Users also can view the nodes and the weights within the option given on the code. Working of the code is explained in detail below. 

The implementation uses Fake-Mininet API, whcih provides all the required classes to create the network. When the assignment of all the nodes and weights are done, user gets the sum of the minimum path weights by chosing the option 5 during the process.


## Brute Force Algorithm

Brute Force Algorithms refers to a programming style that does not include any shortcuts to improve performance, but instead relies on sheer computing power to try all possibilities until the solution to a problem is found.

A classic example is the Chinese Postman Problem. Suppose a postman needs to visit across 10 locations. How does one determine the order in which locations should be visited such that the total distance traveled is minimized? The brute force solution is simply to calculate the total distance for every possible route and then select the shortest one.


![Capture](https://user-images.githubusercontent.com/51750584/59503547-3e8a3780-8ed3-11e9-99f1-7ff81fa1cc81.PNG)

Let us consider that the weights of the edges on above network represents the distance in KM's.


The network image above is a reference image to exaplin the working of the Brute Force Algorithm. 

Let us assume that node A is the starting point and also the point where the postman should return. Now, the algorithm will traverse all the possible paths that will start at "A" and will end at "A". Then it will add all the path weight value for each walk traversing all the edges. The result will be the walk that has the least total of weight values during the course of Traversing. Follwing is the illustration of the same:

A -> B -> C -> D -> A  = 18

A -> B -> D -> C -> A  = 25

A -> C -> B -> D -> A  = 15

A -> C -> D -> B -> A  = 25

A -> D -> C -> B -> A  = 18

A -> D -> B -> C -> A  = 15

From the above path, we see that the least path that needs to be taken by the postman would be with the weight value of 15(or 15KM's).

 
## Working of Code

After sucessfully executing the code, the user will be prompted with the following screen:
![Enter Number of nodes](https://user-images.githubusercontent.com/51750584/59510870-67b4c300-8ee7-11e9-9f97-4678318e6e93.PNG)

First, the user need to specify to the total number of nodes/vertices of the network.

Once the number of the nodes are entered, user will be provided with six option as shown on the screenshot. Choose '1' to enter the first or the starting node. Keep repeating the steps until you finish adding all the nodes.  

The Welcome Text "Here Are Total 4 Edge" on the screen shot shows that you have entered total of 4 nodes, this count will keep decreasing untill you add all the nodes and the number will become '0'.

![nodes display](https://user-images.githubusercontent.com/51750584/59511215-4c968300-8ee8-11e9-8571-9974ebc62075.PNG)

Choose option (2) to display all the nodes in case you want to verify.

![edges entry](https://user-images.githubusercontent.com/51750584/59511333-8ff0f180-8ee8-11e9-8d2e-3ce0f93f281e.PNG)

Now, you can start assigning the weights to the edges. Choose option (3) to do so. Once you have opted for option (3), you will be prompted to enter the starting(head) node, hit 'enter' and you will be prompted to enter the secong(tail) node of the edge, again hit 'enter' and now you need to specify the weight that you want to assign to this particular edge. 

Note that the implementation is for bidirectional edges, therefore you have to manually add the same weight in both directions(ie. If user enters the weight value from node A->B as 10, then user should also enter the weight value from node B->A as 10). Fail to do so, and the algorithm might not ouput you the desired result.

Keep repeating the steps until you have assigned weights to all the edges. As mentioned earlier, the network has to be fully connected in order for the algorithm to work well.

![edges display](https://user-images.githubusercontent.com/51750584/59511747-a8add700-8ee9-11e9-9a0d-d3f639e2edd1.PNG)

Choose option (4) to dislpay all the edges to cross check. If any edge is not assigned as intended, you can always overwrite it.

![result](https://user-images.githubusercontent.com/51750584/59511855-f0ccf980-8ee9-11e9-9484-8c425961701e.PNG)

### All Set???
If so, then its time to find out the shortest path in the network. Choose option (5) and it will display the sum of the weights of the shortest path covering all the nodes as demonstrated above in the section of "Brute Force Algorithm". 

In some cases the result might show a negative(-) sign, please ignore it. 

Hit option (6) to end!!!!!!
