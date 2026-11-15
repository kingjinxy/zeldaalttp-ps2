	THUMB_FUNC_START sub_0809D348
sub_0809D348: @ 0x0809D348
	push {r4-r6,lr}
	ldr r0, _0809D3CC  @ =gSword
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809D354
	b _0809D452
_0809D354:
	cmp r0, #255
	beq _0809D452
	ldr r4, _0809D3D0  @ =gRam
	cmp r0, #1
	bhi _0809D400
_0809D35E:
	mov r5, #39
	ldr r1, _0809D3D4  @ =0x000016EA
	add r0, r4, r1
	ldrb r2, [r0]
	ldr r6, _0809D3D8  @ =0x00000964
	add r3, r4, r6
	mov r1, #0
	strb r2, [r3]
	add r6, r6, #1
	add r0, r4, r6
	strb r1, [r0]
	lsl r0, r2, #24
	lsr r0, r0, #24
	cmp r0, #9
	beq _0809D452
	cmp r0, #8
	bls _0809D388
	add r0, r2, #0
	sub r0, r0, #10
	strb r0, [r3]
	mov r5, #3
_0809D388:
	ldr r1, _0809D3DC  @ =0x000016D5
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r1, _0809D3E0  @ =gUnknown_0816B258
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldr r2, _0809D3E4  @ =0x00000968
	add r1, r4, r2
	strh r0, [r1]
	lsl r1, r5, #1
	add r0, r0, r1
	ldr r2, _0809D3E8  @ =gUnknown_0816B118
	ldr r1, _0809D3EC  @ =0x0000FFFE
	and r0, r0, r1
	add r0, r0, r2
	ldrh r1, [r3]
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _0809D3F0  @ =gUnknown_0816AB08
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r3, _0809D3F4  @ =0x000016F6
	add r0, r4, r3
	strb r2, [r0]
	ldr r0, _0809D3F8  @ =gUnknown_0816AD0D
	add r1, r1, r0
	ldrb r1, [r1]
	ldr r5, _0809D3FC  @ =0x000016F7
	add r0, r4, r5
	b _0809D450
_0809D3CC:
	.4byte gSword
_0809D3D0:
	.4byte gRam
_0809D3D4:
	.4byte 0x000016EA
_0809D3D8:
	.4byte 0x00000964
_0809D3DC:
	.4byte 0x000016D5
_0809D3E0:
	.4byte gUnknown_0816B258
_0809D3E4:
	.4byte 0x00000968
_0809D3E8:
	.4byte gUnknown_0816B118
_0809D3EC:
	.4byte 0x0000FFFE
_0809D3F0:
	.4byte gUnknown_0816AB08
_0809D3F4:
	.4byte 0x000016F6
_0809D3F8:
	.4byte gUnknown_0816AD0D
_0809D3FC:
	.4byte 0x000016F7
_0809D400:
	add r3, r4, #0
	ldr r6, _0809D458  @ =0x000016EA
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #8
	bhi _0809D35E
	lsl r2, r0, #1
	ldr r1, _0809D45C  @ =0x00000968
	add r0, r3, r1
	strb r2, [r0]
	ldr r5, _0809D460  @ =0x000016D5
	add r0, r3, r5
	ldrb r0, [r0]
	lsr r0, r0, #1
	ldr r6, _0809D464  @ =0x0000097C
	add r1, r3, r6
	strb r0, [r1]
	lsl r1, r0, #3
	add r0, r0, r1
	lsl r0, r0, #1
	add r2, r2, r0
	lsl r2, r2, #24
	ldr r1, _0809D468  @ =gUnknown_0816B456
	lsr r2, r2, #25
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #255
	beq _0809D35E
	ldr r0, _0809D46C  @ =gUnknown_0816B49E
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _0809D470  @ =0x000016F6
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _0809D474  @ =gUnknown_0816B4C2
	add r0, r2, r0
	ldrb r1, [r0]
	add r5, r5, #34
	add r0, r3, r5
_0809D450:
	strb r1, [r0]
_0809D452:
	pop {r4-r6}
	pop {r0}
	bx r0
_0809D458:
	.4byte 0x000016EA
_0809D45C:
	.4byte 0x00000968
_0809D460:
	.4byte 0x000016D5
_0809D464:
	.4byte 0x0000097C
_0809D468:
	.4byte gUnknown_0816B456
_0809D46C:
	.4byte gUnknown_0816B49E
_0809D470:
	.4byte 0x000016F6
_0809D474:
	.4byte gUnknown_0816B4C2
	THUMB_FUNC_END sub_0809D348

