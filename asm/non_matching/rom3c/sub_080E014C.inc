	THUMB_FUNC_START sub_080E014C
sub_080E014C: @ 0x080E014C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r2, #0
	ldr r4, _080E01C0  @ =gRam
	ldr r1, _080E01C4  @ =0x00000F82
	add r0, r4, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #3
	bne _080E0170
	ldr r5, _080E01C8  @ =gBow
	add r0, r0, r5
	ldr r5, _080E01CC  @ =0x00000FB2
	add r1, r4, r5
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
_080E0170:
	ldr r0, _080E01D0  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_081335FC
	ldr r2, _080E01D4  @ =0x000009B5
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	ldr r5, _080E01D8  @ =0x000009D4
	add r1, r4, r5
	mov r0, #48
	strb r0, [r1]
	ldr r0, _080E01DC  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r2, _080E01E0  @ =0x0000051E
	add r1, r4, r2
	mov r0, #185
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r5, _080E01E4  @ =0x0000051A
	add r1, r4, r5
	mov r0, #63
	strh r0, [r1]
	ldr r1, _080E01E8  @ =0x00000998
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _080E01EC  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E01C0:
	.4byte gRam
_080E01C4:
	.4byte 0x00000F82
_080E01C8:
	.4byte gBow
_080E01CC:
	.4byte 0x00000FB2
_080E01D0:
	.4byte 0x00000F52
_080E01D4:
	.4byte 0x000009B5
_080E01D8:
	.4byte 0x000009D4
_080E01DC:
	.4byte 0x0000099B
_080E01E0:
	.4byte 0x0000051E
_080E01E4:
	.4byte 0x0000051A
_080E01E8:
	.4byte 0x00000998
_080E01EC:
	.4byte 0x00000999
	THUMB_FUNC_END sub_080E014C

