	THUMB_FUNC_START sub_08027C48
sub_08027C48: @ 0x08027C48
	push {r4,lr}
	ldr r2, _08027C88  @ =gUnknown_0813CE0C
	add r1, r0, #0
	add r1, r1, #42
	ldrb r1, [r1]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r2, r1, r2
	ldrh r3, [r2]
	add r4, r3, #0
	ldr r2, _08027C8C  @ =gUnknown_08137B90
	add r1, r1, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #1
	ldr r0, [r0, #124]
	add r0, r0, r1
	ldrh r2, [r0]
	cmp r3, r2
	bne _08027C90
	sub r0, r0, r1
	ldrh r2, [r0]
	cmp r3, r2
	bne _08027C90
	sub r0, r0, r1
	ldrh r0, [r0]
	cmp r4, r0
	bne _08027C90
	mov r0, #0
	b _08027C92
	.byte 0x00
	.byte 0x00
_08027C88:
	.4byte gUnknown_0813CE0C
_08027C8C:
	.4byte gUnknown_08137B90
_08027C90:
	mov r0, #1
_08027C92:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08027C48

