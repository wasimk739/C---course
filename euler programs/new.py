import xml.etree.ElementTree as ET
tree = ET.parse('setup_ext.xml')
root = tree.getroot()

for group in root.findall('Add'):
  title = group.find('Packages')
  titlephrase = title.find('Package').text
  for doc in group.findall('Package'):
    refid = doc.get('sourceDir')