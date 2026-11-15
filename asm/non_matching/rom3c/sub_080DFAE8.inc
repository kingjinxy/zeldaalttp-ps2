	THUMB_FUNC_START sub_080DFAE8
sub_080DFAE8: @ 0x080DFAE8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080DFB4C  @ =gRam
	ldr r1, _080DFB50  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080DFB44
	bl sub_08133620
	ldr r1, _080DFB54  @ =0x00000CF8
	add r0, r4, r1
	ldrh r5, [r0]
	cmp r5, #0
	bne _080DFB44
	ldr r0, _080DFB58  @ =0x00000F52
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #152
	mov r2, sp
	bl sub_080C9564
	bl sub_08133600
	ldr r1, _080DFB5C  @ =0x000009B5
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _080DFB60  @ =0x000009D4
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080DFB64  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080DFB68  @ =0x0000051E
	add r0, r4, r1
	strh r5, [r0]
_080DFB44:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DFB4C:
	.4byte gRam
_080DFB50:
	.4byte 0x00000996
_080DFB54:
	.4byte 0x00000CF8
_080DFB58:
	.4byte 0x00000F52
_080DFB5C:
	.4byte 0x000009B5
_080DFB60:
	.4byte 0x000009D4
_080DFB64:
	.4byte 0x0000099B
_080DFB68:
	.4byte 0x0000051E
	THUMB_FUNC_END sub_080DFAE8

