 <html>
<body>
<%@ page import="java.util.*" %>
<%@ page import="java.sql.*" %>
<%@ page import="java.io.*" %>
<% 
response.setContentType("text/html");
String bid=request.getParameter("bookid");
String title=request.getParameter("title");
String aname=request.getParameter("author");
String cost=request.getParameter("cost");
String qua=request.getParameter("quantity");

//try{
Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection
        ("jdbc:mysql://localhost:3306/lib","root","root");          
Statement stmt=con.createStatement();
int i=stmt.executeUpdate("insert into book values('"+bid+"','"+title+"','"+aname+"','"+cost+"','"+qua+"')");         
if(i>0)                
response.sendRedirect("main.html");

else                
out.print("Insert Unsuccessful");            
con.close();
/*}
catch (Exception e) {
out.print(e);
}*/
%>
</body>
 </html>