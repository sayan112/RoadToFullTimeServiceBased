**_ Explain Your Project _**
= Certainly, as a candidate, I would answer the interview questions related to the NoteFy project as follows:

1. **Project Overview:**

   - NoteFy is a notes application that I developed to provide users with a secure and user-friendly platform for managing their notes. The project aimed to implement JWT authentication for enhanced data protection and offer CRUD functionality for creating, reading, updating, and deleting notes.

2. **Technology Stack:**

   - For NoteFy, I used React and Bootstrap for the front-end development to create a responsive and visually appealing user interface. On the backend, I employed Node.js to build the server, and MongoDB was chosen as the database for efficient data storage and retrieval. These technologies were selected for their compatibility and suitability for the project requirements.

3. **Authentication and Security:**

   - JWT (JSON Web Tokens) authentication was implemented to ensure secure access to user accounts and protect data. Users were required to log in with their credentials, and upon successful authentication, they received a JWT token, which was used to authenticate subsequent requests.

4. **CRUD Functionality:**

   - The CRUD functionality in NoteFy allowed users to create, read, update, and delete their notes. These operations were seamlessly integrated into the user interface, making it easy for users to manage their notes efficiently.

5. **User Experience:**

   - To make NoteFy user-friendly, I focused on creating an intuitive and visually appealing interface. I incorporated responsive design principles to ensure a consistent experience across various devices. Additionally, I considered user feedback and conducted usability testing to refine the application's user experience.

6. **Database Design:**
   - In MongoDB, I designed a schema that efficiently stored user notes, including metadata such as timestamps. Indexing and appropriate data structures were utilized to optimize data retrieval and ensure the application's responsiveness.
7. **Performance Optimization:**

   - While developing NoteFy, I continuously monitored performance and addressed bottlenecks as needed. I implemented caching strategies and optimized database queries to improve response times.

8. **Scalability:**

   - NoteFy was designed with scalability in mind. The architecture allowed for horizontal scaling of the application to accommodate a growing user base. Load balancing and database sharding could be considered for future scalability requirements.

9. **Version Control and Collaboration:**

   - I used Git for version control throughout the development of NoteFy. While I primarily worked on the project independently, I also collaborated with team members who provided valuable insights and feedback during code reviews.

10. **Challenges and Problem-Solving:**

    - One significant challenge I faced during the development of NoteFy was ensuring the security of user data and JWT tokens. Implementing JWT authentication was a crucial security measure, but I needed to make sure it was robust against various attack vectors. To address this, I conducted extensive research, consulted security best practices, and implemented measures such as token expiration and token revocation to mitigate security risks effectively.

11. **Future Improvements:**
    - In the future, I would prioritize enhancing the search functionality, implementing real-time collaboration features, and adding support for file attachments to further improve the user experience in NoteFy.

I hope these responses demonstrate my experience and abilities in developing the NoteFy project effectively.

**_ Purpose of the project _**
= If an interviewer asks, "What was the purpose of the project?" during an interview regarding the NoteFy project, you can provide a concise and clear explanation of the project's objectives. Here's how you can respond:

"The primary purpose of the NoteFy project was to develop a secure and user-friendly notes application that empowers users to efficiently manage their notes. This application aimed to provide a platform for users to create, read, update, and delete notes while ensuring their data's security through JWT authentication. The project's core objectives were:

1. **User-Friendly Experience:** To offer a user-friendly and intuitive interface, making it easy for users to organize and access their notes.

2. **Security:** To implement JWT authentication for user account protection and data security, ensuring that only authorized users could access their notes.

3. **CRUD Functionality:** To seamlessly integrate CRUD functionality, allowing users to perform common note management operations effortlessly.

4. **Efficient Data Storage:** To develop a robust backend using Node.js and MongoDB for efficient storage and retrieval of user notes.

By achieving these objectives, NoteFy aimed to enhance the overall note-taking experience for its users and ensure that their data remains both accessible and secure."

**\* how do u inplement JWT \*\***

= JWT stands for JSON Web Token, and it is a compact, self-contained means of securely transmitting information between two parties. JWTs are commonly used for authentication and authorization purposes in web applications. They consist of three parts: a header, a payload, and a signature. Here's a brief overview of each part:

To integrate JWT authentication into a web application like NoteFy, you would typically follow these steps:

1. **User Registration and Login:** Users register with the application, providing their email and password. Upon successful registration or login, the server generates a JWT token containing information about the user (such as their user ID) and signs it using a secret key.

2. **Token Storage:** The client (usually a web browser) stores the JWT token, typically in local storage or a cookie.

3. **Token Sending:** For subsequent requests to the server, the client sends the JWT token in the Authorization header of the HTTP request.

4. **Token Verification:** The server receives the JWT token in each request and verifies its signature using the same secret key. If the signature is valid, the server knows that the token hasn't been tampered with.

5. **Access Control:** The server checks the claims within the JWT to determine whether the user is authorized to access the requested resource.

6. **Expiration:** JWTs often have an expiration time (the "exp" claim), and the server checks whether the token is still valid based on this expiration time. If the token has expired, the user is required to log in again.

**Normal website:** Relies on session cookies for user authentication and session management. Server maintains session state.
**JWT authenticated website:** Uses JWTs for authentication and authorization. Client holds the token, and server verifies it with each request. Allows for stateless authentication.

In NoteFy, I integrated JWT authentication by following these steps, ensuring that user data and access to notes were securely protected and that users could perform CRUD operations on their notes while authenticated. The use of JWTs provided a convenient and secure way to manage user sessions and access control in the application.

**_ JWT THE BAAP OF security _**

Authentication:

JWTs are commonly used to authenticate users. When a user logs in with their email and password, the server can issue a JWT to represent their authenticated session.
This JWT can then be used for subsequent requests to prove the user's identity without needing to send the email and password with every request.

Reduced Exposure of Sensitive Data:

When a user logs in, their email and password are transmitted securely over HTTPS. After authentication, JWTs are used, so the email and password are no longer sent with every request. This reduces the risk of interception.

**_Explain CRUD_**
Create (POST):

createNote function handles the creation of a new note.
It extracts title, content, and category from the request body.
It checks if all required fields are provided, if not, it responds with a 400 status and an error message.
If all fields are provided, it creates a new Note instance with the user ID, title, content, and category.
It saves the note to the database and responds with status 201 (created) along with the created note.
Read (GET):

getNotes function retrieves all notes associated with the currently authenticated user.

