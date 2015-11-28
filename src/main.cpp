#include <gtk/gtk.h>

static void acitvate(GtkApplication* app, gpointer user_data) {
    GtkWidget* window;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "yace");
    gtk_window_set_default_size(GTK_WINDOW(window), 1024, 768);
    gtk_widget_show_all(window);
}

int main(int argc, char** argv) {
    GtkApplication* app;
    int status = 0;
    app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
}
