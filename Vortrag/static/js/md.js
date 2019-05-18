function md_parse () {
  var nodeList = document.getElementsByTagName('md');
  for (var i=0; i < nodeList.length; i++) {
    nodeList.item(i).innerHTML = marked(nodeList.item(i).firstChild.data);
    nodeList.item(i).style.visibility = 'visible';
  }
}