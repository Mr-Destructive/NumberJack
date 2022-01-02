<script>

    import { createEventDispatcher } from 'svelte';
    const dispatch = createEventDispatcher();

    export let items;
    export let activeItem;

</script>

<div class="tabs">
    <ul>
        {#each items as item}
            <li on:click={ ()=> dispatch('tabChange', item)}>
                <div class:active={item === activeItem}>{item}</div>
            </li>
        {/each}
    </ul>
</div>

<style>
    .tabs{
        margin-bottom: 40px;
    }
    ul{
        display: flex;
        justify-content:center;
        padding:0;
        list-style-type: none;
        background-color: #000014;
        border-bottom: 5px solid #000014;
    }
    li{
        margin: 0 26px;
        font-size: 18px;
        color: white;
        cursor: pointer;
        font-size: 25px;
        margin: 25px;
    }
    .active{
        color: #ff6600;
        border-bottom: 5px solid #00ffff;
        transition:ease 0.6s;
    }

</style>

