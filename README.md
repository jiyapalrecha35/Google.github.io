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
3. Algorithms and Data Structures: Business Use Cases and Applications


# Introduction

In today's digital age, the **efficiency** and **effectiveness** of technology services can be significantly enhanced through the strategic application of **data structures** and **algorithms**. This portfolio project delves into the core functionalities of Google's diverse services, applying the theoretical knowledge and practical skills acquired from courses in **Data Structures and Algorithms (DSA)** and **Algorithmic Problem Solving (APS)**.

By using advanced algorithmic techniques and innovative data structures, this project aims to propose solutions to real-world business challenges. From refining search engine algorithms for improved relevance and speed to optimizing route planning in Google Maps, the potential for enhancement is vast.

This portfolio showcases the transformative power of algorithms within Google’s ecosystem. Each **business use case** explored will demonstrate how thoughtful algorithmic problem-solving can streamline processes, enhance user experiences, and drive technological innovation. Join me in this exploration as we bridge the gap between theoretical knowledge and practical application, showcasing the profound impact of data structures and algorithms on modern digital services.

![Google](https://play.google.com/store/apps/dev?id=5700313618786177705&hl=en_US)


<br><br>


# Objectives/Need of Portfolio
1. Apply advanced algorithms and data structures to enhance the speed and efficiency of Google's services.
   
2. Demonstrate the real-world use of concepts learned in Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses.
   
3. Develop innovative solutions to improve user experiences and drive technological advancements within Google's ecosystem.
<br><br>


# Algorithms and Data Structures: Business Use Cases and Applications

### 1. **Max Flow Algorithms**

   - Google manages vast networks of servers and data centers to deliver its services. The max flow algorithm can be used to optimize network traffic flow, ensuring efficient data transmission and minimizing congestion.

   - Google's infrastructure relies on sophisticated routing and load balancing mechanisms to handle user requests. Max flow algorithms, such as **Karger's, Dinic's, and Ford-Fulkerson**, can assist in determining optimal routes and balancing the load across servers, improving system performance and reliability.

   - **Google Cloud Platform (GCP)** offers a range of services and resources to users. The max flow algorithm can be used to allocate resources effectively, ensuring that computational tasks are executed optimally and resource usage is maximized.
   
[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/maxFlow.cpp){:target="_blank"}<br><br>





### 2. **Shortest Path Algorithms**

**Dijkstra's Algorithm**: 
- **Google Maps**: Dijkstra's algorithm could be used to find the shortest path between two locations on a map. This is essential for providing accurate directions to users, considering factors such as traffic conditions, road closures, and distance.
  
- In Google's infrastructure, Dijkstra's algorithm can be employed to optimize network routing. This involves finding the shortest paths for data packets to travel between servers, data centers, and users, ensuring efficient and reliable network communication.
  
- Dijkstra's algorithm can aid in optimizing the delivery routes for products purchased through **Google Shopping**. By calculating the shortest paths between distribution centers, warehouses, and delivery destinations, Google can minimize shipping costs and delivery times, enhancing the shopping experience for users.

**Bellman-Ford Algorithm**:
- Bellman-Ford algorithm can be used in Google's self-driving car project for path planning. It helps in finding the shortest path from the car's current location to its destination while considering factors such as road conditions, traffic congestion, and safety measures.


**Floyd-Warshall Algorithm**:
- In Google's network infrastructure, the Floyd-Warshall algorithm can be used for network analysis and troubleshooting. It helps in identifying the shortest paths between all pairs of nodes in a network, facilitating efficient communication and resolving connectivity issues.
  
- Google's YouTube platform can utilize the Floyd-Warshall algorithm to optimize video streaming paths. By determining the shortest paths between servers and users, Google can ensure smooth and uninterrupted video playback, enhancing user experience.

[View Dijkstra's code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/dijkstra.cpp){:target="_blank"}<br>
[View Bellman-Ford code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/bellman_ford.cpp){:target="_blank"}<br>
[View Floyd-Warshall code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/floyd_warshall.cpp){:target="_blank"}<br><br>






### 3. **Assignment Problem**

- **Resource Allocation in Data Centres**: Google manages a vast network of data centers worldwide to support its services. The Assignment Problem can be utilized to optimize resource allocation within these data centers, such as assigning computing tasks to servers or balancing the load across different data center locations. This ensures efficient utilization of computing resources and minimizes latency for users accessing Google's services.

- **Ad Allocation in Google Ads**: Google's advertising platforms, such as Google Ads, rely on efficient allocation of ad placements to maximize revenue and user engagement. The Assignment Problem can help determine the optimal assignment of advertisements to available ad slots across websites.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/jobAssignment.cpp){:target="_blank"}<br><br>






### 4. **Segment Trees**

- **Range Query Optimization**:In Google's data storage and retrieval systems, such as databases and file systems, segment trees can optimize range query operations. For instance, in a document storage system like Google Drive, segment trees can efficiently handle queries related to retrieving or manipulating data within specific ranges, such as searching for documents created within a certain time frame or finding files within a particular size range.

- **Time-Series Data Analysis**: Google deals with vast amounts of time-series data across its services, including user activity logs, system performance metrics, and ad campaign analytics. Segment trees can be employed to perform range queries and aggregations on this data efficiently. For example, in Google Analytics, segment trees can facilitate queries that analyze website traffic trends over specific time intervals or identify peak usage periods.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SegmentTree.cpp){:target="_blank"}<br><br>






### 5. **Tries**

- **Autocorrection**: Tries are commonly used in autocorrect systems, such as those implemented in Google Search, Gmail, or Google Docs. By organizing a dictionary of words into a trie structure, these systems can efficiently suggest and correct misspelled words as users type. As users enter text, the system navigates the trie to identify potential matches or corrections based on the entered prefix, offering relevant suggestions in real-time.

- **Autocomplete Suggestions**: Enhancing search functionality by providing predictive text suggestions as users type queries in Google Search. Also called as **Submission Throttling**.

- **Spelling Correction**: Improving user experience by suggesting corrections for misspelled words in Google Docs or Gmail. 

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/Trie.cpp){:target="_blank"}

