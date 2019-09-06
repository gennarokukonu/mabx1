function OwnerDocument = dom_swap_nodes(node1, node2)
%dom_swap_nodes(node1, node2): Swaps two DOM nodes, returns the OwnerNode

OwnerDocument = node1.getOwnerDocument;
temp = node1.getParentNode.insertBefore(OwnerDocument.createTextNode(''), node1);
node2.getParentNode.insertBefore(node1, node2);
temp.getParentNode.insertBefore(node2, temp);
temp.getParentNode.removeChild(temp);

end