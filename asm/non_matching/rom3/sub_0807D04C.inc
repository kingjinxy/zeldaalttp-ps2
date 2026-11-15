	THUMB_FUNC_START sub_0807D04C
sub_0807D04C: @ 0x0807D04C
	push {r4-r6,lr}
	ldr r2, _0807D094  @ =gRam
	ldr r0, _0807D098  @ =0x000009EA
	add r3, r2, r0
	ldrh r0, [r3]
	lsl r0, r0, #2
	ldr r1, _0807D09C  @ =0x000009EE
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
	mov r1, #128
	lsl r1, r1, #1
	add r6, r1, #0
_0807D076:
	bl sub_0807CF78
	ldrh r1, [r5]
	add r0, r6, r1
	strh r0, [r5]
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807D076
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D094:
	.4byte gRam
_0807D098:
	.4byte 0x000009EA
_0807D09C:
	.4byte 0x000009EE
	THUMB_FUNC_END sub_0807D04C

