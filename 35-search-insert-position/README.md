<h2><a href="https://leetcode.com/problems/search-insert-position/">35. Search Insert Position</a></h2><h3>Easy</h3><hr><div><p>Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.</p>

<p>You must&nbsp;write <span class="tou-node" id="tou-0-d1617e29-1bc5-41e8-b3c5-af93b02a9de5" lang="es"></span> with&nbsp;<code>O(log n)</code> <span class="tou-node" id="tou-2-6d12462e-d91d-4513-9219-44ea8fb5219b" lang="es"></span> <span class="tou-node" id="tou-6-2e7ef116-4ec6-4fd4-888e-74724c25ac14" lang="es"></span>.</p>

<p>&nbsp;</p>
<p><strong><span class="tou-node" id="tou-0.0-4ac515ca-e863-4a54-8c39-ec592fb26766" lang="es"></span> 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,6], target = 5
<strong>Output:</strong> 2
</pre>

<p><strong><span class="tou-node" id="tou-0.0-84767aef-b527-4712-ac16-23a36a0b3171" lang="es"></span> 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,6], target = 2
<strong>Output:</strong> 1
</pre>

<p><strong><span class="tou-node" id="tou-0.0-371436ac-bf0e-4efb-8082-a0c6a6fcb354" lang="es"></span> 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,6], target = 7
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> contains <strong>distinct</strong> values sorted in <strong>ascending</strong> order.</li>
	<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
</div>