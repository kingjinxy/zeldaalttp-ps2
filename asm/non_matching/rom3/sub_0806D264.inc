	THUMB_FUNC_START sub_0806D264
sub_0806D264: @ 0x0806D264
	push {lr}
	bl sub_08070A80
	ldr r1, _0806D298  @ =gRam
	mov r0, #177
	lsl r0, r0, #4
	add r3, r1, r0
	ldrh r0, [r3]
	add r2, r0, #0
	cmp r2, #0
	bne _0806D294
	add r0, r0, #1
	strh r0, [r3]
	mov r3, #192
	lsl r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _0806D29C  @ =0x000009AD
	add r1, r1, r0
	mov r0, #5
	strb r0, [r1]
_0806D294:
	pop {r0}
	bx r0
_0806D298:
	.4byte gRam
_0806D29C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806D264

