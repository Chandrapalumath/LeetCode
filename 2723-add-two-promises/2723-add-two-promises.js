var addTwoPromises = async function(promise1, promise2) {
    const ans=await Promise.all([promise1,promise2]);
    return ans[0]+ans[1];
}