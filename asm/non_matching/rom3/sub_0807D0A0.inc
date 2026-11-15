	THUMB_FUNC_START sub_0807D0A0
sub_0807D0A0: @ 0x0807D0A0
	push {r4,r5,lr}
	ldr r2, _0807D0E0  @ =gRam
	ldr r0, _0807D0E4  @ =0x000009EA
	add r3, r2, r0
	ldrh r0, [r3]
	lsl r0, r0, #2
	ldr r1, _0807D0E8  @ =0x000009EE
	add r4, r2, r1
	ldrh r1, [r4]
	orr r0, r0, r1
	add r0, r0, #1
	mov r1, #0
	strh r0, [r3]
	strh r1, [r4]
	mov r0, #151
	lsl r0, r0, #4
	add r5, r2, r0
	add r4, r3, #0
_0807D0C4:
	bl sub_0807CF78
	ldrh r0, [r5]
	add r0, r0, #4
	strh r0, [r5]
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807D0C4
	pop {r4,r5}
	pop {r0}
	bx r0
_0807D0E0:
	.4byte gRam
_0807D0E4:
	.4byte 0x000009EA
_0807D0E8:
	.4byte 0x000009EE
	THUMB_FUNC_END sub_0807D0A0

