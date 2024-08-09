

## AlgoGoogle

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
(Click on each link to explore the sections ➡️)

1. [Introduction](#introduction) - Domain intro 🌱  
2. [Objectives](#objectives) - Goals and targets 🎯  
3. [📈 Business Use Cases ➡️ Algorithmic Solutions 🧩](#business-use-cases-and-mapping-algorithms)
4. [Use Case Insights and Efficiency Metrics](#use-case-and-efficiency-overview) - Efficiency metrics 📊  
5. [Key Learnings and Insights](#learnings-and-key-takeaways) - Key takeaways 🧠 



---

# 1.Introduction

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/Screenshot%202024-07-05%20141324.png?raw=true" alt="Google Infrastructure Screenshot">
  <br>
  [5] Google and the various services provided
  <br>
</p><br>


Google, a global technology leader, offers a wide range of services essential to daily life for billions of people. These include search engines, email, video sharing, cloud computing, document creation, file storage, Google Maps, and productivity apps. Understanding the scale and impact of Google’s services sets the stage for exploring how advanced data structures and algorithms can further enhance their performance and utility.
The services provided by Google include:

- **Google Search** 🌐: Search engine for finding information online.
- **Gmail** 📧: Email service for communication.
- **Google Drive** 💾: Cloud storage for files.
- **Google Maps** 🗺️: Mapping service for navigation.
- **YouTube** 📹: Video sharing platform.
- **Google Photos** 📷: Cloud-based service for photos and videos.
- **Google Docs, Sheets, Slides** 📄📊📝: Online productivity suite.
- **Google Calendar** 📅: Online calendar service.
- **Google Translate** 🌍: Translation service.
- **Google Chrome** 🌐: Web browser.
- **Google Ads** 💼: Advertising platform.
- **Google Cloud Platform (GCP)** ☁️: Cloud computing services.
- **Android** 📱: Mobile operating system.
- **Google Assistant** 🗣️: Virtual assistant.
- **Google Meet** 🎥: Video conferencing platform.
- **Google Classroom** 🎓: Educational platform.



### **Google Search**
**Google Search** is the heart of Google's ecosystem, holding **81.95%** of the global search engine market share as of January 2024 [1]. This dominance highlights the need for fast, relevant search algorithms.

### **YouTube**
**YouTube**, owned by Google, is the second most visited website globally, with over **2 billion** logged-in monthly users watching over **1 billion hours** of video daily [2]. The huge data volume requires smart algorithms for recommendations and content moderation.

### **Gmail**
**Gmail**, Google's email service, has more than **1.8 billion** active users worldwide [3]. This shows the need for efficient data management and strong security protocols to ensure quick, reliable email delivery while protecting user privacy [4].

### **Google Maps**
**Google Maps** is a leader in navigation services, projected to reach **$34.56 billion** by 2025. It serves over **1 billion** users monthly with real-time traffic updates and route optimization, relying on advanced algorithms to handle massive geographic data.

### **Google Cloud**
**Google Cloud** has grown significantly, capturing **9%** of the global cloud infrastructure market as of 2023 [5]. It provides solutions for data storage, machine learning, and enterprise applications, requiring efficient algorithms to ensure scalability and performance.

These statistics highlight the extensive reach and impact of Google’s services, making it an ideal domain for exploring the application of advanced data structures and algorithms to further enhance performance and user experience.

## Enhancing Google's Services with Algorithms

In today's digital age, the **efficiency** and **effectiveness** of technology services can be significantly enhanced through the strategic application of **data structures** and **algorithms**. This portfolio project explores the core functionalities of Google's diverse services, applying the theoretical knowledge and practical skills acquired from courses in **Data Structures and Algorithms (DSA)** and **Algorithmic Problem Solving (APS)**. By using advanced algorithmic techniques and innovative data structures, this project aims to propose solutions to real-world business challenges.

This portfolio demonstrates how algorithms can optimize Google’s services. Each example illustrates how smart problem-solving with algorithms can enhance operational smoothness. Join me in this exploration as we bridge the gap between theory and practice, highlighting the profound impact of data structures and algorithms on modern digital services. Additionally, each case includes a thorough performance analysis to evaluate effectiveness.



---
<br>
# 2.Objectives


1. To apply advanced algorithms and data structures to improve the speed and efficiency of Google’s services.
   
2. To demonstrate the real-world use of concepts learned in DSA and APS courses, focusing on design techniques and performance analysis.
   
3. To propose algorithms that enhance user experiences, solve market challenges, and maximize business benefits within Google's ecosystem.
<br><br><br>



---
<br>
# 3.Business Use Cases➡️Algorithmic Solutions


### 1. **Computation of Shortest Paths in Google Maps**

 
Google Maps: **Dijkstra's algorithm** can find the shortest path between two locations on a map. Essential for providing accurate directions to users, considering factors such as traffic conditions, road closures, and distance.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/1.gif?raw=true" style="width: 400px; height: auto;"  alt="Google Infrastructure">
  <br>
[6] Dijkstra's Algorithm for finding shortest paths in Google Maps
  <br>
</p><br>

Bellman-Ford Algorithm: **Bellman-Ford algorithm** can be used in Google's self-driving car project for path planning. It helps in finding the shortest path from the car's current location to its destination while considering factors such as road conditions, traffic congestion, and safety measures.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/bellman.gif?raw=true" style="width: 400px; height: auto;" alt="Google Infrastructure">
  <br>
  [7] Bellman-Ford Algorithm for safe route planning
  <br>
</p><br>

Floyd-Warshall Algorithm: In Google's network infrastructure, the **Floyd-Warshall** algorithm can be used for network analysis. It helps in identifying the shortest paths between all pairs of nodes in a network, facilitating efficient communication and resolving connectivity issues.(all pair shortest path)

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/floyd.gif?raw=true" alt="Google Infrastructure">
  <br>
  [8] Floyd-Warshall Algorithm for optimizing network paths in Google's infrastructure
  <br>
</p><br>


**Challenges:** Computing shortest paths considering traffic and road conditions.

**Market Benefits:** Accurate directions, optimized delivery routes, user time saved.

**Algorithms, Design Techniques, Performance Analysis:**
- **Dijkstra's Algorithm:** Greedy approach, Priority queue
  - Time Complexity: O((V + E) log V) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>
- **Bellman-Ford Algorithm:** Dynamic programming, Relaxation technique
  - Time Complexity: O(VE) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>
- **Floyd-Warshall Algorithm:** Dynamic programming, All-pairs shortest path
- Time Complexity: O(V<sup>3</sup>) where V is the number of vertices
- Space Complexity: O(V<sup>2</sup>) where V is the number of vertices


[View Dijkstra's code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/dijkstra.cpp){:target="_blank"}<br>
[View Bellman-Ford code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/bellman_ford.cpp){:target="_blank"}<br>
[View Floyd-Warshall code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/floyd_warshall.cpp){:target="_blank"}<br><br><br>



### 2. **PageRank and Web Crawling for Google Search Index**

 
Google Search uses the PageRank algorithm to rank web pages based on their importance, where depth-first search (DFS) and breadth-first search (BFS) play crucial roles in traversing the web graph. 

<div style="display: flex; justify-content: center;">
  <div style="margin-right: 20px;">
    <p align="center">
      <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/dfs.gif?raw=true" alt="DFS" style="width: 400px; height: auto;">
      <br>
      [17] DFS for crawling web pages
    </p>
  </div>
  <div>
    <p align="center">
      <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/bfs.gif?raw=true" alt="BFS" style="width: 400px; height: auto;">
      <br>
      [17] BFS for crawling web pages
    </p>
  </div>
</div>

DFS and BFS algorithms are fundamental to web crawling, a process by which search engines like Google discover and index web pages. **DFS and BFS** are used to traverse the interconnected network of web pages, following hyperlinks from one page to another to build a comprehensive index of the World Wide Web. By employing DFS and BFS strategies intelligently, Google can efficiently crawl and index billions of web pages, enabling users to find relevant information quickly and accurately through its search engine.

**Algorithms, Design Techniques, Performance Analysis:**
- **DFS:** Graph traversal based on stack
  - Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the graph
  - Space Complexity: O(V) for the stack used in DFS
- **BFS:** Graph traversal based on queue
  - Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the graph
  - Space Complexity: O(V) for the queue used in BFS

[View DFS code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/DFS.cpp){:target="_blank"}<br>
[View BFS code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/BFS.cpp){:target="_blank"}<br><br><br>



### 3. **Range Query Optimization**

 
In Google's data storage and retrieval systems, such as databases and file systems, **Segment trees** can optimize range query operations. For instance, in a document storage system like Google Drive, segment trees can efficiently handle queries related to retrieving or manipulating data within specific ranges, such as searching for documents created within a certain time frame or finding files within a particular size range.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/segment.gif?raw=true" style="width: 400px; height: auto;" alt="Google Infrastructure">
  <br>
  [10] Segment Trees optimizing data retrieval within specific ranges in Google's data systems
  <br>
</p><br>

**Challenges:** Efficient data retrieval within specific ranges.

**Market Benefits:** Faster data access, and improved query performance.

**Algorithms, Design Techniques, Performance Analysis:**
- **Segment Trees:** Divide and conquer, Hierarchical data structure
  - Time Complexity: O(log N) for both query and update operations, where N is the number of elements
  - Space Complexity: O(N) where N is the number of elements

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SegmentTree.cpp){:target="_blank"}<br><br><br>


### 4. **Scheduling Tasks in Data Centers**

 
Google's vast network of data centers relies on efficient task scheduling algorithms to manage computational workloads and optimize resource utilization. **Topological Sort** can be employed to schedule tasks and dependencies in directed acyclic graphs (DAGs), ensuring that tasks are executed in the correct order to meet deadlines, minimize latency, and maximize throughput.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/topo.gif?raw=true" alt="Google Infrastructure">
  <br>
  [13] Topological Sort optimizing task scheduling in Google's data centers
  <br>
</p><br>

**Challenges:** Efficient task scheduling and resource allocation.

**Market Benefits:** Improved resource utilization, minimized latency.

**Algorithms, Design Techniques, Performance Analysis:**
- **Topological Sort:** Directed acyclic graph (DAG), Depth-first search (DFS)
  - Time Complexity: O(V + E), where V is the number of vertices (tasks) and E is the number of edges (dependencies) in the DAG
  - Space Complexity: O(V + E) for storing the graph and additional structures

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/topoSort.cpp){:target="_blank"}<br><br><br>





### 5. **Autocomplete Suggestions**

 
Tries enhance search functionality by providing predictive text suggestions as users type queries in Google Search. Also known as **submission throttling**.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/submission throttling.gif?raw=true" alt="Google Infrastructure" >
  <br>
  [20] Auto-complete system using Trie data structure for efficient word suggestion.
  <br>
</p><br>


**Algorithms, Design Techniques, Performance Analysis:**
- **Tries:** Tree data structure, Prefix tree
  - Time Complexity: O(L) for insertion, deletion, and lookup operations, where L is the length of the key (typically a word)
  - Space Complexity: O(ALPHABET_SIZE * L) where ALPHABET_SIZE is the number of possible characters and L is the length of the key

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/Trie.cpp){:target="_blank"}<br><br><br>



### 6. **Identifying User Clusters Using Strongly Connected Components Algorithms**

 
By analyzing strongly connected components using algorithms like **Kosaraju's or Tarjan's**, Google can identify clusters of users who frequently interact with each other, indicating potential friendships or shared interests. This analysis can inform more accurate friend recommendations, helping users connect with others who are likely to share mutual interests or social connections.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/strong.gif?raw=true" alt="Google Infrastructure">
  <br>
  [27] Formation of strongly connected components(user clusters)
  <br>
</p><br>

- **Design Techniques**:
  - **Kosaraju's Algorithm**: Two-phase DFS (original and transposed graph).
  - **Tarjan's Algorithm**: Single DFS pass with backtracking.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[View code for Kosaraju's algo here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SCC.cpp){:target="_blank"}<br><br><br>





### 7. **A * and Best-First Algorithms for Route Optimizations in Google Maps**

 
**A * and Best-First** algorithms can be employed to find the most efficient routes between locations on Google Maps. By intelligently prioritizing nodes based on **heuristic** information such as distance, traffic conditions, and historical data, these algorithms can calculate optimal routes that minimize travel time and distance.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/a star.png?raw=true" style="width: 400px; height: auto;" alt="Google Infrastructure">
  <br>
  [11] A* and Best-First Algorithms for optimizing travel routes on Google Maps
  <br>
</p><br>


**Challenges:** Finding the most efficient routes between locations.

**Market Benefits:** Optimized travel time, and improved navigation.

**Algorithms, Design Techniques, Performance Analysis:**
- **A* Algorithm:** Heuristic-based search, Greedy approach
- **Best-First Search:** Heuristic-based search, Priority queue

**Performance Analysis:** Depends on the heuristic used.

[View code here](https://github.com/daancode/a-star){:target="_blank"}<br><br><br>




### 8. **Skip Lists in Search Engine Indexing**

 
Skip lists can be employed in search engine indexing systems to maintain sorted lists of web pages or documents based on relevance or other criteria. They enable quick insertion of new pages, deletion of outdated or irrelevant content, and efficient retrieval of search results based on ranking or relevance scores.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/skip.gif?raw=true" alt="Google Infrastructure">
  <br>
  [12] Skip Lists maintaining sorted lists for efficient search indexing at Google
<br>
</p><br>

**Challenges:** Efficiently maintaining and searching sorted lists.

**Market Benefits:** Faster search indexing, and improved query performance.

**Algorithms, Design Techniques, Performance Analysis:**
- **Skip Lists:** Probabilistic balancing, Layered linked lists
  - Time Complexity: O(log n) on average for search, insertion, and deletion, where n is the number of elements in the list
  - Space Complexity: O(n), where n is the number of elements in the skip list

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SkipList.cpp){:target="_blank"}<br><br><br>



### 9. **Spell Checking**

 
Edit distance algorithms can be used in spell-checking systems, where they help identify and correct misspelled words by suggesting replacements with the minimum number of edits required.

**Algorithms, Design Techniques, Performance Analysis:**
- **Edit Distance:** Dynamic programming
  - Time Complexity: O(m*n), where m and n are the lengths of the two strings being compared
  - Space Complexity: O(m*n), where m and n are the lengths of the two strings being compared

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/editDistance.cpp){:target="_blank"}<br><br><br>


### 10. **Allocation of resources in data centers**

 
Google manages a vast network of data centers worldwide to support its services. The **Assignment Problem** can be utilized to optimize resource allocation within these data centers, such as assigning computing tasks to servers or balancing the load across different data center locations.

**Challenges:** Effective allocation of resources.

**Market Benefits:** Improved resource management, and reduced operational costs.

**Algorithms, Design Techniques, Performance Analysis::**
- **Assignment Problem:** Optimization technique
- Time Complexity: O(2<sup>N</sup> * N) where N is the number of tasks or resources
- Space Complexity: O(N<sup>2</sup>) where N is the number of tasks or resources

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/jobAssignment.cpp){:target="_blank"}
<br><br><br>



