let currentTime = new Date();
console.log(`24 Hour format: ${currentTime.toLocaleString('en-GB', { hour12: false })}`);
console.log(`12 Hour format: ${currentTime.toLocaleString('en-GB', { hour12: true })}`);