It extracts the user ID from the request (req.user.\_id) assuming there's a user object attached to the request.

It finds all notes in the database with the matching user ID and responds with those notes in JSON format.

getNoteById function retrieves a single note by its ID.

It finds the note in the database using the provided ID (req.params.id) and responds with that note if found, otherwise, it responds with a 404 status and a message indicating that the note was not found.

Update (PUT/PATCH):

updateNote function updates an existing note.
It extracts title, content, and category from the request body.
It finds the note in the database by its ID (req.params.id).
It checks if the authenticated user owns the note. If not, it responds with a 401 status and an error message.
If the note exists and is owned by the user, it updates its fields with the provided values.
It saves the updated note to the database and responds with the updated note.

Delete (DELETE):

deleteNote function deletes a note by its ID.
It extracts the note ID from the request parameters.
It finds the note in the database using the provided ID.
It checks if the authenticated user owns the note. If not, it responds with a 401 status and an error message.
If the note exists and is owned by the user, it removes the note from the database and responds with a success message.

**_ Explain the other Project _**

Certainly, as a fresh computer science candidate, I'll explain the eCommerce platform project for Nike Sneaker purchases that I built using Tailwind CSS, React, and JavaScript.

**Project Overview:**
I had the opportunity to work on an eCommerce platform for Nike Sneaker purchases. The primary goal of this project was to create a user-friendly and efficient online shopping experience for customers looking to buy Nike sneakers. This project showcased my skills in web development, specifically in frontend technologies.

**Technology Stack:**
For this project, I utilized the following technologies:

1. **Tailwind CSS:** I used Tailwind CSS to quickly and efficiently style the user interface. It allowed me to create a visually appealing design while maintaining a responsive and consistent look and feel throughout the platform.

2. **React:** React served as the foundation for building the frontend of the eCommerce platform. It provided a structured and component-based approach to creating interactive user interfaces.

3. **JavaScript:** JavaScript was instrumental in adding interactivity to the platform. It enabled features like product selection, cart functionality, and dynamic page updates.

**Key Features and Achievements:**

1. **User-Friendly Interface:** One of the project's primary objectives was to provide users with an intuitive and user-friendly interface. I focused on creating a layout that was easy to navigate and understand, ensuring that customers could find and purchase their desired Nike sneakers effortlessly.

2. **High-Quality Product Images:** To enhance the shopping experience, I incorporated high-quality product images. Clear and detailed images are essential in eCommerce, as they help customers make informed purchasing decisions.

3. **Cart Functionality:** Implementing a cart functionality was crucial for allowing users to add and manage the items they wanted to purchase. The cart provided a summary of selected items and their prices, improving the overall shopping experience.

4. **Unique UI/UX Design:** I paid special attention to the user interface and user experience design. A unique and visually appealing design can set an eCommerce platform apart and leave a positive impression on customers.

5. **Lazy Loading:** To ensure quick page loads and a delightful user experience, I incorporated lazy loading techniques. This meant that product images and other resources were loaded only when needed, reducing initial page load times.

**What I Learned:**

Through this project, I gained valuable experience in frontend development, including using popular frameworks and libraries like React and Tailwind CSS. I also learned the importance of user-centered design and the impact it can have on customer engagement and satisfaction in eCommerce applications.

Overall, this project allowed me to apply my programming and design skills to create a real-world solution that provides a seamless shopping experience for users interested in Nike sneakers. It was a valuable learning experience, and I look forward to further opportunities to expand my knowledge and contribute to similar projects in the future.

**_ what is Lazy Loading _**

LAzy loading defer the loading of non-essential resources at the initial page load. Instead of loading all resources (such as images, scripts, or data) when the page is first accessed, lazy loading delays the loading of these resources until they are actually needed.

In the context of web development, lazy loading is often used to improve page load times and overall performance by only loading resources as the user interacts with the page. For example, images "below the fold" (not initially visible on the screen) can be loaded only when the user scrolls down to view them, rather than being loaded all at once when the page is first accessed.

<!-- import LazyLoad from 'react-lazy-load';
    <LazyLoad height={250}>
      <Image pic='https://placedog.net/500/400' />
    </ LazyLoad> -->

Sure, I'd be happy to help! Below are some commonly asked questions in interviews for fresher positions related to HTML, CSS, and JavaScript, along with their explanations.

1. UI and UX
   = UI (User Interface) and UX (User Experience) are closely related concepts in the field of design, but they serve different purposes and focus on different aspects of the user interaction with a product or system.

1. UI (User Interface):

   - UI refers to the visual and interactive elements of a product or system that users directly interact with.
   - It includes elements such as buttons, icons, menus, text fields, images, and the overall layout and design of the user interface.
   - UI design focuses on creating an aesthetically pleasing and user-friendly interface that is visually appealing and easy to navigate.
   - UI designers are responsible for choosing colors, fonts, and visual elements to create an engaging and cohesive user interface.

1. UX (User Experience):
   - UX refers to the overall experience that a user has while interacting with a product or system, encompassing their emotions, satisfaction, and usability.
   - It involves understanding the user's needs, behaviors, and goals and designing the product or system to meet those needs effectively.
   - UX design focuses on enhancing the overall user experience, making it enjoyable, efficient, and meaningful.
   - UX designers conduct user research, create user personas, design user flows, and conduct usability testing to ensure a seamless and satisfying experience.

In summary, while UI design focuses on the visual and interactive aspects of the user interface, UX design takes a broader approach by considering the entire user journey and aims to create a positive and meaningful experience for the user. Both UI and UX are essential in the design of successful and user-friendly products and systems.

12. what is Material UI ?
    = Material UI is an open-source React component library that implements Google's Material Design.

It includes a comprehensive collection of prebuilt components that are ready for use in production right out of the box.

Material UI is beautiful by design and features a suite of customization options that make it easy to implement your own custom design system on top of our components.

14. what is Complied and Interpreted language ?
    = Compiled and interpreted languages are two different approaches to executing computer programs. Here's an explanation of each:

**Compiled Language:**
A compiled language is one where the source code is translated into machine code or an intermediate code (such as bytecode) before it is executed. This translation process is performed by a compiler, which is a program specifically designed for this task. The compiler reads the entire source code, checks it for errors, and translates it into a form that can be executed directly by the computer's CPU. The resulting compiled code is usually stored in a separate file and can be run without the need for the original source code.

Examples of compiled languages include C, C++, Rust, and Fortran. In these languages, you typically write your code, compile it with a compiler, and then run the compiled executable.