### 11. **Content Recommendation Systems**

 
Within Google's ecosystem of products and services, **A * and Best-First** algorithms can power content recommendation systems by intelligently prioritizing and recommending relevant content to users based on their preferences, search history, and behavior patterns. These algorithms can enhance user engagement and satisfaction by delivering personalized and targeted recommendations.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/content.gif?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [14] Recommendation Systems
  <br>
</p><br>


**Challenges:** Delivering personalized and relevant content.

**Market Benefits:** Enhanced user engagement, and increased content consumption.

**Algorithms, Design Techniques, Performance Analysis:**
- **A* Algorithm:** Heuristic-based search, Greedy approach
- **Best-First Search:** Heuristic-based search, Priority queue

**Performance Analysis:** Depends on the heuristic used.

[View code here](https://github.com/daancode/a-star){:target="_blank"}<br><br><br>


### 12. **Dependency Resolution in Software Development**

 
Topological Sort algorithms play a crucial role in resolving dependencies between software modules and libraries within Google's software development processes. Helps determine the correct order of compilation or deployment based on inter-module dependencies.

**Challenges:** Efficient dependency resolution.

**Market Benefits:** Smooth integration, robust software products.

**Algorithms, Design Techniques, Performance Analysis:**
- **Topological Sort:** Directed acyclic graph (DAG), Depth-first search (DFS)
  - Time Complexity: O(V + E), where V is the number of vertices (tasks) and E is the number of edges (dependencies) in the DAG
  - Space Complexity: O(V + E) for storing the graph and additional structures

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/topoSort.cpp){:target="_blank"}<br><br><br>

