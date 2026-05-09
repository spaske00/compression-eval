using System.Xml.Linq;

var manifest = new XDocument(
    new XElement("applications",
        new XElement("application",
            new XAttribute("name", "api"),
            new XElement("module", new XAttribute("kind", "routing"), "42"),
            new XElement("module", new XAttribute("kind", "storage"), "19")),
        new XElement("application",
            new XAttribute("name", "worker"),
            new XElement("module", new XAttribute("kind", "queue"), "27"),
            new XElement("module", new XAttribute("kind", "metrics"), "11"))));

var totals =
    from application in manifest.Root!.Elements("application")
    let name = (string)application.Attribute("name")!
    let score = application.Elements("module").Sum(module => (int)module)
    orderby name
    select $"{name}:{score}";

Console.WriteLine(string.Join("|", totals));
