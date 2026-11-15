	THUMB_FUNC_START sub_080AF310
sub_080AF310: @ 0x080AF310
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r1, _080AF3D8  @ =gRam
	ldr r0, _080AF3DC  @ =0x00001794
	add r3, r1, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	add r4, r1, #0
	cmp r0, #0
	bge _080AF35E
	ldr r1, _080AF3E0  @ =0x00001796
	add r5, r4, r1
	ldrb r0, [r5]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r2, r0, #0
	cmp r0, #15
	beq _080AF3CE
	cmp r0, #14
	bne _080AF348
	ldr r0, _080AF3E4  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080AF348:
	strb r2, [r5]
	ldr r0, _080AF3E8  @ =gUnknown_0816E868
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r5, _080AF3EC  @ =0x00001793
	add r0, r4, r5
	strb r1, [r0]
	ldr r0, _080AF3F0  @ =gUnknown_0816E877
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r3]
_080AF35E:
	ldr r1, _080AF3E0  @ =0x00001796
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #13
	bne _080AF3CE
	mov r2, #184
	lsl r2, r2, #5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #12
	beq _080AF3CE
	mov r5, #182
	lsl r5, r5, #5
	add r1, r4, r5
	ldr r2, _080AF3F4  @ =0x00000958
	add r0, r4, r2
	ldrh r0, [r0]
	sub r0, r0, #16
	ldrh r1, [r1]
	sub r1, r1, r0
	mov r5, #150
	lsl r5, r5, #4
	add r3, r4, r5
	strh r1, [r3]
	ldr r0, _080AF3F8  @ =0x000016C4
	add r1, r4, r0
	sub r2, r2, #6
	add r0, r4, r2
	ldrh r0, [r0]
	sub r0, r0, #7
	ldrh r1, [r1]
	sub r1, r1, r0
	add r5, r5, #4
	add r2, r4, r5
	strh r1, [r2]
	ldr r1, _080AF3FC  @ =gUnknown_03003E74
	mov r0, #116
	strh r0, [r1]
	ldrh r1, [r2]
	ldrh r2, [r3]
	ldr r3, _080AF400  @ =gUnknown_0816E886
	add r5, r5, #172
	add r0, r4, r5
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	mov r3, #2
	orr r3, r3, r0
	lsl r3, r3, #8
	mov r0, #90
	orr r3, r3, r0
	mov r0, #2
	str r0, [sp]
	mov r0, #116
	bl sub_080C6368
_080AF3CE:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AF3D8:
	.4byte gRam
_080AF3DC:
	.4byte 0x00001794
_080AF3E0:
	.4byte 0x00001796
_080AF3E4:
	.4byte 0x000009AD
_080AF3E8:
	.4byte gUnknown_0816E868
_080AF3EC:
	.4byte 0x00001793
_080AF3F0:
	.4byte gUnknown_0816E877
_080AF3F4:
	.4byte 0x00000958
_080AF3F8:
	.4byte 0x000016C4
_080AF3FC:
	.4byte gUnknown_03003E74
_080AF400:
	.4byte gUnknown_0816E886
	THUMB_FUNC_END sub_080AF310