#### Variants of Tries and Their Applications in Google:

- **Radix Trie (Compact Trie)**: Radix trie is particularly useful for storing strings with common prefixes efficiently. It reduces space complexity by merging nodes with single children into a single node.In Google's domain, a radix trie can be used for storing and searching IP addresses in large-scale network infrastructure, such as in routing tables or in systems handling internet traffic.
  

- **Suffix Trie**:Suffix trie is commonly used in string processing tasks, especially for pattern matching, substring search, and text indexing.In Google Search, a suffix trie can be employed to index web pages efficiently. It helps in quickly retrieving relevant search results based on substring queries entered by users.
<br><br>




### 6. **Red-Black Trees**

- **Database Indexing**: Red-Black Trees are commonly used in database management systems for indexing and efficient retrieval of data records. Google Cloud Spanner utilizes Red-Black Trees to organize and index data stored in distributed databases. By maintaining balanced search trees using Red-Black Trees, Google enables fast and reliable access to database records, facilitating efficient data retrieval, indexing, and query processing.

- **Compiler Symbol Tables**: Google's compiler infrastructure (such as LLVM) utilizes Red-Black Trees to represent and query symbol tables containing information about program identifiers, variables, and functions. By organizing symbol tables using Red-Black Trees, Google enables efficient identifier resolution during compilation, linking, and optimization processes.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/RedBlackTree.cpp){:target="_blank"}<br><br>




### 7. **Skip Lists**

Skip lists can be employed in search engine indexing systems to maintain sorted lists of web pages or documents based on relevance or other criteria. They enable quick insertion of new pages, deletion of outdated or irrelevant content, and efficient retrieval of indexed information, thereby enhancing the search experience for users.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SkipList.cpp){:target="_blank"}<br><br>





### 8. **Edit Distance**

**Spell Checking**: Edit distance algorithms can be used in spell-checking systems, where they help identify and correct misspelled words by suggesting replacements with the minimum number of edits required.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/editDistance.cpp){:target="_blank"}<br><br>






