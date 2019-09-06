function out = hostname

out = char(java.net.InetAddress.getLocalHost.getCanonicalHostName);

end