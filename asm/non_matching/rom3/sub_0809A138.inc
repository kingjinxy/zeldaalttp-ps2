	THUMB_FUNC_START sub_0809A138
sub_0809A138: @ 0x0809A138
	push {r4,lr}
	ldr r1, _0809A164  @ =gRam
	ldr r0, _0809A168  @ =0x000016CF
	add r2, r1, r0
	ldrb r4, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _0809A174
	ldr r0, _0809A16C  @ =0x000016C8
	add r3, r1, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809A186
	cmp r0, #0
	bgt _0809A174
	ldr r0, _0809A170  @ =0x0000FFFF
	strh r0, [r3]
	mov r0, #255
	orr r0, r0, r4
	b _0809A184
_0809A164:
	.4byte gRam
_0809A168:
	.4byte 0x000016CF
_0809A16C:
	.4byte 0x000016C8
_0809A170:
	.4byte 0x0000FFFF
_0809A174:
	ldr r0, _0809A18C  @ =0x000016CF
	add r2, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r1, r1, r0
	ldrb r0, [r2]
	ldrb r1, [r1]
	sub r0, r0, r1
_0809A184:
	strb r0, [r2]
_0809A186:
	pop {r4}
	pop {r0}
	bx r0
_0809A18C:
	.4byte 0x000016CF
	THUMB_FUNC_END sub_0809A138

