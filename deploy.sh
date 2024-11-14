# sudo vim /etc/rc.local
if [ -f /home/super/integration-2/service_main ]; then
    # Make sure the service is executable
    chmod +x /home/super/integration-2/service_main
    
    # Run the service in background
    /home/super/integration-2/service_main &
    
    # Optional: log the start time
    echo "Service started at $(date)" >> /var/log/service_main.log
else
    echo "Service executable not found!" >> /var/log/service_main.log
fi