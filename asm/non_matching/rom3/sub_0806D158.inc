	THUMB_FUNC_START sub_0806D158
sub_0806D158: @ 0x0806D158
	push {r4,lr}
	ldr r2, _0806D184  @ =gRam
	ldr r1, _0806D188  @ =0x00001703
	add r0, r2, r1
	ldrb r3, [r0]
	ldr r0, _0806D18C  @ =gUnknown_0814CB3C
	ldr r4, _0806D190  @ =0x00000ABE
	add r1, r2, r4
	ldrh r1, [r1]
	add r0, r1, r0
	ldrb r0, [r0]
	add r3, r3, r0
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0806D198
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldr r0, _0806D194  @ =0x0000FFFE
	b _0806D1A0
	.byte 0x00
	.byte 0x00
_0806D184:
	.4byte gRam
_0806D188:
	.4byte 0x00001703
_0806D18C:
	.4byte gUnknown_0814CB3C
_0806D190:
	.4byte 0x00000ABE
_0806D194:
	.4byte 0x0000FFFE
_0806D198:
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	mov r0, #2
_0806D1A0:
	strh r0, [r1]
	ldr r1, _0806D1B8  @ =0x00000ABE
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0806D1BC
	mov r4, #182
	lsl r4, r4, #5
	b _0806D1BE
	.byte 0x00
	.byte 0x00
_0806D1B8:
	.4byte 0x00000ABE
_0806D1BC:
	ldr r4, _0806D1E4  @ =0x000016C4
_0806D1BE:
	add r1, r2, r4
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	ldrh r0, [r0]
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldrb r2, [r1]
	mov r1, #254
	ldr r0, _0806D1E8  @ =gUnknown_0814CB40
	add r0, r3, r0
	and r1, r1, r2
	ldrb r0, [r0]
	cmp r1, r0
	beq _0806D1EC
	mov r0, #0
	b _0806D1EE
	.byte 0x00
	.byte 0x00
_0806D1E4:
	.4byte 0x000016C4
_0806D1E8:
	.4byte gUnknown_0814CB40
_0806D1EC:
	mov r0, #1
_0806D1EE:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0806D158

