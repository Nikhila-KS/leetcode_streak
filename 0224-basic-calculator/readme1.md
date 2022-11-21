# 224. Basic Calculator
## Hard


Given a string s representing a valid expression, implement a basic calculator to evaluate it, and return the result of the evaluation.

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

 

## Example 1:

Input: s = "1 + 1"<br>
Output: 2
## Example 2:

Input: s = " 2-1 + 2 "<br>
Output: 3
## Example 3:

Input: s = "(1+(4+5+2)-3)+(6+8)" <br>
Output: 23
 

# Constraints:

* 1 <= s.length <= 3 * 105 <br>
* s consists of digits, '+', '-', '(', ')', and ' '.<br>
* s represents a valid expression.<br>
* '+' is not used as a unary operation (i.e., "+1" and "+(2 + 3)" is invalid).<br>
* '-' could be used as a unary operation (i.e., "-1" and "-(2 + 3)" is valid).<br>
* There will be no two consecutive operators in the input.<br>
* Every number and running calculation will fit in a signed 32-bit integer.<br>
