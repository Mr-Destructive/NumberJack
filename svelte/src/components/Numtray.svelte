<script>
    let arr = [];
    let pos = [];
    let points = 0,num;
    let selected=false;

    function generate(){
        arr=[];
        pos = [1,2,3,4,5,6,7,8,9,10];
        while(arr.length < 10){
            let r = Math.floor(Math.random() * 10);
            if(arr.indexOf(r) === -1) arr.push(r);
        }
    }

    function jack(val){
        if(arr[val-1] === num) points++;
        else {points=0;}
        generate();
    }
</script>

<div class="tray">
    <input type="number" max=9 min=0 bind:value={num}/>
    <button on:click={ () => generate() }>Play</button>
    <h1>Points : {points}</h1>
    <ul>
        {#each arr as i}
            <li class="random " >{i}</li>
        {/each}
    </ul>
    <ul>
        {#each pos as i}
            <button class="sub" on:click={() => jack(i)} >{i}</button>
        {/each}
    </ul>
</div>

<style>
    .tray{
        height:auto;
        width:auto;
    }
    h1{
        color:white;}
    ul{
        align-items: center;
        display:flex;
        height:auto;
        width:auto;
    }
    li{
        background-color: #100007;
        font-size:35px;
        color: #00ffff;
        padding:3%;
        list-style-type:none;
        border:2px solid white;
        height: 45px;
    }
    .sub{
        align-items: center;
        display:flex;
        background-color: #100007;
        font-size:35px;
        color: #00ffff;
        padding:3%;
        font-weight:500;
        outline:none;
        box-shadow: none;
    }
    .sub:active {
        background-color:#ff6600;
        color:black;
    }

    
</style>