### 13. **Analyzing User Behavior and Engagement Patterns**

 
In online services such as Google Search, YouTube, and Gmail, understanding user behavior and engagement patterns is crucial for enhancing user experiences and personalization. The **Conway's Game of Life** can be applied to simulate and analyze user interactions, content consumption patterns, and community dynamics. By modeling user engagement, content popularity, and social interactions, Google can optimize content recommendations, ad targeting strategies, and platform design to serve user needs and preferences better.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/game.gif?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [15]Conway's Game of Life simulation can be used to model user interactions, content consumption patterns, and social dynamics for optimizing Google's services.
  <br>
</p><br>


**Challenges:** Understanding complex user interactions.

**Market Benefits:** Enhanced personalization, better user engagement.

**Algorithms, Design Techniques, Performance Analysis:**
- **Game of Life:** Cellular automaton, Emergent behavior modeling
  - Time Complexity: O(n * m), where n and m are the dimensions of the grid (typically used in simulations)
  - Space Complexity: O(n * m), for storing the grid

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/conway.cpp){:target="_blank"}<br><br><br>


### 14. **Data Compression in Google's Infrastructure using Huffman Coding**

 
Google's infrastructure deals with vast amounts of data generated and transmitted across its services and platforms. **Huffman Coding** can be employed for efficient data compression in storage systems, file formats, and communication protocols. By encoding data with variable-length codes based on frequency distributions, Google can reduce storage requirements, minimize bandwidth usage, and improve data transfer speeds, leading to faster access times and reduced network congestion.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/huffman.gif?raw=true" alt="Google Infrastructure" style="width: 600px; height: auto;">
  <br>
  [16]Huffman Coding for efficient data compression in Google's storage systems
  <br>
</p><br>


**Challenges:** Efficient data compression and storage.

**Market Benefits:** Reduced storage costs, and improved data transfer speeds.

**Algorithms, Design Techniques, Performance Analysis:**
- **Huffman Coding:** Greedy approach, Variable-length encoding
  - Time Complexity: O(n log n) for building the Huffman tree, where n is the number of symbols
  - Space Complexity: O(n) for storing the Huffman tree and encoded data

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/huffmann.cpp){:target="_blank"}<br><br><br>


### 15. **Traveling Salesman Problem for Route Optimization**

 
Google Maps: The **TSP** algorithm can be used to find the most efficient route for traveling salespeople visiting multiple locations. It minimizes travel distance and time, helping businesses and individuals optimize their travel plans and logistics. Google's delivery and logistics services, such as Google Maps and Google Shopping, rely on efficient route planning and optimization algorithms to deliver goods and services to customers. The Traveling Salesman Problem can be used to find the shortest routes for delivery vehicles to visit multiple locations while minimizing travel time and distance.

**Challenges:** Finding the most efficient route for multiple locations.

**Market Benefits:** Optimized logistics, reduced travel time and costs.

**Algorithms, Design Techniques, Performance Analysis:**
- **TSP:** Combinatorial optimization, Dynamic programming, Approximation algorithms

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/tsp.cpp){:target="_blank"}<br><br><br>



### 16. **Optimizing Network Traffic in Google Services**


 
Google manages vast networks of servers and data centers to deliver its services. The **Max Flow algorithms** can be used to optimize network traffic flow, ensuring efficient data transmission and minimizing congestion. Max flow algorithms, such as **Karger's, Dinic's, and Ford-Fulkerson**, can assist in determining optimal routes and balancing the load across servers, improving system performance and reliability.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/ford.gif?raw=true" style="width: 400px; height: auto;" alt="Google Infrastructure">
  <br>
  [9] Ford-Fulkerson Algorithm optimizing network traffic flow across Google services
