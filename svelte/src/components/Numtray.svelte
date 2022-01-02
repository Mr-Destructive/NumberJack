<script>
    let arr = [];
    let pos = [];
    let points = 0,num;
    let selected=false;

    function generate(){
        if(num >=0 && num<=9 && num){
            console.log(num)
            arr=[];
            pos = [1,2,3,4,5,6,7,8,9,10];
            while(arr.length < 10){
                let r = Math.floor(Math.random() * 10);
                if(arr.indexOf(r) === -1) arr.push(r);
            }
        }
    }

    function jack(val){
        if(arr[val-1] === num) points++;
        else {points=0;}
        generate();
    }
</script>

<div class="tray">
    <input type="number" max=9 min=0  bind:value={num}/>
    <button on:click={ () => generate() } class="play">Play</button>
    <h1>Points : {points}</h1>
    <ul>
        {#each arr as i}
            <li class="random " >{i}</li>
        {/each}
    </ul>
    <ul>
        {#each pos as i}
            <li class="sub" on:click={() => jack(i)} >{i}</li>
        {/each}
    </ul>
</div>

<style>
    .tray{
        height:auto;
        width:auto;
        margin: 0;
        padding: 0;
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
        background-color: #ff6600;
        color: #000011;
        font-size:33px;
        padding:1.2%;
        heigth: 15%;
        width: 6.7%;
        list-style-type:none;
        border:1px solid #000002;
    }
    .sub{
        background-color: #100007;
        font-size:33px;
        color: #00ffff;
        padding:1.2%;
        heigth: 15%;
        width: 6.7%;
        list-style-type:none;
        font-weight: 500;
        border:1px solid #ffffff;
        cursor: pointer;
    }
    .sub:active {
        background-color:#ff6600;
        color:black;
    }
    .play{
        width: 80px;
        height: 80px;
        color: #ccffff;
        font-size: 35px;
        background-color: #ff6600;
    }
    input{
        width: 80px;
        height: 80px;
        font-size: 35px;
    }

    
</style>
