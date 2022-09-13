<h2><a href="https://leetcode.com/problems/remove-element/">27. Remove Element</a></h2><h3>Easy</h3><hr><div><p>Given an integer array <code>nums</code> and an integer <code>val</code>, remove all occurrences of <code>val</code> in <code>nums</code> <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a>. The relative order of the elements may be changed.</p>

<p>Since it is impossible to change the length of the array in some languages, you must <span class="tou-node" id="tou-0-00cb5fef-1138-45bd-bda2-3609eeb03c49" lang="es"></span> have <span class="tou-node" id="tou-0-e845fa95-d53b-4b04-9a96-2ac506fedd00" lang="es"></span> be placed in the <strong><span class="tou-node" id="tou-1.0-2b9562f5-aa6a-49f8-b4c3-277bf94fe085" lang="es"></span> part</strong> of the array <code>nums</code>. More formally, if there are <code>k</code> elements after removing the duplicates, then <span class="tou-node" id="tou-6-d2902e25-9124-4a58-9450-b64b5dc5b13f" lang="es"></span> <code>k</code> elements of <code>nums</code> should hold the <span class="tou-node" id="tou-10-4813dc0c-3ecd-4436-ace0-962c754ce33f" lang="es"></span>. It does not matter what you leave beyond <span class="tou-node" id="tou-6-b08dc1b7-4c46-4e74-83cd-2a38599cd0bd"></span> <code>k</code> elements.</p>

<p>Return <code>k</code><em> after placing the <span class="tou-node" id="tou-2.0-38d2cfd4-1507-4d2c-9e96-fdcb82406817" lang="es"></span> in <span class="tou-node" id="tou-2.0-b7965505-eff4-46cb-a994-1e471aed999b" lang="es"></span> </em><code>k</code><em> slots of </em><code>nums</code>.</p>

<p>Do <strong>not</strong> allocate extra space for another array. You must do this by <strong>modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a></strong> with O(1) extra <span class="tou-node" id="tou-4-44947350-4613-4aab-ae54-8dd13d8353dc" lang="es"></span>.</p>

<p><strong>Custom Judge:</strong></p>

<p>The judge will test your <span class="tou-node" id="tou-0-579eff18-1c2a-49ec-ad54-71162b5f127a" lang="es"></span> with the following code:</p>

<pre>int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i &lt; actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,2,2,3], val = 3
<strong>Output:</strong> 2, nums = [2,2,_,_]
<strong>Explanation:</strong> Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,1,2,2,3,0,4,2], val = 2
<strong>Output:</strong> 5, nums = [0,1,4,0,3,_,_,_]
<strong>Explanation:</strong> Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 50</code></li>
	<li><code>0 &lt;= val &lt;= 100</code></li>
</ul>
</div>