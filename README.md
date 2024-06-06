## Google's Algorithmic Rhythm: Exploring Smart Data Structures

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Jiya Palrecha</dd>
<dt>SRN</dt>
<dd>01fe21bcs094</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Portfolio Topic/Domain</dt>
<dd>Google</dd>

</dl>

<br>
> A stride towards enhanced Google service management.
>


<br>

This page hosts:

1. Introduction
2. Objectives/Need of Portfolio
3. Business Use Cases/Functionalities and the Corresponding Suggested Algorithms and Data Structures


# Introduction:
### Leveraging Data Structures and Algorithms in Google's Ecosystem

In today's digital age, the **efficiency** and **effectiveness** of technology services can be significantly enhanced through the strategic application of **data structures** and **algorithms**. This portfolio project delves into the core functionalities of Google's diverse services, applying the theoretical knowledge and practical skills acquired from courses in **Data Structures and Algorithms (DSA)** and **Algorithmic Problem Solving (APS)**.

By leveraging advanced algorithmic techniques and innovative data structures, this project aims to propose solutions to real-world business challenges. From refining search engine algorithms for improved relevance and speed to optimizing route planning in Google Maps, the potential for enhancement is vast.

This portfolio is a testament to the transformative power of algorithms within Google's ecosystem. Each **business use case** explored will demonstrate how thoughtful algorithmic problem-solving can streamline processes, enhance user experiences, and drive technological innovation. Join me in this exploration as we bridge the gap between theoretical knowledge and practical application, showcasing the profound impact of data structures and algorithms on modern digital services.

<br>


# Objectives/Need of Portfolio
1. Apply advanced algorithms and data structures to enhance the speed and efficiency of Google's services.
   
2. Demonstrate the real-world use of concepts learned in Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses.
   
3. Develop innovative solutions to improve user experiences and drive technological advancements within Google's ecosystem.
<br>


# Algorithms and the corresponding business use cases :

### 1. Max Flow Algorithms:

   - Google manages vast networks of servers and data centers to deliver its services. The max flow algorithm can be used to optimize network traffic flow, ensuring efficient data transmission and minimizing congestion.

   - Google's infrastructure relies on sophisticated routing and load balancing mechanisms to handle user requests. Max flow algorithms, such as **Karger's, Dinic's, and Ford-Fulkerson**, can assist in determining optimal routes and balancing the load across servers, improving system performance and reliability.

   - Google Cloud Platform (GCP) offers a range of services and resources to users. The max flow algorithm can be used to allocate resources effectively, ensuring that computational tasks are executed optimally and resource usage is maximized.
   
     [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/maxFlow.cpp){:target="_blank"}<br><br>





### 2. Shortest Path Algorithms:

**Dijkstra's Algorithm**: 
- Google Maps: Dijkstra's algorithm could be used to find the shortest path between two locations on a map. This is essential for providing accurate directions to users, considering factors such as traffic conditions, road closures, and distance.
- In Google's infrastructure, Dijkstra's algorithm can be employed to optimize network routing. This involves finding the shortest paths for data packets to travel between servers, data centers, and users, ensuring efficient and reliable network communication.
- Dijkstra's algorithm can aid in optimizing the delivery routes for products purchased through Google Shopping. By calculating the shortest paths between distribution centers, warehouses, and delivery destinations, Google can minimize shipping costs and delivery times, enhancing the shopping experience for users.

**Bellman-Ford Algorithm**:
- Bellman-Ford algorithm can be used in Google's self-driving car project for path planning. It helps in finding the shortest path from the car's current location to its destination while considering factors such as road conditions, traffic congestion, and safety measures.


**Floyd-Warshall Algorithm**:
- In Google's network infrastructure, the Floyd-Warshall algorithm can be used for network analysis and troubleshooting. It helps in identifying the shortest paths between all pairs of nodes in a network, facilitating efficient communication and resolving connectivity issues.
- Google's YouTube platform can utilize the Floyd-Warshall algorithm to optimize video streaming paths. By determining the shortest paths between servers and users, Google can ensure smooth and uninterrupted video playback, enhancing user experience.

[View Dijkstra's code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/dijkstra.cpp){:target="_blank"}<br>
[View Bellman-Ford code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/bellman_ford.cpp){:target="_blank"}<br>
[View Floyd-Warshall code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/floyd_warshall.cpp){:target="_blank"}<br><br>




### 3. **Assignment Problem**

- **Data Center Resource Allocation**: Google manages a vast network of data centers worldwide to support its services. The Assignment Problem can be utilized to optimize resource allocation within these data centers, such as assigning computing tasks to servers or balancing the load across different data center locations. This ensures efficient utilization of computing resources and minimizes latency for users accessing Google's services.

- **Ad Allocation in Google Ads**: Google's advertising platforms, such as Google Ads, rely on efficient allocation of ad placements to maximize revenue and user engagement. The Assignment Problem can help determine the optimal assignment of advertisements to available ad slots across websites, considering factors such as ad relevance, user preferences, and bidding strategies. This ensures that advertisers achieve their campaign objectives while providing value to users.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/jobAssignment.cpp){:target="_blank"}



### 4. **Segment Trees**

- **Range Query Optimization**:
  In Google's data storage and retrieval systems, such as databases and file systems, segment trees can optimize range query operations. For instance, in a document storage system like Google Drive, segment trees can efficiently handle queries related to retrieving or manipulating data within specific ranges, such as searching for documents created within a certain time frame or finding files within a particular size range.

- **Time-Series Data Analysis**:
  Google deals with vast amounts of time-series data across its services, including user activity logs, system performance metrics, and ad campaign analytics. Segment trees can be employed to perform range queries and aggregations on this data efficiently. For example, in Google Analytics, segment trees can facilitate queries that analyze website traffic trends over specific time intervals or identify peak usage periods.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SegmentTree.cpp)






