	THUMB_FUNC_START sub_0807B5D8
sub_0807B5D8: @ 0x0807B5D8
	push {lr}
	ldr r2, _0807B614  @ =gRam
	mov r1, #188
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0807B60E
	mov r0, #177
	lsl r0, r0, #4
	add r3, r2, r0
	ldrh r0, [r3]
	cmp r0, #0
	beq _0807B60E
	mov r1, #0
	strh r1, [r3]
	mov r3, #192
	lsl r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _0807B618  @ =0x000009AD
	add r1, r2, r0
	mov r0, #5
	strb r0, [r1]
_0807B60E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B614:
	.4byte gRam
_0807B618:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0807B5D8

