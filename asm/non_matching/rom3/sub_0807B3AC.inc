	THUMB_FUNC_START sub_0807B3AC
sub_0807B3AC: @ 0x0807B3AC
	push {r4,r5,lr}
	ldr r5, _0807B418  @ =gRam
	ldr r1, _0807B41C  @ =0x00000BBF
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #1
	eor r0, r0, r1
	mov r2, #177
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r3, [r1]
	cmp r0, r3
	beq _0807B410
	mov r4, #0
	strh r0, [r1]
	ldr r1, _0807B420  @ =0x000016C4
	add r0, r5, r1
	ldr r2, _0807B424  @ =0x00000952
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _0807B428  @ =0x00000504
	add r1, r5, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldr r3, _0807B42C  @ =0x00000958
	add r2, r5, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _0807B430  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #59
	bl sub_0812A324
	ldr r0, _0807B434  @ =0x000009AD
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
	mov r1, #192
	lsl r1, r1, #4
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _0807B438  @ =0x00000C02
	add r0, r5, r2
	strh r4, [r0]
_0807B410:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B418:
	.4byte gRam
_0807B41C:
	.4byte 0x00000BBF
_0807B420:
	.4byte 0x000016C4
_0807B424:
	.4byte 0x00000952
_0807B428:
	.4byte 0x00000504
_0807B42C:
	.4byte 0x00000958
_0807B430:
	.4byte 0x00000506
_0807B434:
	.4byte 0x000009AD
_0807B438:
	.4byte 0x00000C02
	THUMB_FUNC_END sub_0807B3AC

