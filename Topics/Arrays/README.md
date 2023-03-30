# Array
### <ul><li>It is a linear data structure  </li><li>Its size is allocated during the compile time. </li><li>Array can be accessed using its index </li><li>All the elemnts in an array are of same data type.</li.> </ul>
## Check out the <a href="./array.cpp">Code file</a>

## Important
### It is said that arrays have constant access time. But why?
#### Because address of an element in an array is calculated as an offset from the base address of the array. This process takes one addition and one multiplication. Since these two operations take constant time we can say that accessing elements in an array takes constant time.