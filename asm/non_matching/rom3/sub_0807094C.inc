	THUMB_FUNC_START sub_0807094C
sub_0807094C: @ 0x0807094C
	push {lr}
	ldr r1, _08070988  @ =gRam
	ldr r2, _0807098C  @ =0x0000165E
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #1
	bhi _08070982
	ldr r3, _08070990  @ =0x00000A3E
	add r2, r1, r3
	mov r0, #255
	strb r0, [r2]
	sub r3, r3, #96
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08070982
	sub r3, r3, #4
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #2
	beq _08070982
	cmp r0, #18
	beq _08070982
	mov r0, #3
	strb r0, [r2]
_08070982:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070988:
	.4byte gRam
_0807098C:
	.4byte 0x0000165E
_08070990:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_0807094C

