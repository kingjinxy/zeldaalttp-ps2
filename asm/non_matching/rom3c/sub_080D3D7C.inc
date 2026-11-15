	THUMB_FUNC_START sub_080D3D7C
sub_080D3D7C: @ 0x080D3D7C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080D3DC0  @ =gRam
	ldr r1, _080D3DC4  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _080D3DC8  @ =0x00000F62
	add r4, r6, r1
	add r4, r5, r4
	mov r1, #3
	and r1, r1, r0
	lsl r1, r1, #1
	strb r1, [r4]
	bl sub_080AA868
	ldr r2, _080D3DCC  @ =gUnknown_08174ED4
	ldrb r1, [r4]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	cmp r0, r1
	blt _080D3DD4
	ldr r1, _080D3DD0  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	b _080D3DE0
_080D3DC0:
	.4byte gRam
_080D3DC4:
	.4byte 0x00000F92
_080D3DC8:
	.4byte 0x00000F62
_080D3DCC:
	.4byte gUnknown_08174ED4
_080D3DD0:
	.4byte 0x00000F52
_080D3DD4:
	ldr r0, _080D3DE8  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D3DE0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3DE8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D3D7C

