<h2>  Remove Duplicates from Sorted Array</h2><hr><div><p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing order</strong>, remove the duplicates <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a> such that each unique element appears only <strong><span class="tou-node" id="tou-7.0-748007d1-633a-40ed-a725-56761d0d4338" lang="es"></span></strong>. The <strong>relative order</strong> of the elements should be kept the <strong>same</strong>.</p>

<p>Since it is impossible to change the length of the array in some languages, you must <span class="tou-node" id="tou-0-860b4e3c-3d20-4358-b133-e449ba2fb016" lang="es"></span> have <span class="tou-node" id="tou-0-fbc175b9-83d4-4d72-85a5-b806f8062605" lang="es"></span> be placed in the <strong>first part</strong> of the array <code>nums</code>. More formally, if there are <code>k</code> elements after removing the duplicates, then <span class="tou-node" id="tou-6-3bc70793-0f49-4343-9f9f-3272a66d217d" lang="es"></span> <code>k</code> elements of <code>nums</code>&nbsp;should hold <span class="tou-node" id="tou-10-f0bc98e4-e7e7-4f0d-94fe-4fe26541d7a9"></span> result. It does not matter what you leave beyond <span class="tou-node" id="tou-6-183bc1c1-aecd-48d5-877a-8646481ed22b" lang="es"></span>&nbsp;<code>k</code>&nbsp;elements.</p>

<p>Return <code>k</code><em> after placing <span class="tou-node" id="tou-2.0-9a32bc9c-a95c-4d4a-af47-fa57200b591f"></span> result in <span class="tou-node" id="tou-2.0-8b9fd38d-a51f-4e38-88b7-da6436e4d532"></span> </em><code>k</code><em> slots of </em><code>nums</code>.</p>

<p>Do <strong>not</strong> allocate extra space for another array. You must do this by <strong>modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a></strong> with O(1) extra <span class="tou-node" id="tou-4-a68bb8c7-5e00-42b9-b6f8-3a1e0dde491b" lang="es"></span>.</p>

<p><strong>Custom Judge:</strong></p>

<p>The judge will test your <span class="tou-node" id="tou-0-2b625791-8dea-4ef5-a778-01c739c5dae4" lang="es"></span> with the <span class="tou-node" id="tou-0-7a589513-afe6-4b63-a570-fb7ff9980589"></span> code:</p>

<pre>int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i &lt; k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your <span class="tou-node" id="tou-0-3ccc4f25-b774-4ea4-9c6e-ace9abb55825" lang="es"></span> will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong><span class="tou-node" id="tou-0.0-46f72b81-01fd-46e7-afe1-830fc0bf7a9d" lang="es"></span> 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,2]
<strong>Output:</strong> 2, nums = [1,2,_]
<strong>Explanation:</strong> Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,0,1,1,1,2,2,3,3,4]
<strong>Output:</strong> 5, nums = [0,1,2,3,4,_,_,_,_,_]
<strong>Explanation:</strong> Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-100 &lt;= nums[i] &lt;= 100</code></li>
	<li><code>nums</code> is sorted in <strong>non-decreasing</strong> order.</li>
</ul>
</div>