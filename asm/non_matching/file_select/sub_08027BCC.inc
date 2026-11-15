	THUMB_FUNC_START sub_08027BCC
sub_08027BCC: @ 0x08027BCC
	push {r4,lr}
	mov r12, r0
	ldr r1, _08027C0C  @ =gUnknown_0813CE0C
	add r0, r0, #42
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r4, [r1]
	ldr r1, _08027C10  @ =gUnknown_08137B90
	add r0, r0, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #1
	mov r1, r12
	ldr r0, [r1, #124]
	add r0, r0, r2
	ldrh r3, [r0]
	add r1, r1, #112
	strh r3, [r1]
	strh r4, [r0]
	sub r0, r0, r2
	strh r4, [r0]
	sub r0, r0, r2
	ldrh r2, [r0]
	add r1, r1, #4
	strh r2, [r1]
	strh r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08027C0C:
	.4byte gUnknown_0813CE0C
_08027C10:
	.4byte gUnknown_08137B90
	THUMB_FUNC_END sub_08027BCC