<br>
</p><br>

**Challenges:** Managing vast network traffic, and minimizing congestion.

**Market Benefits:** Improved system performance, and reliability.

**Algorithms, Design Techniques, Performance Analysis:**
- **Ford-Fulkerson Algorithm:** Augmenting path method, Greedy approach
  - Time Complexity: O(E * V<sup>2</sup>) where E is the number of edges and V is the number of vertices
  - Space Complexity: O(V<sup>2</sup>) where V is the number of vertices<br>
- **Dinic's Algorithm:** Layered network approach, Blocking flow<br>
- **Karger's Algorithm:** Randomized contraction, Min-cut max-flow theorem<br>

[View code for Ford Fulkerson Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/maxFlow.cpp){:target="_blank"}<br><br><br>



### 17. **Time-Series Data Analysis**

 
Google deals with vast amounts of time-series data across its services, including user activity logs, system performance metrics, and ad campaign analytics. Segment trees can be employed to perform range queries and aggregations on this data efficiently. For example, in Google Analytics, segment trees can facilitate queries that analyze website traffic trends over specific time intervals or identify peak usage periods.

**Challenges:** Efficient processing of vast amounts of time-series data.

**Market Benefits:** Better data insights, and improved performance metrics.

**Algorithms, Design Techniques, Performance Analysis:**
- **Segment Trees:** Divide and conquer, Tree data structure
  - Time Complexity: O(log N) for both query and update operations, where N is the number of elements
  - Space Complexity: O(N) where N is the number of elements

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SegmentTree.cpp){:target="_blank"}<br><br><br>



### 18. **Network Reliability using Bridges and Articulation Points**

In Google's extensive network infrastructure, which includes data centers, servers, and communication links, ensuring network reliability is crucial. Algorithms such as finding **bridges and articulation points** help identify critical points of failure in the network. By identifying these points, Google can implement redundancy measures and optimize network design to minimize downtime and improve overall network reliability.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/bridge.png?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [18]Graph showing a bridge highlighted in red, critical for maintaining connectivity.(A bridge in graph theory is an edge whose removal would disconnect the graph, crucial for maintaining connectivity)
  <br>
</p><br>
<br>

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/ap.png?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [19] Articulation points : Nodes whose removal increases the number of connected components in a graph.
  <br>
</p><br>


- **Challenges**: Identifying critical points of failure in the network.

- **Market Benefits**: Improved network reliability, and minimized downtime.
  
- **Design Techniques and Performance Analysis**:
  - **Bridges and Articulation Points**: Based on modified DFS.
  - **Time Complexity**: \(O(V + E)\)
  - **Space Complexity**:
  - Bridges: \(O(V + E)\)
  - Articulation Points: \(O(V)\)

[View code for Bridges here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/Bridges.cpp){:target="_blank"}<br>
[View code for Articulation Points here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/ArticulationPoints.cpp){:target="_blank"}<br><br><br>



### 19. **Securing User Data and Authenticating Accounts Using Hashing Algorithms**

Hashing algorithms are crucial for securing user data and authenticating accounts across Google's services like Gmail, Drive, and Cloud. Passwords are hashed using cryptographic algorithms before being stored, ensuring protection even if databases are compromised. Hashing is also used in encryption, digital signatures, and data integrity checks to secure sensitive information against unauthorized access.

- **Challenges**: Protecting user data and authenticating accounts.
  
- **Market Benefits**: Enhanced security, and improved user trust.
  
- **Design Techniques and Performance Analysis**:
  - **Hashing**: Cryptographic hash functions, one-way encryption.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/hashing.cpp){:target="_blank"}<br><br><br>


### 20. **Autocorrection**

 
Tries are commonly used in autocorrect systems, such as those implemented in Google Search, Gmail, or Google Docs. By organizing a dictionary of words into a trie structure, these systems can efficiently suggest and correct misspelled words as users type. As users enter text, the system navigates the trie to identify potential matches or corrections based on the entered prefix, offering relevant suggestions in real time.

**Algorithms, Design Techniques, Performance Analysis:**
- **Tries:** Tree data structure, Prefix tree
  - Time Complexity: O(L) for insertion, deletion, and lookup operations, where L is the length of the key (typically a word)
  - Space Complexity: O(ALPHABET_SIZE * L) where ALPHABET_SIZE is the number of possible characters and L is the length of the key

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/Trie.cpp){:target="_blank"}<br><br><br>



### 21. **Recommendation Systems in YouTube using DFS and BFS**

Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms play a vital role in recommendation systems, such as those used in YouTube for suggesting videos to users. These algorithms help analyze the relationships between users, videos, and their interactions (likes, views, comments) to generate personalized recommendations. By traversing the **user-video graph using DFS and BFS**, Google can identify relevant videos based on user preferences, viewing history, and social connections, enhancing user engagement and satisfaction on the platform.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/dfsbfs.gif?raw=true" alt="Google Infrastructure" style="width: 500px; height: auto;">
  <br>
  [21] DFS and BFS traversals on user video graphs
  <br>
</p><br>


- **Challenges**: Generating personalized video recommendations.
  
- **Market Benefits**: Increased user engagement, and enhanced user experience.
  
- **Design Techniques and Performance Analysis**:
  - **DFS (Depth-First Search)**: Graph traversal using a stack.(for brave ones)
  - **BFS (Breadth-First Search)**: Graph traversal using a queue.(for cautious ones) 
  - **Time Complexity**: \(O(V + E)\) where V:vertices/nodes,E: edges in the graph/
  - **Space Complexity**:
     DFS: O(V) (for the recursive call stack).
     BFS: O(V) (for the queue).

[View DFS code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/DFS.cpp){:target="_blank"}<br>
[View BFS code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/BFS.cpp){:target="_blank"}<br><br><br>



### 22. **Optimizing Google Cloud Infrastructure Using Spanning Tree Algorithms**

Spanning tree algorithms like **Kruskal's and Prim's** Algorithms help in designing Google's cloud infrastructure by creating minimum spanning trees (MSTs) to connect data centers, edge locations, and CDNs efficiently. This results in an optimized network with reduced latency, improved fault tolerance, and enhanced scalability for reliable and high-performance cloud services. **Boruvka's** algorithm, one of the oldest in this category, also contributes to these advancements.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/kruskal.gif?raw=true" alt="Google Infrastructure" style="width: 500px; height: auto;">
  <br>
  [22] Kruskal Algorithm for Construction of Spanning tree
  <br>
</p><br>