### 9. **A*** and **Best First** Algorithms

- **A*** and Best First algorithms can be employed to find the most efficient routes between locations on Google Maps. By intelligently prioritizing nodes based on heuristic information such as distance, traffic conditions, and historical data, these algorithms can calculate optimal routes that minimize travel time and distance.

- Within Google's ecosystem of products and services, **A*** and Best First algorithms can power content recommendation systems by intelligently prioritizing and recommending relevant content to users based on their preferences, search history, and behavior patterns. These algorithms can enhance user engagement and satisfaction by delivering personalized and targeted recommendations.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/a_BestFirst.cpp){:target="_blank"}<br><br>






### 10. **Topological Sort**

- **Scheduling tasks in data centres**: Google's vast network of data centers relies on efficient task scheduling algorithms to manage computational workloads and optimize resource utilization. Topological Sort algorithms can be employed to schedule tasks and dependencies in directed acyclic graphs (DAGs), ensuring that tasks are executed in the correct order to meet deadlines, minimize latency, and maximize throughput.

- **Dependency Resolution in Software Development**: Within Google's software development processes, Topological Sort algorithms play a crucial role in resolving dependencies between software modules and libraries. By determining the correct order of compilation or deployment based on inter-module dependencies, these algorithms facilitate smooth integration, version management, and release engineering, ensuring robust and reliable software products.
  
[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/topoSort.cpp){:target="_blank"}<br><br>




### 11. **Conway's Game of Life**

In online services such as Google Search, YouTube, and Gmail, understanding user behavior and engagement patterns is crucial for enhancing user experiences and personalization. The Game of Life can be applied to simulate and analyze user interactions, content consumption patterns, and community dynamics. By modeling user engagement, content popularity, and social interactions, Google can optimize content recommendations, ad targeting strategies, and platform design to better serve user needs and preferences.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/conway.cpp){:target="_blank"}<br><br>






### 12. **Huffman Coding**

**Data Compression**: Google's infrastructure deals with vast amounts of data generated and transmitted across its services and platforms. Huffman Coding can be employed for efficient data compression in storage systems, file formats, and communication protocols. By encoding data with variable-length codes based on frequency distributions, Google can reduce storage requirements, minimize bandwidth usage, and improve data transfer speeds, leading to faster access times and reduced network congestion.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/huffmann.cpp){:target="_blank"}<br><br>





### 13. **Traveling Salesman Problem (TSP)**

- Google's delivery and logistics services, such as Google Maps and Google Shopping, rely on efficient route planning and optimization algorithms to deliver goods and services to customers. The Traveling Salesman Problem can be used to find the shortest routes for delivery vehicles to visit multiple locations while minimizing travel time and distance.

- Google's data centers require efficient network connectivity and traffic routing to ensure reliable and high-performance operation of cloud services and applications. The Traveling Salesman Problem can be applied to optimize network paths and routing configurations for data transmission and packet forwarding.

- Google Maps and other location-based services provide users with accurate navigation and routing information for travel, transportation, and exploration. The Traveling Salesman Problem can be used to generate optimal routes for users to visit multiple points of interest or destinations in a given area.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/tsp.cpp){:target="_blank"}<br><br>




### 14. **Depth-First Search (DFS) and Breadth-First Search (BFS)**

- Google Search uses the PageRank algorithm to rank web pages based on their importance, where depth-first search (DFS) and breadth-first search (BFS) play crucial roles in traversing the web graph.

- Web Crawling for Google Search Index: Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms are fundamental to web crawling, a process by which search engines like Google discover and index web pages. DFS and BFS are used to traverse the interconnected network of web pages, following hyperlinks from one page to another to build a comprehensive index of the World Wide Web. By employing DFS and BFS strategies intelligently, Google can efficiently crawl and index billions of web pages, enabling users to find relevant information quickly and accurately through its search engine.

