	THUMB_FUNC_START sub_08131E24
sub_08131E24: @ 0x08131E24
	push {r4-r6,lr}
	mov r0, #14
	ldr r3, _08131E74  @ =gRam
	mov r6, #208
	lsl r6, r6, #1
	ldr r5, _08131E78  @ =gUnknown_02000D00
	ldr r4, _08131E7C  @ =gUnknown_02000900
_08131E32:
	lsl r1, r0, #24
	asr r1, r1, #24
	add r0, r1, r6
	asr r0, r0, #1
	lsl r0, r0, #1
	add r2, r0, r5
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r1, r1, #2
	lsl r1, r1, #24
	lsr r0, r1, #24
	cmp r1, #0
	bge _08131E32
	ldr r1, _08131E80  @ =0x000009B5
	add r0, r3, r1
	mov r2, #0
	strb r2, [r0]
	ldr r0, _08131E84  @ =0x000009D4
	add r1, r3, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _08131E88  @ =0x0000051E
	add r0, r3, r1
	strh r2, [r0]
	ldr r0, _08131E8C  @ =0x0000099B
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08131E74:
	.4byte gRam
_08131E78:
	.4byte gUnknown_02000D00
_08131E7C:
	.4byte gUnknown_02000900
_08131E80:
	.4byte 0x000009B5
_08131E84:
	.4byte 0x000009D4
_08131E88:
	.4byte 0x0000051E
_08131E8C:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08131E24

