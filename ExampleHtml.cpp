<!DOCTYPE html>
<html>
  <head>
    <title>Example html page</title>

  </head>

  <body>
    <h1>Example html page (this is an h1 heading)</h1>

    <h2>Headings and paragraphs (this is an h2 heading)</h2>
    <h3>This is an h3 heading</h3>

    <p>This is some paragraph text</p>
    <p>This is another paragraph</p>

    <!--- This is a comment. It won't show up in the page, but you will
    be able to see it if you view the page source (be warned!) -->

    <div id="divisions-explanation">
      <h2>Divisions &lt;div&gt;</h2>
      <p>"Div" stands for division. Divisions are used to separate the
      page into separate areas. This is useful when you come to style
      different parts of your page in different ways.</p>
      <p>Divs (and all other html elements) can have an "id" set within
      the opening tag, which helps identify them later (when you come to
      style them).</p>
    </div>
   
    <div id="lists">
      <h2>Lists</h2>
      <p>Html has two basic types of list:</p>
      <ol>
        <li>Ordered lists (&lt;ol&gt;) - displays a numbered list</li>
        <li>Unordered lists (&lt;ul&gt;) - displays a list of bullet
        points</li>
      </ol>
      <p>Both have the same basic structure.</p>
      <ul>
        <li>An opening list tag</li>
        <li>Many list items (&lt;li&gt;)</li>
        <li>A closing list tags</li>
      </ul>
      <p>You don't often see lists in their basic form, but lists are
      heavily used in websites; dropdown menus are often cleverly styled
      lists.</p>
    </div>

    <div id="tables">
      <h2>Tables</h2>
      <p>Behold. A table:</p>
      <table>
        <tr>
          <th>Name</th>
          <th>College</th>
        </tr>
        <tr>
          <td>Tom</td>
          <td>Oriel</td>
        </tr>
      </table>
    </div>

    <div id="links">
      <h2>Links</h2>
      <p>Links look like this: <a href="http://www.facebook.com">link to
        facebook</a>. You specify where you want the link to point by
      specifying the 'href' inside the &lt;a&gt; tag. The href can also
      point to local files. For example, <a
        href="./html_example.html">this</a> is a link
      to this page you're reading at the moment.</p>

    </div>

    <div id="images">
      <h2>Images</h2>
      <p>Images are a bit like links. You specify the location of the
      image with the 'src' property in the &lt;img&gt; tag.</p>
      <img
      src="http://jerrymahoney.files.wordpress.com/2012/06/kitten.jpg"
      />

    </div>

  </body>
</html>
