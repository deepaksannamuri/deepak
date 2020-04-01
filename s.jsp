 <html>
<body>
<%@ page import="java.util.*" %>
<%@ page import="java.sql.*" %>
<%@ page import="java.io.*" %>
<% 
response.setContentType("text/html");
String fname=request.getParameter("firstname");
String lname=request.getParameter("lastname");
String uname=request.getParameter("username");
String pass=request.getParameter("password");
String regno=request.getParameter("regno");
String email=request.getParameter("email");

//try{
Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/lib","root","root");          
Statement stmt=con.createStatement();
int i=stmt.executeUpdate("insert into signup1 values('"+fname+"','"+lname+"','"+uname+"','"+pass+"','"+regno+"','"+email+"')");         
if(i>0)                
response.sendRedirect("slogin.html");

else                
out.print("Insert Unsuccessful");            
/*}
catch (Exception e) {
out.print(e);
}*/
con.close();
%>
</body>
 </html>