// why Merge Sort?
// All Sorting we learn above Takes O(n^2) Time-Complexcity, whereas Merge Sort takes

// Merge Sort -> "Devide and Merge"
// Notice: example Array size: 9, if devided it in 5 and 4 (make sure further division should also Larger then Smaller)
// Array size: 9: if devided 4 and 5 (furher dision should also Smaller then Larger)

     /*            [3, 1, 2, 4, 1, 5, 2, 6, 4] 
                    |                   |            
            [3, 1, 2, 4, 1]          [5, 2, 6, 4]
                |        |              |     |
            [3, 1, 2]   [4, 1]        [5, 2] [6, 4]
              |    |     |  |
            [3, 1] [2]  [4] [1]
             |   |
            [3] [1]                                   */

// Array is Devided into their smaller elements, now will merge it and keep moving upward to gett whole Sorted array!

/*       [1, 1, 2, 2, 3, 4, 4, 5, 6]
            |                    |
  [1, 1, 2, 3, 4]              [2, 4, 5, 6]
       |      |                     |
 [1, 2, 3]  [1, 4]             [2, 4, 5, 6]
     |                           |       |
  [1, 3]                       [2, 5]  [4, 6]    */