**Interpreted Language:**
An interpreted language is one where the source code is executed line by line by an interpreter at runtime. The interpreter reads each line of code, translates it into machine code (or an intermediate representation), and executes it immediately. This means that you don't need a separate compilation step; you can run the code directly without generating an executable file.

Examples of interpreted languages include Python, JavaScript, Ruby, and PHP. In these languages, you typically write your code and run it directly through an interpreter.

It's important to note that there are also hybrid approaches and variations in between these two categories. Some languages, like Java and C#, are compiled into bytecode, which is then executed by a virtual machine (e.g., the Java Virtual Machine or Common Language Runtime). These languages combine aspects of both compiled and interpreted languages.

15. SQL vs MongoDB ?

=
Sure, here's a comparison between SQL (relational databases) and MongoDB (a NoSQL document database) in a table format:

| Aspect          | SQL (Relational Database)                                              | MongoDB (NoSQL Document Database)                                |
| --------------- | ---------------------------------------------------------------------- | ---------------------------------------------------------------- |
| Data Structure  | Tables with structured rows and columns                                | Collections of flexible JSON-like documents                      |
| Schema          | Requires a predefined schema with fixed structure                      | Schema-less, dynamic and flexible                                |
| Query Language  | SQL (Structured Query Language)                                        | Query using JSON-like syntax                                     |
| Relationships   | Supports complex relationships using foreign keys                      | Supports embedded documents and references                       |
| Scalability     | Vertical scaling (add more resources to a single server)               | Horizontal scaling (add more servers to a cluster)               |
| ACID Compliance | Strong ACID (Atomicity, Consistency, Isolation, Durability) guarantees | Eventual consistency by default, with tunable consistency levels |
| Performance     | Good for complex queries and transactions                              | Good for read-heavy, write-heavy, and large-scale data           |
| Flexibility     | Rigid schema structure may limit flexibility                           | Highly flexible and adaptable to changing data                   |

**_MongoDB_**
is a popular NoSQL (Not Only SQL) database management system that is designed for handling unstructured or semi-structured data. It is classified as a document database, which means it stores data in a format similar to JSON (JavaScript Object Notation). MongoDB is known for its flexibility, scalability, and ease of use, making it suitable for a wide range of applications.

An **_API_** (Application Programming Interface) is a set of rules and protocols that allows different software applications to communicate with each other. It defines the methods and data formats that applications can use to request and exchange information. APIs are commonly used in web development, allowing different web services or applications to interact with each other and share data.

**HTTP** (Hypertext Transfer Protocol) is a protocol used for transmitting data over the internet. It is the foundation of data communication in the World Wide Web. HTTP defines a set of request methods (such as GET, POST, PUT, DELETE) that indicate the desired action to be performed on a resource identified by a URL (Uniform Resource Locator).

Here's a brief description of each HTTP method:

GET: This method requests data from a specified resource. It should only retrieve data and should not have any other effect on the server.
POST: This method is used to submit data to be processed to a specified resource. It often results in the creation of a new resource or the update of an existing one.
PUT: This method is similar to POST, but it is used to update a resource or create it if it does not exist at the specified URL.
DELETE: This method is used to request the removal of a resource identified by a specific URL.

**HTML:**

1. **What is HTML?**

   - HTML stands for HyperText Markup Language. It's the standard markup language for creating web pages and web applications.

2. **What is the purpose of the doctype declaration in HTML?**

   - The doctype declaration specifies the version of HTML that the web page is using, which helps browsers render the page correctly.

3. **What are semantic elements in HTML?**

   - Semantic elements are HTML tags that convey meaning about the structure and content of the web page. Examples include `<header>`, `<nav>`, `<section>`, and `<footer>`.

4. **What's the difference between `<div>` and `<span>` elements?**

   - `<div>` is a block-level element used for grouping and styling larger sections, while `<span>` is an inline element used for applying styles to smaller portions of text or content.

5. **Explain the difference between `<input type="submit">` and `<button>` elements.**

   - Both can be used to submit forms, but `<button>` allows more flexibility in terms of content and styling, while `<input type="submit">` is a standardized way to create a submit button.

6. **What is the `alt` attribute used for in the `<img>` tag?**

   - The `alt` attribute provides alternative text for an image, which is displayed if the image fails to load or for accessibility purposes (screen readers).

7. **What's the purpose of the `<meta>` tag in HTML?**

   - The `<meta>` tag is used to provide metadata about the HTML document, such as character encoding, author, description, and more.

8. **How can you create a hyperlink in HTML?**

   - Hyperlinks are created using the `<a>` (anchor) tag. The `href` attribute specifies the URL the link points to.

9. **Explain the concept of HTML forms.**

   - HTML forms are used to collect user input. They consist of various form elements like text fields, radio buttons, checkboxes, and buttons. The data is sent to a server for processing.

10. **What's the difference between the `GET` and `POST` methods in a form?**

    - The `GET` method appends form data to the URL as query parameters, suitable for requesting data. The `POST` method sends data in the request body, suitable for sending sensitive or large amounts of data.

11. **What is the difference between `<article>` and `<section>` elements?**

    - `<article>` is used to represent a self-contained composition, such as a news article. `<section>` is a generic container for grouping related content.

12. **Explain the `<iframe>` element in HTML.**

    - An `<iframe>` (inline frame) is used to embed another document within the current HTML document. It's often used for embedding videos, maps, or other external content.

13. **What is the purpose of the `<details>` and `<summary>` elements?**

    - The `<details>` element defines a disclosure widget that can be toggled to show or hide content. The `<summary>` element provides a visible label for the widget.

14. **What does the `role` attribute do in HTML?**

    - The `role` attribute specifies the role of an element in accessibility terms. It helps assistive technologies understand the purpose of elements on the page.

15. **Explain the difference between the `<ol>` and `<ul>` elements.**

    - `<ol>` is used for ordered (numbered) lists, while `<ul>` is used for unordered (bulleted) lists.

16. **How do you create a clickable email link in HTML?**

    - You can use the `<a>` tag with the `href` attribute set to `mailto:email@example.com`.

17. **Explain the concept of HTML5 semantic elements.**

    - HTML5 introduced new semantic elements like `<header>`, `<nav>`, `<main>`, `<article>`, `<aside>`, and `<footer>`. They provide clearer meaning to the structure of a web page.

18. **What's the purpose of the `<figure>` and `<figcaption>` elements?**

    - `<figure>` is used to encapsulate media content like images, videos, or illustrations, while `<figcaption>` is used to provide a caption for the content within the `<figure>`.

