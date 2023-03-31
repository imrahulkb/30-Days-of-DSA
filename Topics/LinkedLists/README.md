# Linked Lists
### A linked list is a data structure used for storing collections of data.
<p>In a linked list 
    <ul>
        <li>successive elements are connected by pointers</li>
        <li>Last element points to null</li>
        <li>Can shrink and grow during the execution of a program</li>
        <li>Can grow as much a required until system memory exhausts</li>
        <li>does not waste space unlike arrays but uses extra space for pointers</li>
    </ul> 
</p>

## Problems Based on Linked List
<div align="center">
    <table>
        <tr>
            <th>Sr.#</th>
            <th>Problem</th>
            <th>Solution</th>
        </tr>
        <tr>
            <td>1</td>
            <td>Find the nth node from the end of the linked list</td>
            <td><a href="./llproblem1.cpp"></a></td>
        </tr>
        <tr>
            <td>2</td>
            <td>Check whether a linkedlist is NULL-terminated or is cyclic</td>
            <td><a href="./llproblem2.cpp"></a></td>
        </tr>
        <tr>
            <td>3</td>
            <td>Reverse a linked list</td>
            <td><a href="./llproblem3.cpp"></a></td>
        </tr>
    
    </table>
</div>


## Time Complexity
<div align="center"><table>
    <tr>
        <th>Parameter</th>
        <th>Linked List</th>
        <th>Array</th>
        <th>Dynamic Array</th>
    </tr>
    <tr>
        <td>Indexing</td>
        <td>O(n)</td>
        <td>O(1)</td>
        <td>O(1)</td>
    </tr>
    <tr>
        <td>Insertion/Deletion at beginning</td>
        <td>O(1)</td>
        <td>O(n)</td>
        <td>O(n)</td>
    </tr>
    <tr>
        <td>Insertion at ending</td>
        <td>O(n)</td>
        <td>O(1) if array not full</td>
        <td>O(1) if there is space/O(n) if no space</td>
    </tr>
    <tr>
        <td>Deletion at ending</td>
        <td>O(n)</td>
        <td>O(1) </td>
        <td>O(n) </td>
    </tr>
    <tr>
        <td>Insertion/Deletion at middle</td>
        <td>O(n)</td>
        <td>O(n) if array not full</td>
        <td>O(n)</td>
    </tr>
    
</table>
</div>