### 5. **Tries**

- **Autocorrection**:
  Tries are commonly used in autocorrect systems, such as those implemented in Google Search, Gmail, or Google Docs. By organizing a dictionary of words into a trie structure, these systems can efficiently suggest and correct misspelled words as users type. As users enter text, the system navigates the trie to identify potential matches or corrections based on the entered prefix, offering relevant suggestions in real-time.

- **Autocomplete Suggestions**:
  Enhancing search functionality by providing predictive text suggestions as users type queries in Google Search. This improves user experience by helping users quickly find what they are looking for, reducing the time spent typing.

- **Spelling Correction**:
  Improving user experience by suggesting corrections for misspelled words in Google Docs or Gmail. Tries enable quick lookup and correction of words, enhancing document editing and email writing.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/Trie.cpp)

#### Variants of Tries and Their Applications in Google:

- **Radix Trie (Compact Trie)**: Radix trie is particularly useful for storing strings with common prefixes efficiently. It reduces space complexity by merging nodes with single children into a single node.In Google's domain, a radix trie can be used for storing and searching IP addresses in large-scale network infrastructure, such as in routing tables or in systems handling internet traffic.

- **Suffix Trie**:Suffix trie is commonly used in string processing tasks, especially for pattern matching, substring search, and text indexing.In Google Search, a suffix trie can be employed to index web pages efficiently. It helps in quickly retrieving relevant search results based on substring queries entered by users.
















7. **Fenwick Tree for Sum Query**: Data structure for efficiently computing prefix sums and answering range sum queries in an array, used in various applications including cumulative frequency tables. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/FenwickTree.cpp){:target="_blank"}<br><br>
8. **Persistent Segment Trees**: Data structure that allows for efficiently maintaining multiple versions of a dynamic array, used in problems requiring time travel or backtracking. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/PersistentSegmentTree.cpp){:target="_blank"}<br><br>
9. **Red-Black Trees**: Self-balancing binary search trees with guaranteed logarithmic time complexity for insertion, deletion, and search operations, commonly used in associative arrays and database indexing. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
10. **Rod Cutting Problem**: Optimization problem to maximize the value obtained by cutting a rod into pieces and selling them, used in resource allocation and inventory management. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
11. **Skip Lists**: Probabilistic data structure for maintaining a sorted list, providing efficient insertion, deletion, and search operations, used in fast search and indexing applications. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
12. **Edit Distance**: Dynamic programming algorithm for measuring the similarity between two strings by counting the minimum number of operations required to transform one string into the other, used in spell checking and DNA sequence alignment. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/editDistance.cpp){:target="_blank"}<br><br>
13. **Lookup Table**: Data structure for storing key-value pairs for efficient retrieval of values by keys, commonly used in database indexing and caching. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
14. **A* and Best First**: Search algorithms used for finding the shortest path or best solution in a graph or search space by intelligently prioritizing nodes based on heuristic information, commonly used in pathfinding and artificial intelligence. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
15. **Jump Game**: Algorithm for determining if it's possible to reach the last index of an array by jumping from index to index according to the values in the array, used in game development and optimization problems. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
16. **KD Trees**: Data structure for organizing points in a k-dimensional space for efficient nearest neighbor search and range queries, used in geometric and spatial data analysis. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
17. **Topological Sort**: Graph algorithms for ordering the vertices of a directed graph such that for every directed edge uv, vertex u comes before vertex v, and for identifying strongly connected subgraphs in a directed graph, commonly used in task scheduling and dependency resolution. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/topoSort.cpp){:target="_blank"}<br><br>
18. **Conway's Game of Life**: Cellular automaton simulation for studying the evolution of patterns from initial configurations of cells according to simple rules, used in simulation studies and modeling complex systems. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/conway.cpp){:target="_blank"}<br><br>
19. **Huffman Coding**: Lossless data compression algorithm for encoding variable-length symbols with variable-length codes based on their frequency of occurrence, used in file compression and transmission protocols. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/huffmann.cpp){:target="_blank"}<br><br>
20. **Traveling Salesman Problem (TSP)**: Combinatorial optimization problem to find the shortest possible route that visits each city exactly once and returns to the origin city, used in vehicle routing, logistics, and network design. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/tsp.cpp){:target="_blank"}<br><br>
21. **Knapsack Algorithms**: Optimization problems for selecting a subset of items to maximize value or minimize weight, used in resource allocation, budget planning, and inventory management. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
22. **Bridges/Articulation Points**: Graph algorithms for identifying critical edges or vertices whose removal would disconnect a graph or increase its number of connected components, used in network reliability analysis and fault tolerance. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
23. **Bloom Filters**: Probabilistic data structure for testing set membership with low memory footprint and constant time complexity, used in caching, spell checking, and network packet filtering. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
24. **Depth-First Search (DFS) and Breadth-First Search (BFS)**: Graph traversal algorithms for exploring or searching through graph or tree structures, used in network analysis, web crawling, and recommendation systems. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
25. **Hashing Algorithms**: Cryptographic techniques for generating fixed-size hash values from variable-size data, used in security protocols, data integrity checks, and authentication mechanisms. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/index){:target="_blank"}<br><br>
26. **Kruskal's Algorithm for MST**: Greedy algorithm for finding the minimum spanning tree (MST) of a connected, undirected graph. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/kruskalAlgoritm.c){:target="_blank"}<br><br>
27. **BST**: For data indexing, enabling efficient organization, search, and retrieval of data in different contexts. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/BST.c){:target="_blank"}<br><br>
28. **Strongly connected components**: For data indexing, enabling efficient organization, search, and retrieval of data in different contexts. [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SCC.cpp){:target="_blank"}<br><br>