19. **How can you create a comment in HTML?**
    - HTML comments are created using `<!-- Comment text here -->`. They are not displayed on the rendered page and are used for adding notes to the code.
20. **new html tags**
= <video width="320" height="240" controls>
  <source src="movie.mp4" type="video/mp4">
  <track src="subtitles.vtt" kind="subtitles" srclang="en" label="English">
</video>
<br>
AUDIO
<br>
<audio controls>
  <source src="voice.ogg" type="audio/ogg">
</audio>

21. Pratice Forms :)

<form action="#" method="post">
  <label for="firstname">First Name:</label><br>
  <input type="text" id="firstname" name="firstname" required><br><br>
  
  <label for="lastname">Last Name:</label><br>
  <input type="text" id="lastname" name="lastname" required><br><br>
  
  <label for="email">Email:</label><br>
  <input type="email" id="email" name="email" required><br><br>
  
  <label for="age">Age:</label><br>
  <input type="number" id="age" name="age" min="18" required><br><br>
  
  <label for="gender">Gender:</label><br>
  <select id="gender" name="gender" required>
    <option value="">Select</option>
    <option value="male">Male</option>
    <option value="female">Female</option>
    <option value="other">Other</option>
  </select><br><br>
  
  <input type="submit" value="Submit">
</form>

**CSS:**

1. **What is CSS?**

   - CSS stands for Cascading Style Sheets. It's used for styling web pages and controlling their layout and presentation.

2. **How do you include CSS styles in an HTML document?**

   - CSS can be included in an HTML document through inline styles (using the `style` attribute), internal styles (using the `<style>` tag within the `<head>`), and external styles (linking to an external `.css` file using the `<link>` tag).

3. **Explain the difference between classes and IDs in CSS.**

   - Classes are used to apply styles to multiple elements, while IDs are used to uniquely identify a single element on the page. IDs should be unique, whereas multiple elements can share the same class.

4. **What's the box model in CSS?**
   The box model is a fundamental concept in CSS (Cascading Style Sheets) that describes the layout of elements on a web page. It defines how elements are rendered in terms of their content area, padding, border, and margin..

5. **How can you center an element horizontally and vertically in CSS?**

   - Horizontally centering an element often involves setting its `margin` property to `auto`. Vertically centering can be more complex and might involve using `flexbox` or `grid`.
   <!--
   .center {
     display: flex;
     justify-content: center;
     align-items: center;
     height: 200px;
     border: 3px solid green;
   } -->

6. **What is a CSS selector?**

