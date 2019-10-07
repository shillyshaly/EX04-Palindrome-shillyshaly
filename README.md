## Exercise: Palidrome (25 Points)

The project name of this exercise is **Palindrome**.

The purpose of this assignment is to apply what you have learned about 
repetition structures and methods, as well as continue to use the concepts
you have already learned. Additionally, you learn about how to create your
own header files and implementation files.

### Problem Description

Write a method 

```cpp
boolean isPalindrome(const std::string &str)
```

that returns true if str is a palindrome, that is, a word that is the same when reversed. 
Examples of palindrome are “deed”, “rotor”, or “aibohphobia”. You can write this function either
using a repetition structure or using recursion. Recursive implementations will automatically get
the full 25 points without regard for style.

_Hint: A word is a palindrome if the first and last letters match and the remainder is also a palindrome._

### Getting Started

The first thing you will need to do is accept the invitation to this 
assignment from GitHub Classroom. You can click 
[here](https://classroom.github.com/a/58TIHTBb) to accept the 
invitation, and get started.

Be sure that you accept the invitation first and use the URL to your new project when you clone it in CLion. After copying
the URL into the clipboard, in CLion click **VCS -> Checkout from Version Control -> Git**. Paste the URL into the **URL** box of the _Clone Repository_ dialog box and press **Clone**.

### Writing the code for this Project

In CLion in the project explorer, right-click the `src` directory
and chose `New => C/C++ Source File`. 

![Adding source file](https://github.com/sbcc-cs140-fall2018/Course-Information/wiki/images/03_new_source_file.png)

Under **Name** fill in
main. CLion will add the extension, but by default 
adds the `.cpp` extension. All projects in this class will
use the `.cc` extension. Select `.cc` in the **Type** drop-down
and press **OK**. You should now see the file `main.cc` in
the project explorer in the `src` directory.

Copy and paste the following code into this file over any
contents that may already be in the `main.cc` file.

```cpp
/**
 * CS V30 Beginning C++
 * Assignment: Palindrome
 * 
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 * 
 * @author [CHANGE THIS TO YOUR INFORMATION]
 */

#include <iostream>

int main(int argc, char *argv[]) {
    // Put your code for this project here.
    return 0;
}
```

Now go through **main.cc** and change the [CHANGE THIS TO YOUR INFORMATION] text to your name and email address.

Next, write your code that determines if a string is a palindrome in the palindrome.cc file provided with
this assignment. I'll explain in class about the header and source files.

### Running the code for this project

Running this code should be straightforward. In the drop-down 
menu in the upper right-hand corner you should see a *Run
Configuration* called `Palindrome | Debug`. Make sure this 
configuration is selected and press the play button next to it.
In the **Run** view below the code you should see the output 
of running the program. It should look something like this:

Using the test input, your output should look like:

```
Enter a string: bob 
bob is palindrome

Process finished with exit code 0
```

Success! Now you can move on to testing your code.

### Testing the code for this project

Testing the code for this project is similar to running your code
as outlined above. In the drop-down menu in the upper right-hand
corner select the target `All in Palindrome_Gtest | Debug` and press the 
play button next to it. In the **Run** view below the code you should
see the output of running these tests. It should look something
like this:

```bash
Testing started at 9:11 PM ...
/tmp/tmp.Cch8RBWczh/cmake-build-debug/../bin/Palindrome_GTest --gtest_filter=* --gtest_color=no
Running main() from gtest_main.cc

Your unit test score is 20 out of 20
The assignment is worth a total of 25 where the remainder of 5 points
comes from grading related to documentation, algorithms, and other
criteria.


Process finished with exit code 0
```

### Pushing your code to GitHub

Now you need to turn in your code by sending, or pushing, your code to GitHub. You created a 
GitHub repository when you started the assignment. Now you need to take your local code changes
and send them to GitHub so that you can turn it in and have it graded in the next step in the
work flow.

The first step is to commit your code locally. This tell git what files you want to turn in. In 
this case you only need to turn in the contents of `main.cc`. In the Project view, right-
click **EX04-Palindrome** and then select **Git -> Commit Directory...**. In the dialog box that
pops up, be sure only `grade` is selected and that there is some text in the _Commit 
Message_ box. A good commit message would be something like `Committing code to get a good grade`.

Once the commit is finished, which is a purely local action, you need to send that commit to 
GitHub. This is called the push phase of the process. Again right-click on **EX04-Palindrome**.
Then select **Git -> Repository -> Push**. In the dialog box that pops up, push the **Push** button
and that should be it. You should see a message that says the push was successful. In the next
step you'll confirm that your code is working and then submit it for a grade.

### Turning in and Grading your code

Go back to LazyGrader and login again, if needed. Press the _Build_ button next to 
**EX04-Palindrome** for this course. This will send a command to Jenkins to download your code
from GitHub and test it. If all goes well and all the tests pass, the ball next to the _Build_
will turn blue. If some of the tests don't pass the ball will be yellow. If the ball is grey,
that means you have not run the tests before and your project is not ready for grading.

Once the Jenkins status is blue or yellow, press the _Grade_ button for **EX04-Palindrome**.
This will read the results from Jenkins and send your grade to Canvas. Once the notification in 
LazyGrader says the grade has been posted, you should see your grade on Canvas.

That's it, once you've submitted your grade, you are done. I will add points later, after I
inspect your code. For example, most projects will be out of a total of 25 points, but after 
pressing the _Grade_ button, Canvas will show 20 points. I will add up to 5 points after I have
looked at your code and am conviced it is original.
