	THUMB_FUNC_START sub_08103BE4
sub_08103BE4: @ 0x08103BE4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, _08103C10  @ =gRam
	ldr r2, _08103C14  @ =0x00000FC2
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _08103C08
	ldr r4, _08103C18  @ =0x00000F52
	add r0, r3, r4
	add r0, r1, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #63
	strb r0, [r2]
_08103C08:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103C10:
	.4byte gRam
_08103C14:
	.4byte 0x00000FC2
_08103C18:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08103BE4