<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/prims.gif?raw=true" alt="Google Infrastructure" style="width: 500px; height: auto;">
  <br>
  [23]Prims Algorithm for Construction of Spanning tree
  <br>
</p><br>


- **Design Techniques**:
  - **Kruskal's Algorithm**: Greedy approach, Minimum Spanning Tree (MST).
  - **Prim's Algorithm**: Greedy approach, Minimum Spanning Tree (MST).
   
- **Performance Analysis**:
  - Kruskal's Algorithm:
    - **Time Complexity**: \(O(E log E)\)
    - **Space Complexity**: \(O(V + E)\)<br>
  - Prim's Algorithm:
    - **Time Complexity**: \(O(E log V)\) with priority queues (or \(O(E + V log V)\) with Fibonacci heaps)
    - **Space Complexity**: \(O(V + E)\)
    
[View code for Kruskal's Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/kruskalAlgoritm.c){:target="_blank"}<br>
[View code for Prim's Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/prim.cpp){:target="_blank"}<br><br><br>


### 23. **Ad Allocation in Google Ads**

 
Google's advertising platforms, such as Google Ads, rely on efficient allocation of ad placements to maximize revenue and user engagement. The **Assignment Problem** can help determine the optimal assignment of advertisements to available ad slots across websites.

**Challenges:** Maximizing revenue, and user engagement.

**Market Benefits:** Increased ad effectiveness, higher revenue.

**Algorithms, Design Techniques, Performance Analysis:**
- **Assignment Problem:** Optimization technique
- Time Complexity: O(2<sup>N</sup> * N) where N is the number of tasks or resources
- Space Complexity: O(N<sup>2</sup>) where N is the number of tasks or resources
  
[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/jobAssignment.cpp){:target="_blank"}<br><br><br>



### 24. **Search Indexing using BSTs**

**Binary Search Trees (BSTs)** can be used in Google's search indexing systems to efficiently store and retrieve indexed documents. By organizing indexed data in BSTs, Google can quickly search for relevant documents based on keywords or other search criteria, enabling fast and accurate retrieval of search results.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/bst.gif?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [24]Binary search tree
  <br>
</p><br>

- **Challenges**: Handling large volumes of data, data consistency, efficient data indexing, and retrieval.
  
- **Market Benefits**: Faster search results, and improved database performance.
  
- **Design Techniques**:
  - **Binary Search**: For efficient data retrieval.
  - **Time Complexity**: \(O(\log n)\) on average for search, insertion, and deletion. \(O(n)\) in the worst-case scenario.
  - **Space Complexity**: \(O(n)\)

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/BST.c){:target="_blank"}<br><br><br>


### 25. **Route Optimization in Google Maps using Spanning Tree Algorithms**

Spanning tree algorithms can be used in optimizing routes for Google Maps by calculating MSTs for road networks, ensuring the most efficient paths between locations. This helps minimize travel distances and times, leading to more accurate and cost-effective navigation.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/25.png?raw=true" alt="Google Infrastructure" style="width: 300px; height: auto;">
  <br>
  [25] Spanning tree for Route Optimisations in Maps
  <br>
</p><br>

- **Design Techniques**:
  - **Kruskal's Algorithm**: Greedy approach, Minimum Spanning Tree (MST).
  - **Prim's Algorithm**: Greedy approach, Minimum Spanning Tree (MST).

[View code for Kruskal's Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/kruskalAlgoritm.c){:target="_blank"}<br>
[View code for Prim's Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/prim.cpp){:target="_blank"}<br><br><br>




### 26. **Enhancing Search Accuracy using Longest Common Subsequence (LCS)**

**LCS** is used to compare and determine the similarity between documents or web pages, which helps in ranking and retrieving the most relevant search results. By identifying the longest common subsequences, Google can better understand content relationships and enhance search accuracy.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/lcs.gif?raw=true" style="width: 500px; height: auto;" alt="Google Infrastructure">
  <br>
  [26]Longest common subsequence Working
  <br>
</p><br>

- **Design Techniques**: Dynamic Programming
- **Time Complexity**: \(O(m*n)\), where m and n are lengths of sequences.
- **Space Complexity**: \(O(m*n)\) for storing the LCS table.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/lcs.cpp){:target="_blank"}<br><br><br>




### 27. **Organizing Data in Distributed File Systems using B-trees**

Google's distributed file systems, such as **Google File System (GFS) and Bigtable**, leverage **B-tree** data structures for indexing and organizing vast amounts of data efficiently. B-trees provide logarithmic time complexity for search, insertion, and deletion operations, making them ideal for handling structured data in distributed storage systems. This ensures quick and reliable access to data, enhancing the overall performance of Google's storage solutions.


- **Time Complexity**: \(O(\log n)\) for search, insertion, and deletion on average.
- **Space Complexity**: \(O(n)\)

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/btree.cpp){:target="_blank"}<br><br><br>


### 28. **Database Indexing**

 
Red-Black Trees are commonly used in database management systems for indexing and efficient retrieval of data records. Google Cloud Spanner utilizes Red-Black Trees to organize and index data stored in distributed databases. By maintaining balanced search trees using **Red-Black Trees**, Google enables fast and reliable access to database records, facilitating efficient data retrieval, indexing, and query processing.

**Challenges:** Efficient data indexing and retrieval.

**Market Benefits:** Faster query processing, improved database performance.

**Algorithms, Design Techniques, Performance Analysis:**
- **Red-Black Trees:** Balanced binary search tree, Self-balancing
  - Time Complexity: O(log N) for insertion, deletion, and lookup operations, where N is the number of elements
  - Space Complexity: O(N) where N is the number of elements

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/RedBlackTree.cpp){:target="_blank"}<br><br><br>


### 29. **Identifying Similar Videos on YouTube using LCS**

LCS is also used by **YouTube** to identify similar videos. By comparing the sequence of features or metadata associated with different videos, the algorithm helps in recognizing and recommending videos that share common characteristics or themes, enhancing the user experience by providing relevant video suggestions.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/21.png?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [28] Video Recommendation on Youtube
</p><br>

- **Design Techniques**: Dynamic Programming
- **Time Complexity**: \(O(m*n)\), where m and n are lengths of sequences.
- **Space Complexity**: \(O(m*n)\) for storing the LCS table.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/lcs.cpp){:target="_blank"}<br><br><br>



### 30. **Ad Campaign Optimization using Fenwick Trees**
**Overview:** **Fenwick Trees**, also known as **Binary Indexed Trees (BITs)**, can be utilized in ad campaign optimization to efficiently manage and update metrics such as click-through rates (CTR), conversion rates, and return on investment (ROI) for various advertisement placements.

**Applications in Google Ads:**
- Efficiently process and analyze real-time data generated by ad interactions.
- Maintain cumulative frequency tables to quickly compute metrics such as total impressions, clicks, and conversions for each ad placement or targeting segment.