- Recommendation Systems in YouTube: Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms play a vital role in recommendation systems, such as those used in YouTube for suggesting videos to users. These algorithms help analyze the relationships between users, videos, and their interactions (likes, views, comments) to generate personalized recommendations. By traversing the user-video graph using DFS and BFS, Google can identify relevant videos based on user preferences, viewing history, and social connections, enhancing user engagement and satisfaction on the platform.

[View DFS code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/DFS.cpp){:target="_blank"}<br>
[View BFS code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/BFS.cpp){:target="_blank"}<br><br>



### 15. **Bridges/Articulation Points**

- Google's extensive network infrastructure requires robust reliability analysis to ensure seamless operation. Bridges and articulation points algorithms help identify critical components in the network topology, enabling Google to implement redundancy and fault tolerance mechanisms, thus enhancing network reliability and resilience against outages.

- Google's services handle immense user traffic, necessitating high fault tolerance. By employing articulation points algorithms, Google can identify vulnerable points within its service architecture and implement strategies like redundancy and load balancing to mitigate failures and maintain service availability and performance.

[View code for Bridges here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/Bridges.cpp){:target="_blank"}<br>
[View code for Articulation Points here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/ArticulationPoints.cpp){:target="_blank"}<br><br>








### 16. **Hashing Algorithms**

- Hashing algorithms are crucial for securing user data and authenticating accounts across Google's services like Gmail, Drive, and Cloud. Passwords are hashed using cryptographic algorithms before being stored, ensuring protection even if databases are compromised. Hashing is also used in encryption, digital signatures, and data integrity checks to secure sensitive information against unauthorized access.

- In Google Cloud Storage, hashing algorithms like SHA-256 can be used to verify the integrity of stored data. Files are hashed upon upload, and these hash values are used to ensure that the data remains unchanged and uncorrupted. This process helps detect any unauthorized modifications and maintains the authenticity of the data.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/hashing.cpp){:target="_blank"}<br><br>




### 17. **Spanning Trees**

- Spanning tree algorithms like Kruskal's Algorithm helps in designing Google's cloud infrastructure by creating minimum spanning trees (MSTs) to connect data centers, edge locations, and CDNs efficiently. This results in an optimized network with reduced latency, improved fault tolerance, and enhanced scalability for reliable and high-performance cloud services.

- Spanning tree algorithm can be used in optimizing routes for Google Maps by calculating MSTs for road networks, ensuring the most efficient paths between locations. This helps minimize travel distances and times, leading to more accurate and cost-effective navigation.

[View code for Kruskal's Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/kruskalAlgoritm.c){:target="_blank"}<br>
[View code for Prim's Algorithm here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/prim.cpp){:target="_blank"}<br><br>




### 18. **Binary Search Tree (BST)**

BSTs can be used for efficient data indexing and retrieval in Google Drive, organizing files and folders hierarchically based on metadata like file names or creation dates. This structure allows quick navigation and access, enhancing productivity and file management.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/BST.c){:target="_blank"}<br><br>




### 19.**LookUp Tables**

Lookup tables index data for efficient retrieval, enabling fast access to database records based on key values and reducing query latency. They are also used in caching systems to store frequently accessed data, accelerating access and reducing reliance on slower storage mediums like disks.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/lookupTable.cpp){:target="_blank"}<br><br>




### 20. **Longest Common Subsequence (LCS)**

- LCS is used to compare and determine the similarity between documents or web pages, which helps in ranking and retrieving the most relevant search results. By identifying the longest common subsequences, Google can better understand content relationships and enhance search accuracy.

- LCS is also used by YouTube to identify similar videos. By comparing the sequence of features or metadata associated with different videos, the algorithm helps in recognizing and recommending videos that share common characteristics or themes, enhancing the user experience by providing relevant video suggestions.

-  LCS can be employed to detect plagiarism by comparing the textual content of documents. By identifying the longest common subsequences between two or more texts, Google can efficiently determine the degree of similarity and detect copied or similar content across documents, ensuring the originality and integrity of information.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/lcs.cpp){:target="_blank"}<br><br>




### 21. **B-tree and B+ Trees**

