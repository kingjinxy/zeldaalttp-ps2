	THUMB_FUNC_START sub_0810F804
sub_0810F804: @ 0x0810F804
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0810F844  @ =gRam
	ldr r0, _0810F848  @ =0x0000096C
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _0810F84C  @ =0x00000FF2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #233
	bne _0810F854
	sub r1, r1, #96
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _0810F850  @ =gUnknown_0817D2E4
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	mov r0, #2
	mov r1, #128
	lsl r1, r1, #2
	bl sub_080C6174
	b _0810F86E
	.byte 0x00
	.byte 0x00
_0810F844:
	.4byte gRam
_0810F848:
	.4byte 0x0000096C
_0810F84C:
	.4byte 0x00000FF2
_0810F850:
	.4byte gUnknown_0817D2E4
_0810F854:
	ldr r1, _0810F8E4  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _0810F8E8  @ =gUnknown_0817D2C4
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
_0810F86E:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810F92E
	add r0, r4, #0
	bl sub_080C5080
	bl sub_0809E3CC
	add r3, r0, #0
	cmp r3, #0
	bne _0810F92E
	ldr r5, _0810F8EC  @ =gRam
	ldr r1, _0810F8F0  @ =0x00000F52
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _0810F8A0
	ldr r1, _0810F8F4  @ =gHeartsFiller
	mov r0, #160
	strb r0, [r1]
	strb r3, [r2]
_0810F8A0:
	ldr r0, _0810F8E4  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r1, _0810F8F8  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #5
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _0810F8FC  @ =gBottle1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0810F8DE
	ldr r0, _0810F900  @ =gBottle2
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0810F8DE
	ldr r0, _0810F904  @ =gBottle3
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0810F8DE
	ldr r0, _0810F908  @ =gBottle4
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0810F8DE
	ldr r1, _0810F90C  @ =0x00000CB4
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810F910
_0810F8DE:
	mov r1, #81
	b _0810F912
	.byte 0x00
	.byte 0x00
_0810F8E4:
	.4byte 0x00000F92
_0810F8E8:
	.4byte gUnknown_0817D2C4
_0810F8EC:
	.4byte gRam
_0810F8F0:
	.4byte 0x00000F52
_0810F8F4:
	.4byte gHeartsFiller
_0810F8F8:
	.4byte 0x00000996
_0810F8FC:
	.4byte gBottle1
_0810F900:
	.4byte gBottle2
_0810F904:
	.4byte gBottle3
_0810F908:
	.4byte gBottle4
_0810F90C:
	.4byte 0x00000CB4
_0810F910:
	mov r1, #80
_0810F912:
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810F92E
	ldr r1, _0810F938  @ =gRam
	ldr r0, _0810F93C  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810F92E:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F938:
	.4byte gRam
_0810F93C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F804

