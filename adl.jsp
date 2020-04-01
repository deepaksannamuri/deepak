
<html>
<body>
<%@ page import="java.util.*" %>
<%@ page import="java.sql.*" %>
<%@ page import="java.io.*" %>
<% 
response.setContentType("text/html");
String aname=request.getParameter("Adminname");
String pass=request.getParameter("password");

Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/lib","root","root");
PreparedStatement ps= con.prepareStatement("Select aname,pass from signup3 where aname=? and pass=?");
ps.setString(1, aname);
            ps.setString(2, pass);
            ResultSet rs=ps.executeQuery();
            if (rs.next()) {
                 response.sendRedirect("main.html");
            } 
            else {
                response.sendRedirect("adm.html");
                        
            }
    con.close();
%>
</body>
 </html>