<html>
<body>
<%@ page import="java.util.*" %>
<%@ page import="java.sql.*" %>
<%@ page import="java.io.*" %>
<% 
response.setContentType("text/html");
String uname=request.getParameter("username");
String pass=request.getParameter("password");

Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/lib","root","root");
PreparedStatement ps= con.prepareStatement("Select uname,pass from signup1 where uname=? and pass=?");
ps.setString(1, uname);
            ps.setString(2, pass);
            ResultSet rs=ps.executeQuery();
            if (rs.next()) {
                 response.sendRedirect("home.html");
            } 
            else {
                response.sendRedirect("slogin.html");
                        
            }
    con.close();
%>
</body>
 </html>