<h2>  Valid Palindrome</h2><hr><div><p>A phrase is a <strong><span class="tou-node" id="tou-1.0-f98cd5cf-80c0-4b70-9b3d-ecdac62dafbe" lang="es"></span></strong> if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.</p>

<p>Given a string <code>s</code>, return <code>true</code><em> if it is a <strong><span class="tou-node" id="tou-4.1.0-04dd78b5-c988-4374-b578-02c28814dc86"></span></strong>, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong><span class="tou-node" id="tou-0.0-eced7906-ca94-4bde-9887-d3624f95177c" lang="es"></span> 1:</strong></p>

<pre><strong>Input:</strong> s = "A man, a plan, a canal: Panama"
<strong>Output:</strong> true
<strong>Explanation:</strong> "amanaplanacanalpanama" is a palindrome.
</pre>

<p><strong><span class="tou-node" id="tou-0.0-9c60058a-2d3c-4892-badc-71a6c82573fe" lang="es"></span> 2:</strong></p>

<pre><strong>Input:</strong> s = "race a car"
<strong>Output:</strong> false
<strong>Explanation:</strong> "raceacar" is not a palindrome.
</pre>

<p><strong><span class="tou-node" id="tou-0.0-3208e698-e25b-45b6-9f9d-bd0497ce7b02" lang="es"></span> 3:</strong></p>

<pre><strong>Input:</strong> s = " "
<strong>Output:</strong> true
<strong>Explanation:</strong> s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of printable ASCII characters.</li>
</ul>
</div>