Element type: Selects elements based on their HTML tag name (e.g., p for paragraphs, h1 for headings).
Class: Selects elements based on their class attribute (e.g., .my-class).
ID: Selects a single element based on its unique ID attribute (e.g., #my-id).

8. **Explain the concept of a CSS pseudo-class.**

   - Pseudo-classes are used to define the special state of an element, such as `:hover` for when the mouse is over an element or `:nth-child()` for targeting specific children of an element.

9. **What is the purpose of media queries in CSS?**

   - Media queries allow you to apply different styles based on the characteristics of the device or screen size, enabling responsive design.

10. **How can you make an element responsive using CSS?**

    - By using relative units (like `%`, `em`, `rem`), fluid layouts, and media queries, you can make elements adapt to different screen sizes and devices.

11. **What is the CSS specificity hierarchy?**

    - The specificity hierarchy determines which CSS rule takes precedence when multiple conflicting rules target the same element. Inline styles have the highest specificity, followed by IDs, classes, and element selectors.

12. **Explain the purpose of the `z-index` property in CSS.**

    - The `z-index` property controls the stacking order of positioned elements. Elements with higher `z-index` values are displayed on top of elements with lower values.

13. **What is the CSS `display` property used for?**
    - The `display` property determines how an element is rendered in the layout. Common values include `block`, `inline`, `flex`, and `none`.

display: **_block_**; take up the full width available and start on a new line. They also have a width, height, margin, and padding, which can be adjusted.
Examples of block-level elements include <div>, <p>, <h1> to <h6>, and <form>.
inline:

display: **_inline_**; only take up as much width as necessary and do not start on a new line. They ignore the width and height properties.
Examples of inline-level elements include <span>, <a>, <strong>, and <em>.

6. **_git , github _**
   = Git (Global Information Tracker) is a distributed version control system that is used to track changes in source code during software development. It allows multiple developers to work on the same codebase and merge their changes seamlessly. Git is a command-line tool that can be used locally on a developer's machine.

GitHub, on the other hand, is a web-based platform that provides hosting for Git repositories. It adds a web-based graphical interface, as well as features like bug tracking, task management, and wikis for every project. GitHub allows developers to collaborate on projects, share code, and contribute to open-source projects.

5. **What's the purpose of the CSS `box-sizing` property?**

   - The `box-sizing` property controls how an element's width and height are calculated. The `content-box` value includes only the content, while `border-box` includes padding and border.

6. **Explain the `float` property in CSS.**

   - The `float` property is used to make an element float on the left or right side of its container, allowing other content to wrap around it.
     When an element is floated, it is taken out of the normal document flow, which means other elements will flow around it. This behavior is commonly used for creating layouts where elements are positioned side by side or where text wraps around images.

<!-- [wrkrnne [pic]] float:right -->

7. **What is the CSS `:nth-child()` pseudo-class used for?**

   - `:nth-child()` targets elements that match a specific position among their siblings. It's commonly used for applying styles to alternating rows or specific items in a list.

8. **How can you apply a CSS style to an element when a user hovers over it?**

   - You can use the `:hover` pseudo-class to apply styles to an element when a user hovers their mouse cursor over it.

9. **What is the purpose of the CSS `opacity` property?**

   - The `opacity` property controls the transparency of an element. A value of `1` is fully opaque, while `0` is fully transparent.

10. # **DOM**

    The DOM (Document Object Model) is a programming interface for web documents. It represents the structure of a document as a tree of objects, where each object corresponds to a part of the document, such as elements, attributes, and text.

11. **_Universal selector_** The universal selector in CSS is denoted by an asterisk (`*`) and it matches any element in the HTML document. It applies styles to all elements, regardless of their type, class, or ID.

Here's how you can use the universal selector:

```css
* {
  /* CSS properties */
}
```

12.

**JavaScript:**

1. **What is JavaScript?**

   - JavaScript is a versatile scripting language used for adding interactivity, dynamic behavior, and functionality to web pages.

2. **How do you declare variables in JavaScript?**

   - Variables can be declared using the `var`, `let`, or `const` keywords.

3. **What's the difference between `let`, `const`, and `var` for variable declaration?**

   - `let` and `const` have block scope and can be reassigned (`const` can't be redeclared or reassigned). `var` has function scope and can be hoisted.

4. **Explain the concept of hoisting in JavaScript.**

   - Hoisting is a behavior where variable and function declarations are moved to the top of their containing scope during compilation, making them accessible before they're declared.

5. **What's the difference between `==` and `===` in JavaScript?**

   - `==` checks for equality after type coercion, while `===` checks for equality without type coercion (strict equality).

6. **What are arrow functions in JavaScript?**

   - Arrow functions are a concise way to write function expressions in JavaScript. They have a shorter syntax and inherit the context (`this`) from their containing function.

7. **Explain callback functions and provide an example.**

   - Callback functions are functions passed as arguments to another function, which are executed later, often after an asynchronous operation completes. Example: handling the result of a `setTimeout` function.

8. **What is an event in JavaScript?**
   -Events in JavaScript are actions taken by the user or the browser that trigger JavaScript code. For example, when a user clicks a button, the browser sends an event to the JavaScript code that is associated with that button. The JavaScript code can then respond to the event by performing an action, such as changing the color of the button or displaying a message.
   There are many different types of events, including:
   Mouse events: , such as click, dblclick, mouseover, mouseout, and mousemove.
   Keyboard events: , such as keydown, keyup, and keypress.

9. # **_data type in JS _**
   **_Primitive data types_** in JavaScript include:

Numbers - Integers, floats
Strings - Any data under single quote, double quote or backtick quote
Booleans - true or false value
Null - empty value or no value
Undefined - a declared variable without a value
Symbol - A unique value that can be generated by Symbol constructor

**_Non-primitive data types_** in JavaScript includes:

Objects
Arrays

11. **_spread Operator_**
    the spread operator (...) is a syntax that allows an iterable (such as an array or a string) to be expanded into individual elements. It provides a concise way to copy elements from one array or object into another, to pass elements of an array as function arguments, or to create a new array or object based on an existing one.

<!-- const originalArray = [1, 2, 3];
const copiedArray = [...originalArray];
console.log(copiedArray); // Output: [1, 2, 3]
 -->

12. In JavaScript, `while` and `do-while` are loop constructs used to execute a block of code repeatedly as long as a specified condition is true. The main difference between them lies in when the condition is evaluated.

**while loop**:
The `while` loop executes a block of code as long as the specified condition evaluates to true.

Syntax:

```javascript
while (condition) {
  // code to be executed
}
```

**do-while loop**:
The `do-while` loop is similar to the `while` loop, but it always executes the block of code at least once before checking the condition.

Syntax:

````javascript
do {
    // code to be executed
} while (condition);

In summary, `while` loops check the condition before executing the block of code, while `do-while` loops check the condition after executing the block of code at least once.

13. In JavaScript, operators are symbols that perform operations on operands. Here are the types of operators in JavaScript:

**Arithmetic Operators**:
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Remainder (`%`)
- Increment (`++`)
- Decrement (`--`)

**Comparison Operators**:
- Equal to (`==`)
- Strict equal to (`===`)
- Not equal to (`!=`)
- Strict not equal to (`!==`)
- Greater than (`>`)
- Less than (`<`)
- Greater than or equal to (`>=`)
- Less than or equal to (`<=`)

**Logical Operators**:
- Logical AND (`&&`)
- Logical OR (`||`)
- Logical NOT (`!`)

**Bitwise Operators**:
- Bitwise AND (`&`)
- Bitwise OR (`|`)
- Bitwise XOR (`^`)
- Bitwise NOT (`~`)
- Left shift (`<<`)
- Right shift (`>>`)
- Zero-fill right shift (`>>>`)


**Ternary Operator (Conditional Operator)**:
- The ternary operator (`?:`) is a conditional operator that evaluates a condition and returns one of two values based on whether the condition is true or false.

**String Operators**:
- Concatenation (`+`)


14. ***error handling in JS  ***

=
The try...catch statement is used to handle runtime errors that may occur within a block of code. The try block contains the code that may throw an error, and the catch block handles the error if one occurs.

javascript
Copy code
try {
 // Code that may throw an error
 throw new Error('An error occurred');
} catch (error) {
 // Code to handle the error
 console.error(error.message);
}





15. **string** = In JavaScript, a string is a sequence of characters enclosed within either single quotes  or double quotes  Strings are a primitive data type and are used to represent text in JavaScript programs.

let str1 = 'Hello, world!';

You can perform various operations and manipulations on strings in JavaScript, such as concatenation, accessing individual characters, finding the length, converting case, and more. Here are some common string methods:

1. **Concatenation**: Combining multiple strings into one.
```javascript
let fullName = 'John' + ' ' + 'Doe'; // 'John Doe'
````

2. **Accessing Characters**: Accessing individual characters in a string using bracket notation or the `charAt()` method.

   ```javascript
   let str = "Hello";
   console.log(str[0]); // 'H'
   console.log(str.charAt(1)); // 'e'
   ```

3. **Length**: Finding the length of a string using the `length` property.

   ```javascript
   let str = "Hello";
   console.log(str.length); // 5
   ```

4. **Substring**: Extracting a portion of a string using the `substring()` method.

   ```javascript
   let str = "Hello, world!";
   console.log(str.substring(0, 5)); // 'Hello'
   ```

5. **Case Conversion**: Converting the case of a string using `toUpperCase()` and `toLowerCase()` methods.

   ```javascript
   let str = "Hello";
   console.log(str.toUpperCase()); // 'HELLO'
   console.log(str.toLowerCase()); // 'hello'
   ```

6. In JavaScript, both arrays and objects are used to store collections of data, but they have different characteristics and use cases.

**Arrays**:

- Arrays are ordered collections of values, indexed by numerical positions starting from 0.
- They can store any type of data, including numbers, strings, objects, and even other arrays.
- Arrays are useful when you need to work with a collection of similar items or when you need to maintain order.
- Common operations on arrays include adding and removing elements, accessing elements by index, iterating through elements, and manipulating the array size.

Example:

```javascript
let numbers = [1, 2, 3, 4, 5];
console.log(numbers[0]); // Output: 1
```

**Objects**:

- Objects are collections of key-value pairs where each key is a string (or Symbol) and each value can be any data type, including numbers, strings, arrays, functions, and other objects.
- Objects are useful when you need to store data in a structured way or when you need to associate each value with a unique identifier (key).
- Objects are not ordered, so the order of properties is not guaranteed.
- Common operations on objects include adding, accessing, and deleting properties, iterating through properties, and checking if a property exists.

Example:

```javascript
let person = {
  name: "John",
  age: 30,
  city: "New York",
};
console.log(person.name); // Output: 'John'
```

1. **function in JS** ->
   In JavaScript, a function is a block of code that can be defined once and executed or invoked multiple times

1. **What is the purpose of the `this` keyword in JavaScript?**

   - The `this` keyword refers to the context in which a function is executed. Its value depends on how the function is called: in the global scope, as a method, or with explicit binding.

1. **Explain the difference between `null` and `undefined` in JavaScript.**

   - `null` represents an intentional absence of any value, while `undefined` indicates a variable that has been declared but hasn been assigned a value.

1. **What is the purpose of the `localStorage` and `sessionStorage` objects in JavaScript?**

   - Both `localStorage` and `sessionStorage` provide a way to store key-value pairs in the browser. The difference is that `localStorage` data persists across sessions, while `sessionStorage` data is cleared when the session ends.

1. **Explain the concept of asynchronous programming in JavaScript.**

   - Asynchronous programming allows tasks to be executed independently of the main program flow. Callbacks, Promises, and `async/await` are mechanisms used to handle asynchronous operations.

**_REACT_**

1. What is React ?
   = React is a front - end and open - source JavaScript library which is useful in developing user interfaces specifically for applications with a single page.It is helpful in building complex and reusable user interface(UI) components of mobile and web applications as it follows the component-based approach.

The important features of React are:

It supports server-side rendering.(SEO FRIENDLY ) (Server-side rendering is the process of rendering a client-side JavaScript framework website to static HTML and CSS on the server, resulting in faster website load times. It allows the browser to render the page quickly using just HTML and CSS while the JavaScript downloads in the background)
It will make use of the virtual DOM rather than real DOM (Data Object Model) as RealDOM manipulations are expensive.
It follows unidirectional data binding or data flow.
It uses reusable or composable UI components for developing the view.

2. # What are the advantages of using React?

   **_Use of Virtual DOM to improve efficiency_**: React uses virtual DOM to render the view. As the name suggests, virtual DOM is a virtual representation of the real DOM. Each time the data changes in a react app, a new virtual DOM gets created. Creating a virtual DOM is much faster than rendering the UI inside the browser. Therefore, with the use of virtual DOM, the efficiency of the app improves.
   **_Gentle learning curve_**: React has a gentle learning curve when compared to frameworks like Angular. Anyone with little knowledge of javascript can start building web applications using React.
   **_SEO friendly_**: React allows developers to develop engaging user interfaces that can be easily navigated in various search engines. It also allows server-side rendering, which boosts the SEO of an app.
   **_Reusable components_**: React uses component-based architecture for developing applications. Components are independent and reusable bits of code. These components can be shared across various applications having similar functionality. The re-use of components increases the pace of development.
   **_Huge ecosystem of libraries to choose from_**: React provides you with the freedom to choose the tools, libraries, and architecture for developing an application based on your requirement

3. What are the limitations of React?
   The few limitations of React are as given below:

React is not a full-blown framework as it is only a library.
The components of React are numerous and will take time to fully grasp the b. enefits of all.
It might be difficult for beginner programmers to understand React.
Coding might become complex as it will make use of inline templating and JSX.

4. JSX stands for **_JavaScript XML_**. It allows us to write HTML inside JavaScript , As stated in the official docs of React, JSX provides syntactic sugar for React.createElement( ) function.

Note- We can create react applications without using JSX as well.

5. what is props in React ?
   = Props (short for properties) are a way to pass data from parent to child components in React.
   Props are used to communicate between components and to allow components to share data.

6. What is the virtual DOM? How does react use the virtual DOM to render the UI?

= The Virtual DOM (VDOM) is a concept used in web development frameworks like React to improve the performance of updating the user interface. It is essentially a lightweight copy of the actual DOM (Document Object Model) representation of a web page. The DOM represents the structure of a web page, and manipulating it can be slow and inefficient, especially when dealing with complex web applications that need frequent updates.

Here's how React uses the Virtual DOM and the process of rendering the UI:

1. **Initialization**: When a React component is initially rendered, it creates a virtual representation of the DOM, known as the Virtual DOM.

2. **Render**: When a component's state or props change, React re-renders the component, generating a new Virtual DOM tree.

3. **Reconciliation**: React then compares the new Virtual DOM tree with the previous one to determine the differences or changes between them. This process is called reconciliation.

4. **Diff Algorithm**: React employs a reconciliation algorithm (often referred to as the "diffing" algorithm) to efficiently identify the minimal number of DOM updates needed to bring the actual DOM in sync with the new Virtual DOM tree. This algorithm is at the core of React's performance optimization.

5. **Update**: After identifying the differences, React updates only the parts of the actual DOM that have changed, minimizing the work required to keep the UI up-to-date. This selective updating is much faster than completely re-rendering the entire DOM.

6. **Re-rendering Components**: React also determines which React components need to be re-rendered based on the changes in props or state. It avoids re-rendering unaffected components, further improving performance.

**React Fiber** : React Fiber is an internal, reimplementation of the React core algorithm, which was introduced in React version 16. It is designed to improve the performance and responsiveness of React applications.React Fiber is a complete rewrite of React's core algorithm. It is designed to make React faster, more responsive, and more capable of handling complex UI animations and gestures. Fiber is also designed to make React more scalable, so that it can be used to build large, complex applications.
Fiber works by breaking down the reconciliation process into smaller, more manageable chunks. This allows React to render updates to the UI incrementally, rather than having to re-render the entire UI from scratch. This makes updates to the UI appear smoother and more responsive.

In summary, React uses the Virtual DOM to optimize the process of updating the user interface by creating a lightweight representation of the actual DOM, performing a reconciliation process to identify changes, and then applying those changes efficiently using a diffing algorithm. React Fiber is an enhancement to the core algorithm, designed to further improve performance and responsiveness.

7. **Prop drilling** is a term used in React to describe the process of passing data through multiple layers of nested components in a component tree. It occurs when a component needs to receive certain data via its props, but that data must be passed down from its parent component, then potentially to its child components, and so on, until it reaches the component that needs it. This can lead to a situation where components in the middle of the hierarchy do not actually use the data but are required to pass it along.

Here are the advantages and disadvantages of prop drilling:

**Advantages of Prop Drilling**:

1. **Simplicity**: Prop drilling is straightforward and easy to understand. It doesn't introduce complex state management techniques or additional libraries, making it a simple way to share data among components.

2. **No Additional Libraries**: Prop drilling doesn not require the use of additional state management libraries like Redux or Mobx, which can reduce the complexity of your project.

**Disadvantages of Prop Drilling**:

1. **Complexity with Deep Hierarchies**: In large component trees with many layers of nesting, prop drilling can become cumbersome and lead to a lot of boilerplate code for passing props through intermediary components.

2. **Maintenance Overhead**: As your application grows and changes, you may need to update the prop drilling in multiple places, which can introduce maintenance overhead and increase the chances of introducing bugs.

3. **Readability and Maintainability**: In some cases, prop drilling can make your code less readable and harder to maintain, especially when you have to pass multiple props through many layers of components.

4. **Performance Impact**: While the performance impact of prop drilling is generally negligible for small to medium-sized applications, in very large component trees, it may lead to a slight decrease in performance due to the propagation of props.

To mitigate the disadvantages of prop drilling, React provides other solutions like Context API, which allows you to share data across components without explicitly passing it through props. Additionally, state management libraries like Redux or Mobx can be used to centralize and manage application state, making it more accessible to components without prop drilling. . Redux is a popular choice for managing application state in React applications, and it can help you avoid prop drilling and make state management more efficient and centralized.
Redux allows you to maintain a single, centralized state store for your entire application

8.  **Data binding**
    in React refers to the process of establishing a connection between the UI (User Interface) elements of a React component and the data it displays or manipulates. It ensures that changes in data are reflected in the UI, and vice versa, without the need for manual updates.
    (Having a sync with data and Ui elements)

There are two primary types of data binding in React:

One-Way Data Binding:

In one-way data binding, data flows in one direction, typically from a data source (e.g., state or props) to the UI elements.
React primarily uses one-way data binding. Components receive data through props and use state to manage and update their own data.
When the data source changes, React automatically re-renders the component with the updated data.

Two-Way Data Binding:

Two-way data binding allows data to flow both from the data source to the UI elements and from the UI elements back to the data source.
React doesn't natively support two-way data binding like some other frameworks (e.g., Angular). Instead, you have to manually implement it using controlled components.

9. what is NPM ?
   = NPM stands for Node Package Manager , npm is free to use.

You can download all npm public software packages without any registration or logon.

10. what is Git and Github?
    = Git and GitHub are tools used for collaborative work on projects. Git is a version control system that tracks changes in code. GitHub is a web-based hosting service that allows users to manage Git repositories.
    git init
    git push
    git clone
    git pull

11. What are keys in React?
    A key is a special string attribute that needs to be included when using lists of elements.
    By keys we can identify which elements were added, changed or removed.
    Keys should be given to array elements for providing a unique identity for each element.

12. **What is JSX?**
    JSX (JavaScript XML) is a syntax extension for JavaScript used with React. It allows you to write HTML-like code in your JavaScript files.

13. **What are components in React?**
    Components are the building blocks of React applications. They are reusable UI elements that encapsulate logic and rendering.

14. **What are React props?**
    Props (short for properties) are a way to pass data from parent to child components in React.

15. **What is state in React?**
    State is a JavaScript object that stores component-specific data that can change over time and trigger re-rendering.

16. **Explain the concept of React Hooks.**
    React Hooks are functions that let you "hook into" React state and lifecycle features from functional components. They provide a way to manage state and side effects without using class components.

17. **What is the purpose of the useEffect hook?**
    The `useEffect` hook is used to manage side effects in functional components, like data fetching, DOM manipulation, and subscriptions.
    What is useEffect hook?
    The useEffect hook in React is use to handle the side effects in React such as fetching data, and updating DOM. This hook runs on every render but there is also a way of using a dependency array using which we can control the effect of rendering

Reason to choose useEffect hook:
The motivation behind the introduction of useEffect Hook is to eliminate the side effects of using class-based components. For example, tasks like updating the DOM, fetching data from API end-points, setting up subscriptions or timers, etc can lead to unwarranted side effects. Since the render method is too quick to produce a side-effect, one needs to use life cycle methods to observe the side effects.

When making API calls, you typically want to trigger the call only when certain dependencies change. By specifying dependencies in the dependency array of useEffect, you can ensure that the API call is made only when necessary, avoiding infinite loops of API requests.

useEffect(() => {
const fetchData = async () => {
try {
const response = await axios.get('https://api.example.com/data');
setData(response.data);
} catch (error) {
console.error('Error fetching data:', error);
}
};

10. **What is the role of the useState hook?**
    The `useState` hook allows functional components to manage local state.

11. **Explain the concept of component lifecycle in class components.**
    Class components have lifecycle methods like `componentDidMount`, `componentDidUpdate`, and `componentWillUnmount` that allow you to perform actions at different stages of a component life.

12. **What is the purpose of the `key` prop when rendering lists of elements?**
    The `key` prop is used to help React identify which items in a list have changed, been added, or been removed. It aids in efficient list rendering and updates.

13. **What is the React Router?**
    React Router is a library that provides routing capabilities to a React application, allowing you to create single-page applications with multiple views and URLs.

14. **How can you optimize the performance of a React application?**
    Performance optimization can be achieved by implementing techniques like using the `shouldComponentUpdate` method, using the `React.memo` higher-order component, and code splitting.

15. **What is Redux?**
    Redux is a state management library for JavaScript applications, commonly used with React. It provides a centralized store for managing application state.

16. **Explain the concept of "lifting state up."**
    Lifting state up involves moving the state from a child component to a parent component in order to share that state among multiple child components.

17. **What is the significance of the `key` prop when rendering lists of elements?**
    The `key` prop is used by React to efficiently update and re-render lists of elements. It helps React identify which items have changed, been added, or been removed in a list.

Remember that interview questions can vary in depth and complexity, so while these brief answers provide an overview, it is important to thoroughly understand the concepts and be prepared to discuss them in more detail during interviews.

21. **_what is unidireactional dataflow_** ?
    = Unidirectional data flow describes a one-way data flow where the data can move in only one pathway when being transferred between different parts of the program.

React, a Javascript library, uses unidirectional data flow. The data from the parent is known as props. You can only transfer data from parent to child and not vice versa.

This means that the child components cannot update or modify the data on their own, makeing sure that a clean data flow architecture is followed. This also means that you can control the data flow better.

Advantages of unidirectional data flow
There are many advantages of unidirectional data flow, some of which are listed below:

Debugging
One-way data flow makes debugging much easier. When the developer knows where the data is coming from and where it is going, they can dry run (or use tools) to find the problems more efficiently.

Better control
Having data flow in one direction makes the program less prone to errors and gives the developer more control.

Efficiency
As the used libraries are wary of the limitations and specifications of the unidirectional flow, extra resources are not wasted, leading to an efficient process.

22. Async awat , Promise ?
    = Promises and `async/await` are both mechanisms in JavaScript for working with asynchronous operations. They provide a way to handle asynchronous code in a more readable and manageable manner. Here's a comparison of Promises and `async/await`:

**Promises:**

1. **Callback Chain:** Promises are a way to handle asynchronous operations through a chain of `.then()` and `.catch()` callbacks. They allow you to define how to handle the result or error of an asynchronous operation.

2. **Error Handling:** Promises use `.catch()` to handle errors in the promise chain. This allows for centralized error handling for multiple asynchronous operations within the chain.

3. **Readability:** Promises can become deeply nested when handling multiple asynchronous operations, which can lead to what is commonly referred to as "callback hell" or "pyramid of doom." This can make the code less readable and harder to maintain.

Example using Promises:

```javascript
function fetchData() {
  return fetch("https://api.example.com/data")
    .then((response) => response.json())
    .then((data) => {
      // Handle data
    })
    .catch((error) => {
      // Handle error
    });
}
```

**Async/Await:**

1. **Syntactic Sugar:** `async/await` is built on top of Promises and provides a more concise and readable way to work with asynchronous code. It allows you to write asynchronous code that looks similar to synchronous code.

2. **Error Handling:** Error handling in `async/await` is done using `try...catch` blocks, making it feel more like traditional error handling in synchronous code. This can lead to clearer and more organized error handling logic.

3. **Readability:** `async/await` generally results in code that is easier to read and reason about, especially when dealing with multiple asynchronous operations.

4. **Parallel Execution:** `async/await` makes it easier to work with parallel asynchronous tasks by using `Promise.all()` or other constructs. You can `await` multiple promises concurrently.

Example using `async/await`:

```javascript
async function fetchData() {
  try {
    const response = await fetch("https://api.example.com/data");
    const data = await response.json();
    // Handle data
  } catch (error) {
    // Handle error
  }
}
```

In summary, both Promises and `async/await` are essential tools for managing asynchronous code in JavaScript. `async/await` is often favored for its improved readability and error handling, while Promises are still valuable in scenarios where you need more fine-grained control over asynchronous operations or want to work with libraries or APIs that return Promises.

**Example of Js Exercise \***

<!-- searching in a string -->

let str = "30 day of react";
if(str.includes('react'))
{
console.log("true");
}

let string = 'I love JavaScript. If you do not love JavaScript what else can you love.'
console.log(string.search('love')) // 2

<!-- 'Facebook, Google, Microsoft, Apple, IBM, Oracle, Amazon' split the string at the comma and change it to an array. -->

let string1= "Facebook, Google, Microsoft, Apple, IBM, Oracle, Amazon";
const arr=[];
let temp = "";
for(let i=0;i<string1.length;i++)
{

    if(string1[i]==',')
    {

arr.push(temp);
temp="";
}
else{
temp +=string1[i];
}

}
if(temp.length)
{
arr.push(temp);
}
for(const elem of arr)
{
console.log(elem);
}

<!--
remove dublicates from array -->

const withduplicates=["a", "b", "a", "a", "b", "b", "g", "h", "i", "j",];
const noduplicates=[];
for(const elem of withduplicates)
{
if(noduplicates.indexOf(elem)===-1)
{
noduplicates.push(elem);
}
}

for(const elem of noduplicates)
{
console.log(elem);
}

 <!-- setTimeout -->

console.log("Welcome to Programiz!");
setTimeout(function cb() {
console.log("hey bro");
}, 5000);

console.log("Welcome to Programiz!");
setTimeout(()=>{console.log("hey bro")}, 6000);

// 1. console.log("B" - "B");
// This expression subtracts the string "B" from the string "B". Since the subtraction operator is not defined for strings, JavaScript tries to convert them to numbers. However, both "B" strings cannot be converted to valid numbers, resulting in `NaN` (Not a Number).

// 2. console.log("B" + "B");
// This expression uses the plus operator to concatenate the string "B" with the string "B". Since both operands are strings, JavaScript performs string concatenation. The result is the string "BB" because the two "B" strings are concatenated together.

// 3. console.log("2" - 2);
// Here, the string "2" is subtracted from the number 2. JavaScript automatically converts the string "2" to the number 2 and performs the subtraction. The result is 0 because 2 minus 2 equals 0.

// 4. console.log("2" - "2");
// This expression subtracts the string "2" from the string "2". Both operands are strings, but they represent valid numbers. JavaScript converts both strings to numbers and performs the subtraction. Again, the result is 0 because 2 minus 2 equals 0.

// 5. console.log("2" + "2");
// Similar to the previous explanation, this expression uses the plus operator for string concatenation. The result is the string "22" because both "2" strings are concatenated together.

//6. console.log('2'+3)
// ans -> 23

const numbers = [1, 2, 3, 4, 5]
numbers.shift() // -> remove one item from the beginning
console.log(numbers) // -> [2,3,4,5]

const numbers = [1, 2, 3, 4, 5]
numbers.unshift(0) // -> add one item from the beginning
console.log(numbers) // -> [0,1,2,3,4,5]

const numbers = [1, 2, 3, 4, 5]
numbers.push(6)
console.log(numbers) // -> [1,2,3,4,5,6]

numbers.pop() // -> remove one item from the end
console.log(numbers) // -> [1,2,3,4,5]

const numbers = [1, 2, 3, 4, 5]
numbers.reverse() // -> reverse array order
console.log(numbers) // [5, 4, 3, 2, 1]

const numbers = [1, 2, 3, 4, 5];
numbers.sort((a, b) => a - b);
console.log(numbers); // [1, 2, 3, 4, 5]

<!-- reverse the array in jS -->

<!-- arr.reverse(); -->

const arr=[1,2,3,4];
let start=0;
let end = arr.length-1;
while(end>start)
{
let temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;

       start++;
       end--;

}
console.log(arr);
