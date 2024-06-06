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

### 1. **Max Flow Algorithms**:

   - Google manages vast networks of servers and data centers to deliver its services. The max flow algorithm can be used to optimize network traffic flow, ensuring efficient data transmission and minimizing congestion.

   - Google's infrastructure relies on sophisticated routing and load balancing mechanisms to handle user requests. Max flow algorithms, such as **Karger's, Dinic's, and Ford-Fulkerson**, can assist in determining optimal routes and balancing the load across servers, improving system performance and reliability.

   - Google Cloud Platform (GCP) offers a range of services and resources to users. The max flow algorithm can be used to allocate resources effectively, ensuring that computational tasks are executed optimally and resource usage is maximized.
   
     [View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/maxFlow.cpp){:target="_blank"}<br><br>





### 2. **Shortest Path Algorithms**:

**Dijkstra's Algorithm**: 
- **Google Maps**: Dijkstra's algorithm could be used to find the shortest path between two locations on a map. This is essential for providing accurate directions to users, considering factors such as traffic conditions, road closures, and distance.
  
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

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/jobAssignment.cpp){:target="_blank"}<br><br>






### 4. **Segment Trees**

- **Range Query Optimization**:
  In Google's data storage and retrieval systems, such as databases and file systems, segment trees can optimize range query operations. For instance, in a document storage system like Google Drive, segment trees can efficiently handle queries related to retrieving or manipulating data within specific ranges, such as searching for documents created within a certain time frame or finding files within a particular size range.

- **Time-Series Data Analysis**:
  Google deals with vast amounts of time-series data across its services, including user activity logs, system performance metrics, and ad campaign analytics. Segment trees can be employed to perform range queries and aggregations on this data efficiently. For example, in Google Analytics, segment trees can facilitate queries that analyze website traffic trends over specific time intervals or identify peak usage periods.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SegmentTree.cpp)<br><br>






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
<br><br>





### 6. **Fenwick Trees for Sum Query**

**Google Ads**: Fenwick Trees can be utilized in ad campaign optimization to efficiently manage and update metrics such as click-through rates (CTR), conversion rates, and return on investment (ROI) for various advertisement placements.Google Ads can employ Fenwick Trees to process and analyze large volumes of real-time data generated by ad interactions. By maintaining cumulative frequency tables using Fenwick Trees, Google can quickly compute metrics such as total impressions, clicks, and conversions for each ad placement or targeting segment. 

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/FenwickTree.cpp){:target="_blank"}<br><br>






### 7. **Persistent Segment Trees**

Persistent Segment Trees can be utilized in version control systems for efficient management of document edits and revisions.Google Docs can employ Persistent Segment Trees to store and track changes made to documents over time. By maintaining multiple versions of the document's content using Persistent Segment Trees, Google enables users to review, revert, and collaborate on edits seamlessly. This allows users to explore different document states, compare revisions, and roll back changes, facilitating collaborative document editing and version tracking.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/PersistentSegmentTree.cpp){:target="_blank"}<br><br>



### 8. **Red-Black Trees**

**Database Indexing**: Red-Black Trees are commonly used in database management systems for indexing and efficient retrieval of data records. Google Cloud Spanner utilizes Red-Black Trees to organize and index data stored in distributed databases. By maintaining balanced search trees using Red-Black Trees, Google enables fast and reliable access to database records, facilitating efficient data retrieval, indexing, and query processing. This improves the performance of database operations such as data insertion, deletion, and retrieval, enhancing the scalability and reliability of cloud-based database services.

**Compiler Symbol Tables**: Google's compiler infrastructure (such as LLVM) utilizes Red-Black Trees to represent and query symbol tables containing information about program identifiers, variables, and functions. By organizing symbol tables using Red-Black Trees, Google enables efficient identifier resolution during compilation, linking, and optimization processes. This ensures accurate and speedy resolution of references, aiding in code generation, optimization, and debugging across various programming languages and platforms.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/RedBlackTree.cpp){:target="_blank"}<br><br>




### 9. **Skip Lists**

**Search Engine Indexing**: Skip lists can be employed in search engine indexing systems to maintain sorted lists of web pages or documents based on relevance or other criteria. They enable quick insertion of new pages, deletion of outdated or irrelevant content, and efficient retrieval of indexed information, thereby enhancing the search experience for users.

