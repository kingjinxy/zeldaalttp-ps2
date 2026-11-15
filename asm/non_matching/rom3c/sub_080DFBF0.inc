	THUMB_FUNC_START sub_080DFBF0
sub_080DFBF0: @ 0x080DFBF0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080DFC48  @ =gRam
	ldr r2, _080DFC4C  @ =0x00000F52
	add r1, r4, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	bl sub_081335FC
	ldr r0, _080DFC50  @ =0x000009B5
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldr r2, _080DFC54  @ =0x000009D4
	add r1, r4, r2
	mov r0, #48
	strb r0, [r1]
	ldr r0, _080DFC58  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r2, _080DFC5C  @ =0x0000051E
	add r1, r4, r2
	mov r0, #185
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r0, _080DFC60  @ =0x0000051A
	add r1, r4, r0
	mov r0, #63
	strh r0, [r1]
	ldr r1, _080DFC64  @ =0x00000998
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _080DFC68  @ =0x00000999
	add r4, r4, r2
	strb r1, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DFC48:
	.4byte gRam
_080DFC4C:
	.4byte 0x00000F52
_080DFC50:
	.4byte 0x000009B5
_080DFC54:
	.4byte 0x000009D4
_080DFC58:
	.4byte 0x0000099B
_080DFC5C:
	.4byte 0x0000051E
_080DFC60:
	.4byte 0x0000051A
_080DFC64:
	.4byte 0x00000998
_080DFC68:
	.4byte 0x00000999
	THUMB_FUNC_END sub_080DFBF0