**Design Technique:** 
Fenwick Trees support two primary operations efficiently: prefix sum queries and point updates.

**Performance Analysis:**
- **Construction:** \( O(n log n) \)
- **Update (Point Update):** \( O(log n) \)
- **Query (Prefix Sum):** \( O(log n) \)
- **Space Complexity:** \( O(n) \)

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/FenwickTree.cpp){:target="_blank"}<br><br><br>


### 31. **Spam Filtering in Gmail using String Matching Algorithms**
**Overview:** String matching algorithms are employed in Gmail's spam filters to analyze the content of incoming emails, identifying spam keywords or patterns to classify and filter spam emails. Some of them are **Knuth-Morris-Pratt (KMP), Rabin-Karp, and Boyer-Moore** algorithms.

[View code for Rabin Karp here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/rabin.cpp){:target="_blank"}<br>
[View code for KMP here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/kmp.cpp){:target="_blank"}<br><br><br>


### 32. **Detecting Plagiarism using LCS**

**LCS** can be employed to detect plagiarism by comparing the textual content of documents. By identifying the longest common subsequences between two or more texts, Google can efficiently determine the degree of similarity and detect copied or similar content across documents, ensuring the originality and integrity of information.

- **Design Techniques**: Dynamic Programming
- **Time Complexity**: \(O(m*n)\), where m and n are lengths of sequences.
- **Space Complexity**: \(O(m*n)\) for storing the LCS table.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/lcs.cpp){:target="_blank"}<br><br><br>


### 33. **Checking URLs for Safety in Google Chrome using Bloom Filters**
**Overview:** **Google Chrome** uses **Bloom filters** to quickly check if a URL might be harmful by referencing a local Bloom filter containing hashed malicious URLs. This improves browsing speed and security.Also,Bloom filter is used to quickly determine whether an element is likely a member of a set, without having to store the entire set in memory.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/bloom.png?raw=true" alt="Google Infrastructure">
</p>

**Challenges:** Balancing false positive rates with false negative rates to maintain user trust and safety.

**Market Benefit:** Enhancing browsing speed and security by quickly identifying potentially harmful URLs locally before resorting to server checks.

**Design Technique:** 
Bloom filters use a fixed-size array and hash functions to achieve space-efficient set representation and quick lookups.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/bloomfilters.cpp){:target="_blank"}<br><br><br>


### 34. **Managing Document Edits and Revisions using Persistent Segment Trees**
**Overview:** **Persistent Segment Trees**(based on the principle of **lazy propagation**) can be utilized in version control systems for efficient management of document edits and revisions, such as in Google Docs.

**Applications:**
- Store and track changes made to documents over time.
- Allow users to review, revert, and collaborate on edits seamlessly.

**Design Technique:** 
Persistent Segment Trees maintain historical versions of data through immutable data structures.

**Performance Analysis:**
- **Building a Version (Preprocessing):** \( O(n log n) \)
- **Querying a Version:** \( O(log n) \)
- **Total Space:** \( O(n log n) \)

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/PersistentSegmentTree.cpp){:target="_blank"}<br><br><br>


### 35. **Processing and Analyzing Large Datasets using MapReduce**
**Overview:** **MapReduce** is a fundamental algorithmic framework used by Google for efficient parallel processing and analysis of large datasets. Initially developed by Google in 2004 for analyzing search results, MapReduce has evolved into a core component of big data processing, integral to frameworks like Hadoop. It offers several advantages:

-**Fault Tolerance**: MapReduce ensures fault tolerance by leveraging multiple machines and allowing for task re-execution in case of failures.

-**Scalability**: It supports flexible hardware configurations and can handle massive datasets by distributing computations across clusters.

-**Simplicity**: MapReduce abstracts the complexity of parallel processing, providing a structured framework for developers.

**Applications:**: Search indexing, data mining, and machine learning.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/mapred.gif?raw=true" alt="Google Infrastructure" style="width: 400px; height: auto;">
  <br>
  [29] MapReduce: Parallel processing of data
  <br>
</p><br>

**Design Technique:** 
MapReduce divides tasks into map and reduce phases, leveraging parallelism and fault tolerance.

