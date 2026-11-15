	THUMB_FUNC_START sub_0806C0F4
sub_0806C0F4: @ 0x0806C0F4
	push {lr}
	bl sub_0807561C
	ldr r1, _0806C118  @ =gRam
	ldr r0, _0806C11C  @ =0x000009E8
	add r3, r1, r0
	ldrh r0, [r3]
	cmp r0, #0
	beq _0806C114
	ldr r2, _0806C120  @ =0x000009AD
	add r0, r1, r2
	ldrb r1, [r0]
	add r1, r1, #1
	mov r2, #0
	strb r1, [r0]
	strh r2, [r3]
_0806C114:
	pop {r0}
	bx r0
_0806C118:
	.4byte gRam
_0806C11C:
	.4byte 0x000009E8
_0806C120:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806C0F4