**Distributed Systems**: In Google's distributed systems architecture, skip lists can be utilized for maintaining sorted data structures across multiple nodes or servers. They facilitate efficient data access and manipulation in distributed environments, supporting tasks such as distributed caching, load balancing, and distributed database indexing. This ensures optimal performance and scalability of Google's services, even in large-scale distributed computing scenarios.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SkipList.cpp){:target="_blank"}<br><br>





### 10. **Edit Distance**

**Spell Checking**: Edit distance algorithms can be used in spell-checking systems, where they help identify and correct misspelled words by suggesting replacements with the minimum number of edits required.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/editDistance.cpp){:target="_blank"}<br><br>



### 11.**LookUp Tables**:

- **Database Indexing**:Lookup tables are commonly used in database management systems to index data for efficient retrieval. They enable fast access to database records based on key values, reducing query latency and improving overall database performance.Lookup tables are also utilized in caching systems to store frequently accessed data for quick retrieval. By maintaining key-value pairs in memory, lookup tables accelerate data access, reducing the need to retrieve information from slower storage mediums like disks or databases.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/lookupTable.cpp){:target="_blank"}<br><br>




### 12. **A*** and **Best First** Algorithms

- **Route Optimization in Google Maps**: **A*** and Best First algorithms can be employed to find the most efficient routes between locations on Google Maps. By intelligently prioritizing nodes based on heuristic information such as distance, traffic conditions, and historical data, these algorithms can calculate optimal routes that minimize travel time and distance.

- **Content Recommendation Systems**:Within Google's ecosystem of products and services, **A*** and Best First algorithms can power content recommendation systems by intelligently prioritizing and recommending relevant content to users based on their preferences, search history, and behavior patterns. These algorithms can enhance user engagement and satisfaction by delivering personalized and targeted recommendations.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/a_BestFirst.cpp){:target="_blank"}<br><br>




### 13. **KD Trees**

- Google Maps and other location-based services can utilize KD Trees for efficient nearest neighbor search and range queries. By organizing geographic points (e.g., landmarks, businesses, user locations) in a k-dimensional space, KD Trees enable quick retrieval of nearby points based on user queries, facilitating location-based recommendations, navigation, and geospatial analysis.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/KDTree.cpp){:target="_blank"}<br><br>



### 14. **Topological Sort**

- **Task Scheduling in Data Centers**: Google's vast network of data centers relies on efficient task scheduling algorithms to manage computational workloads and optimize resource utilization. Topological Sort algorithms can be employed to schedule tasks and dependencies in directed acyclic graphs (DAGs), ensuring that tasks are executed in the correct order to meet deadlines, minimize latency, and maximize throughput.

- **Dependency Resolution in Software Development**: Within Google's software development processes, Topological Sort algorithms play a crucial role in resolving dependencies between software modules and libraries. By determining the correct order of compilation or deployment based on inter-module dependencies, these algorithms facilitate smooth integration, version management, and release engineering, ensuring robust and reliable software products.
  
[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/topoSort.cpp){:target="_blank"}<br><br>




### 15. **Conway's Game of Life**

- In online services such as Google Search, YouTube, and Gmail, understanding user behavior and engagement patterns is crucial for enhancing user experiences and personalization. The Game of Life can be applied to simulate and analyze user interactions, content consumption patterns, and community dynamics. By modeling user engagement, content popularity, and social interactions, Google can optimize content recommendations, ad targeting strategies, and platform design to better serve user needs and preferences.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/conway.cpp){:target="_blank"}<br><br>






### 16. **Huffman Coding**

- **Data Compression in Storage and Transmission**: Google's infrastructure deals with vast amounts of data generated and transmitted across its services and platforms. Huffman Coding can be employed for efficient data compression in storage systems, file formats, and communication protocols. By encoding data with variable-length codes based on frequency distributions, Google can reduce storage requirements, minimize bandwidth usage, and improve data transfer speeds, leading to faster access times and reduced network congestion.

- **Search Engine Indexing and Retrieval**:
  Google's search engine relies on indexing and retrieving vast amounts of web content to deliver relevant search results to users. Huffman Coding can be utilized for compressing and storing inverted index structures, document collections, and query results. By encoding terms and document identifiers with optimal prefix codes, Google can optimize index size, reduce memory overhead, and accelerate search queries, enabling faster and more efficient information retrieval for users.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/huffmann.cpp){:target="_blank"}<br><br>