[View code here](https://github.com/cdmh/mapreduce){:target="_blank"}<br><br><br>




### 36. **Optimize the video streaming paths on YouTube**
Google's YouTube platform can utilize the **Floyd-Warshall algorithm** to optimize video streaming paths. By determining the shortest paths between servers and users, Google can ensure smooth and uninterrupted video playback, enhancing the user experience.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/floyd.gif?raw=true" alt="Google Infrastructure">
  <br>
  [8] Floyd-Warshall Algorithm for optimizing video streaming paths in youtube
  <br>
</p><br>

**Performance Analysis:**
- **Floyd-Warshall Algorithm:** Dynamic programming, All-pairs shortest path
- Time Complexity: O(V<sup>3</sup>) where V is the number of vertices
- Space Complexity: O(V<sup>2</sup>) where V is the number of vertices


[View Floyd-Warshall code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/floyd_warshall.cpp){:target="_blank"}<br><br><br>



### 37.Personalized Resource Allocation for Google Classrooms

Google Classroom can significantly enhance personalized learning experiences by employing the knapsack algorithm to optimize the allocation of educational resources for students based on their individual learning needs and constraints. This approach can be visualized through a 2D matrix where rows represent students and columns represent available learning resources. Each cell in the matrix contains the "value" of a particular resource for a specific student, calculated based on factors such as relevance, difficulty level, and engagement score. Additionally, each resource can have associated "weights" like time required. The appropriate version of the knapsack algorithm for optimizing educational resource allocation in Google Classroom would be the **0-1 knapsack** algorithm. This is because each educational resource can be selected (1) or not selected (0), and cannot be partially allocated.


**Challenges:** Allocating the most relevant and engaging educational resources to each student while considering their unique constraints, such as time available for study 

**Market Benefits:** Optimizes resource allocation to maximize educational benefits, potentially leading to better student performance.

**Performance Analysis:**
- **0-1 KnapSack Algorithm:** Dynamic programming
- Time Complexity: The time complexity of the solution is \( O(n*W) \), where: n is the number of items (educational resources), and W is the maximum weight capacity (maximum time).
- Space Complexity: The space complexity is also \( O(n*W) \)


[View 0-1 Knapsack code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/0-1knapsack){:target="_blank"}<br><br><br>



### 38. Managing and Retrieving the geographical data in Google Maps

Quadtrees are hierarchical data structures used to partition two-dimensional (2D) spaces. These structures are widely used in applications requiring efficient spatial indexing, such as Geographic Information Systems (GIS) and computer graphics. Quadtrees can manage and retrieve geographical data efficiently, enabling fast rendering and querying of map information in applications like Google Maps.

<p align="center">
  <img src="https://github.com/jiyapalrecha35/Google.github.io/blob/main/images/quad.png?raw=true" alt="Google Infrastructure">
  <br>
   QuadTree structure
  <br>
</p><br>

**Challenges:** Efficiently handling vast amounts of spatial data and ensuring quick query responses in large-scale applications like Google Maps.

**Market Benefits:** Quadtrees enable fast searches, insertions, and deletions of spatial objects, significantly reducing query times for large datasets and improving user experience.

**Design Techniques and Performance Analysis:**
- **Design Technique:** Recursive subdivision of 2D space into four quadrants until leaf nodes are reached.
- Time Complexity: O(n<sup>2</sup> log n), where n is the length of the grid's side.
- Space Complexity: O(n<sup>2</sup>), considering the storage for the quadtree nodes.








---
<br>
# 4.Use Case and Efficiency Overview

| SI. No. | Business Use Case                                                   | Data Structure and Algorithm Used                    | Efficiency (TC, SC)                  |
|---------|---------------------------------------------------------------------|------------------------------------------------------|-------------------------------------|
| 1       | Computation of Shortest Paths in Google Maps                        | Dijkstra's Algorithm                                 | O((V + E) log V), O(V)               |
|         |                                                                     | Bellman-Ford Algorithm                               | O(VE), O(V)                           |
|         |                                                                     | Floyd-Warshall Algorithm                             | O(V<sup>3</sup>), O(V<sup>2</sup>)   |
| 2       | Optimizing Network Traffic in Google Services                       | Ford-Fulkerson Algorithm                             | O(E * V<sup>2</sup>), O(V<sup>2</sup>) |
|         |                                                                     | Dinic's Algorithm                                    | O(E * V<sup>2</sup> log(V)), -        |
|         |                                                                     | Karger's Algorithm                                   | O(V<sup>3</sup>), -                   |
| 3       | Range Query Optimization                                            | Segment Trees                                        | O(log N), O(N)                        |
| 4       | Allocation of resources in data centres                             | Assignment Problem                                   | O(2<sup>N</sup> * N), O(N<sup>2</sup>) |
| 5       | Autocorrection                                                      | Tries                                                | O(L), O(ALPHABET_SIZE * L)            |
| 6       | Database Indexing                                                   | Red-Black Trees                                      | O(log N), O(N)                        |
| 7       | A* and Best-First Algorithms for Route Optimizations in Google Maps | A* Algorithm                                         | Depends on heuristic                  |
|         |                                                                     | Best-First Search                                    | Depends on heuristic                  |
| 8       | Spell Checking                                                      | Edit Distance                                        | O(m*n), O(m*n)                        |
| 9       | Skip Lists in Search Engine Indexing                                | Skip Lists                                           | O(log n), O(n)                        |
| 10      | Scheduling Tasks in Data Centers                                    | Topological Sort                                     | O(V + E), O(V + E)                    |
| 11      | Content Recommendation Systems                                      | A* Algorithm                                         | Depends on heuristic                  |
|         |                                                                     | Best-First Search                                    | Depends on heuristic                  |
| 12      | Dependency Resolution in Software Development                       | Topological Sort                                     | O(V + E), O(V + E)                    |
| 13      | Analyzing User Behavior and Engagement Patterns                     | Game of Life                                         | O(n * m), O(n * m)                    |
| 14      | Data Compression in Google's Infrastructure using Huffman Coding    | Huffman Coding                                       | O(n log n), O(n)                      |
| 15      | Traveling Salesman Problem for Route Optimization                   | TSP                                                  | N/A                                   |
| 16      | PageRank and Web Crawling for Google Search Index                   | DFS                                                  | O(V + E), O(V)                        |
|         |                                                                     | BFS                                                  | O(V + E), O(V)                        |
| 17      | Time-Series Data Analysis                                           | Segment Trees                                        | O(log N), O(N)                        |
| 18      | Network Reliability using Bridges and Articulation Points           | Bridges                                              | O(V + E)                              |
|         |                                                                     | Articulation Points                                  | O(V)                                  |
| 19      | Securing User Data and Authenticating Accounts                      | Hashing Algorithms                                   | One-way encryption                    |
| 20      | Autocomplete Suggestions                                            | Tries                                                | O(L * ALPHABET_SIZE), -               |
| 21      | Recommendation Systems in YouTube                                   | DFS                                                  | O(V + E), O(V)                        |
|         |                                                                     | BFS                                                  | O(V + E), O(V)                        |
| 22      | Optimizing Google Cloud Infrastructure                              | Kruskal's Algorithm                                  | O(E log E), O(V + E)                  |
|         |                                                                     | Prim's Algorithm                                     | O(E log V), O(V + E)                  |
| 23      | Ad Allocation in Google Ads                                         | Assignment Problem                                   | O(2<sup>N</sup> * N), O(N<sup>2</sup>) |
| 24      | Search Indexing using BSTs                                          | Binary Search                                        | O(log n), O(n)                        |
| 25      | Route Optimization in Google Maps                                   | Kruskal's Algorithm                                  | O(E log E), O(V + E)                  |
|         |                                                                     | Prim's Algorithm                                     | O(E log V), O(V + E)                  |
| 26      | Enhancing Search Accuracy using Longest Common Subsequence (LCS)    | Dynamic Programming                                  | O(m*n), O(m*n)                        |
| 27      | Organizing Data in Distributed File Systems using B-trees           | B-trees                                              | O(log n), O(n)                        |
| 28      | Identifying User Clusters Using Strongly Connected Components       | Kosaraju's Algorithm, Tarjan's Algorithm            | O(V + E), O(V)                        |
| 29      | Identifying Similar Videos on YouTube using LCS                     | Dynamic Programming                                  | O(m*n), O(m*n)                        |
| 30      | Ad Campaign Optimization using Fenwick Trees                        | Fenwick Trees (BITs)                                 | O(log n), O(n log n)                  |
| 31      | Spam Filtering in Gmail using String Matching Algorithms            | Rabin Karp, KMP                                      | O(m + n), -                           |
| 32      | Detecting Plagiarism using LCS                                      | Dynamic Programming                                  | O(m*n), O(m*n)                        |
| 33      | Checking URLs for Safety in Google Chrome using Bloom Filters       | Bloom Filters                                        | Fixed-size array, hash funcs           |
| 34      | Managing Document Edits and Revisions using Persistent Segment Trees| Persistent Segment Trees                             | O(log n), O(n log n)                  |
| 35      | Processing and Analyzing Large Datasets using MapReduce             | MapReduce                                            | Fault tolerance, scalability          |
| 36      | Optimize the video streaming paths on Youtube                      | Floyd-Warshall Algorithm                             | O(V<sup>3</sup>), O(V<sup>2</sup>)    |
| 37 | Personalized learning resource allocation in Google Classroom | 0-1 Knapsack Algorithm | O(n * W) , O(n * W) |
| 38 | Spatial partitioning for map data in Google Maps | Quadtree Data Structure | O(n<sup>2</sup> log n), O(n<sup>2</sup>) |



---
<br>
# 5.Learnings and Key Takeaways

This portfolio shows how choosing the right data structures and algorithms can solve specific business challenges in different areas. Each use case applies and recommends suitable algorithms, discusses challenges, highlights benefits, and focuses on design techniques. It also explores how algorithms learned in APS and DSA classes can be directly applied to practical problems, emphasizing efficiency and practicality.

The portfolio provides insights into how to pick the best solutions for real-world issues. By linking theory to practice, it demonstrates the significant impact that well-chosen algorithms and data structures can have on improving services. It highlights the importance of understanding algorithms to drive innovation and efficiency in various fields, offering valuable lessons for both learning and practical use.


<br><br><br><br><br>
## References

[1] Statista. (2024). Market share of leading desktop search engines worldwide from January 2015 to January 2024 [Online]. Available: [Statista](https://www.statista.com/statistics/216573/worldwide-market-share-of-search-engines/){:target="_blank"}.

[2] Google. (2024). YouTube for Press. [Online]. Available: [YouTube for Press](https://blog.youtube/press/){:target="_blank"}.

[3] FounderJar. (2024). The Ultimate List of Gmail Statistics for 2024. Available: [FounderJar](https://www.founderjar.com/gmail-statistics/){:target="_blank"}.

[4] DemandSage. (2024). Gmail Statistics For 2024: How Many People Use Gmail? Available: [DemandSage](https://www.demandsage.com/gmail-statistics/){:target="_blank"}.

[5] The Hans India. (2024, July 6). Android update: Google apps to get major makeover. Retrieved from [The Hans India](https://www.thehansindia.com/technology/tech-news/android-update-google-apps-to-get-major-makeover-743672){:target="_blank"}.

[6] Thaddeus Abiy, Hannah Pang, Christopher Williams, and others. "Dijkstra's Shortest Path Finder." Brilliant. Available at: [Brilliant](https://brilliant.org/wiki/dijkstras-short-path-finder/){:target="_blank"}.

[7] Wikimedia Commons. "Bellman–Ford Algorithm Example." Available at: [Wikimedia Commons](https://commons.wikimedia.org/wiki/File%E2%80%93Ford_algorithm_example.gif){:target="_blank"}.

[8] Jimut123. "All-Pairs Shortest Path." Available at: [Jimut123](https://jimut123.github.io/blogs/allPairs.html){:target="_blank"}.

[9] Wikipedia. "Ford-Fulkerson Algorithm Demo." Available at: [Wikipedia](https://en.m.wikipedia.org/wiki/File.gif){:target="_blank"}.

[10] Scaler Topics. "Segment Trees in Data Structure." Available at: [Scaler Topics](https://www.scaler.com/topics/data-structures/segment-trees-in-data-structure/){:target="_blank"}.

[11] GeeksforGeeks. "A* Search Algorithm." Available at: [GeeksforGeeks](https://www.geeksforgeeks.org/a-search-algorithm/){:target="_blank"}.

[12] Wikipedia. "Skip List." Available at: [Wikipedia](https://en.wikipedia.org/wiki/Skip_list){:target="_blank"}.

[13] OpenGenus IQ. "Kahn's Algorithm for Topological Sort." Available at: [OpenGenus IQ](https://iq.opengenus.org/kahns-algorithm-topological-sort/){:target="_blank"}.

[14] Wikipedia. "Collaborative Filtering." Available at: [Wikipedia](https://en.wikipedia.org/wiki/Collaborative_filtering){:target="_blank"}.

[15] Datawrapper. "Game of Life." Available at: [Datawrapper](https://blog.datawrapper.de/game-of-life/){:target="_blank"}.

[16] Wikimedia Commons. "Huffman Algorithm Demonstration." Available at: [Wikimedia Commons](https://commons.wikimedia.org/wiki/File.gif){:target="_blank"}.

[17] Steven Skiena. "Search Algorithm Animations." Available at: [Steven Skiena](https://www3.cs.stonybrook.edu/~skiena/combinatorica/animations/search.html){:target="_blank"}.

[18] E-Olymp. "Bridges in Graph GIF." Available at: [E-Olymp](https://basecamp.eolymp.com/en/problems/1943){:target="_blank"}.

[19] GeeksforGeeks. "Articulation Points or Cut Vertices in a Graph." Available at: [GeeksforGeeks](https://www.geeksforgeeks.org/articulation-points-or-cut-vertices-in-a-graph/){:target="_blank"}.

[20] Gabriel Castro. "Trie Data Structure." Available at: [Gabriel Castro](https://gabrielcastro1028.medium.com/trie-data-structure-4a8becc97809){:target="_blank"}.

[21] Medium. "A Quick Explanation of DFS & BFS." Available at: [Medium](https://medium.com/analytics-vidhya/a-quick-explanation-of-dfs-bfs-depth-first-search-breadth-first-search-b9ef4caf952c){:target="_blank"}.

[22] Make a GIF. "Kruskal Algorithm." Available at: [Make a GIF](https://makeagif.com/gif/kruskal-algorithm-IFvPaF){:target="_blank"}.

[23] Stack Overflow. "Prim's Algorithm Info." Available at: [Stack Overflow](https://stackoverflow.com/tags/prims-algorithm/info){:target="_blank"}.

[24] Wikimedia Commons. "Optimal Binary Search Tree from Sorted Array GIF." Available at: [Wikimedia Commons](https://commons.wikimedia.org/wiki/File.gif){:target="_blank"}.

[25] Wikipedia. "Spanning Tree." Available at: [Wikipedia](https://en.wikipedia.org/wiki/Spanning_tree){:target="_blank"}.

[26] Astikanand's Tech Blogs. "Longest Common Subsequence GIF." Available at: [Astikanand's Tech Blogs](https://astikanand.github.io/techblogs/dynamic-programming-patterns/assets/longest_common_substring_tabulation.gif){:target="_blank"}.

[27] Wikipedia. "Tarjan's Strongly Connected Components Algorithm." Available at: [Wikipedia](https://en.wikipedia.org/wiki/Tarjan%27s_strongly_connected_components_algorithm){:target="_blank"}.

[28] Nfinity8. "YouTube Recommendation Algorithm." Available at: [Nfinity8](https://nfinity8.com/youtube-recommendation-algorithm/){:target="_blank"}.

[29] Make a GIF. "Introduction to Amazon Elastic MapReduce." Available at: [Make a GIF](https://makeagif.com/gif/introduction-to-amazon-elastic-mapreduce-Ji84SG){:target="_blank"}.


