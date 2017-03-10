import com.sun.imageio.plugins.common.ReaderUtil;

import java.io.*;
import java.nio.file.Files;

public class Main {

    public static void main(String[] args) throws IOException {

        String path="/etc/resolv.conf";

        System.out.println("Previous :\n" + ReadFile(path));

        PrintWriter writer=new PrintWriter(path);
        writer.close();

        writer=new PrintWriter(path);
        writer.append("nameserver 8.8.8.8\n");
        writer.append("nameserver 8.8.4.4\n");
        writer.flush();
        writer.close();

        System.out.println("Current :\n" + ReadFile(path));
    }

    private static String ReadFile(String path) throws IOException {

        InputStreamReader inputStreamReader=new FileReader(path);
        BufferedReader reader=new BufferedReader(inputStreamReader);

        String readResult=null;
        String content= "";

        do {
            readResult=reader.readLine();

            if (readResult!=null)
            {
                content+=readResult+"\n";
            }
        }
        while (readResult!=null);

        inputStreamReader.close();
        reader.close();

        return content;
    }
}
