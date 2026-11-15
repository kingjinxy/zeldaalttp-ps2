	THUMB_FUNC_START sub_0810F740
sub_0810F740: @ 0x0810F740
	push {r4-r7,lr}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810F7F2
	ldr r1, _0810F794  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r6, _0810F798  @ =gRam
	ldr r1, _0810F79C  @ =0x00000546
	add r0, r6, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0810F7F2
	bl sub_080AA868
	ldr r2, _0810F7A0  @ =0x00001052
	add r1, r6, r2
	add r1, r4, r1
	ldrb r1, [r1]
	lsl r1, r1, #3
	ldr r2, _0810F7A4  @ =gUnknown_0817D378
	add r5, r1, r2
	ldrh r1, [r5, #6]
	sub r0, r0, r1
	cmp r0, #0
	bge _0810F7AC
	add r0, r4, #0
	ldr r1, _0810F7A8  @ =0x0000017F
	mov r2, sp
	bl sub_080C9564
	b _0810F7F2
_0810F794:
	.4byte gUnknown_03003E70
_0810F798:
	.4byte gRam
_0810F79C:
	.4byte 0x00000546
_0810F7A0:
	.4byte 0x00001052
_0810F7A4:
	.4byte gUnknown_0817D378
_0810F7A8:
	.4byte 0x0000017F
_0810F7AC:
	bl sub_080C99F8
	lsl r0, r0, #24
	cmp r0, #0
	bge _0810F7CA
	add r2, sp, #4
	add r0, r4, #0
	mov r1, #83
	bl sub_080C9564
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810F7F2
_0810F7CA:
	add r0, r7, #0
	mov r1, #38
	bl sub_080CF140
	ldr r1, _0810F7FC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r7, r0
	mov r4, #0
	mov r1, #64
	strb r1, [r0]
	ldrh r0, [r5, #6]
	neg r0, r0
	bl sub_080AA83C
	ldr r2, _0810F800  @ =0x00001776
	add r0, r6, r2
	strb r4, [r0]
	ldrb r0, [r5, #5]
	bl sub_080A1588
_0810F7F2:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F7FC:
	.4byte 0x00000FC2
_0810F800:
	.4byte 0x00001776
	THUMB_FUNC_END sub_0810F740