Google's distributed file systems, such as Google File System (GFS) and Bigtable, leverage B-tree data structures for indexing and organizing vast amounts of data efficiently. B-trees provide logarithmic time complexity for search, insertion, and deletion operations, making them ideal for handling structured data in distributed storage systems. This ensures quick and reliable access to data, enhancing the overall performance of Google's storage solutions.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/btree.cpp){:target="_blank"}<br><br>



### 22.**Strongly Connected Components**
- By analyzing strongly connected components using algorithms like **Kosaraju's or Tarjan's**, Google can identify clusters of users who frequently interact with each other, indicating potential friendships or shared interests. This analysis can inform more accurate friend recommendations, helping users connect with others who are likely to share mutual interests or social connections.

- Understanding the network of user connections through strongly connected components enables Google to deliver targeted content to specific clusters of users.By customizing content delivery based on these connections, Google can ensure that users receive updates, posts, or events that are relevant to their social circles or interests, enhancing user engagement and satisfaction.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/SCC.cpp){:target="_blank"}<br><br>




### 23. **Fenwick Trees for Sum Query**

**Google Ads**: Fenwick Trees can be utilized in ad campaign optimization to efficiently manage and update metrics such as click-through rates (CTR), conversion rates, and return on investment (ROI) for various advertisement placements.Google Ads can employ Fenwick Trees to process and analyze large volumes of real-time data generated by ad interactions. By maintaining cumulative frequency tables using Fenwick Trees, Google can quickly compute metrics such as total impressions, clicks, and conversions for each ad placement or targeting segment. 

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/FenwickTree.cpp){:target="_blank"}<br><br>



### 24.**String Matching Algorithms** 
- String matching algorithms are employed in Gmail's spam filters to analyze the content of incoming emails. Suspected spam keywords or patterns are searched within the email content using string matching algorithms. If a significant number of these keywords or patterns are detected, the email may be classified as spam and moved to the spam folder, helping users avoid unwanted or potentially harmful messages.

- String matching algorithms like **KMP, Rabin-Karp, and Boyer-Moore** can be used to enable efficient search functionality in large databases. They compare search queries with indexed data, enabling quick and accurate retrieval of relevant information.

[View code for Rabin Karp here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/rabin.cpp){:target="_blank"}<br>
[View code for KMP here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/kmp.cpp){:target="_blank"}<br><br>




### 25.**Bloom Filters**
- Google Chrome uses a Bloom filter to quickly check if a URL might be harmful. When you try to access a URL, Chrome checks with a local Bloom filter in your browser first. This filter contains hashed malicious URLs. If the Bloom filter suggests the URL might be harmful, Chrome checks with Google’s servers for further verification. If the Bloom filter indicates the URL is safe, Chrome skips the server check, saving time and resources.

- Google leverages Bloom filters in its big data systems to expedite data retrieval processes. Systems like Apache Cassandra and HBase, which handle massive volumes of data, utilize Bloom filters for quick data retrieval. By employing Bloom filters, Google enhances the efficiency of indexing and searching operations, optimizes distributed storage systems, and aids in network traffic engineering.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/bloomfilters.cpp){:target="_blank"}<br><br>




### 26. **Persistent Segment Trees**

Persistent Segment Trees can be utilized in version control systems for efficient management of document edits and revisions.Google Docs can employ Persistent Segment Trees to store and track changes made to documents over time. By maintaining multiple versions of the document's content using Persistent Segment Trees, Google enables users to review, revert, and collaborate on edits seamlessly. This allows users to explore different document states, compare revisions, and roll back changes, facilitating collaborative document editing and version tracking.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/PersistentSegmentTree.cpp){:target="_blank"}<br><br>





### 27. **KD Trees**

Google Maps and other location-based services can utilize KD Trees for efficient nearest neighbor search and range queries. By organizing geographic points (e.g., landmarks, businesses, user locations) in a k-dimensional space, KD Trees enable quick retrieval of nearby points based on user queries, facilitating location-based recommendations, navigation, and geospatial analysis.

[View code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/KDTree.cpp){:target="_blank"}<br><br>




