	THUMB_FUNC_START sub_080DFE48
sub_080DFE48: @ 0x080DFE48
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _080DFECC  @ =gRam
	ldr r0, _080DFED0  @ =0x00000F52
	add r1, r3, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080DFED4  @ =0x00000F82
	add r1, r3, r2
	add r1, r5, r1
	ldr r2, _080DFED8  @ =0x00001AE2
	add r0, r3, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080DFEDC  @ =gUnknown_0817653C
	ldrb r1, [r1]
	lsl r0, r1, #2
	add r0, r0, r2
	ldr r4, [r0]
	ldr r2, _080DFEE0  @ =gBow
	add r0, r1, r2
	ldrb r7, [r0]
	add r2, r7, #0
	add r6, r3, #0
	cmp r1, #32
	beq _080DFE86
	cmp r1, #3
	bne _080DFE88
_080DFE86:
	mov r2, #1
_080DFE88:
	ldr r1, _080DFED4  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _080DFEE0  @ =gBow
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	add r0, r2, r4
	sub r0, r0, #1
	ldrb r4, [r0]
	mov r0, #4
	mov r1, #40
	add r2, r4, #0
	bl sub_080AE1F8
	bl sub_080AA724
	ldr r2, _080DFEE4  @ =0x00000F92
	add r0, r6, r2
	add r0, r5, r0
	strb r4, [r0]
	ldr r1, _080DFEE8  @ =0x00000FB2
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
	add r2, r2, #48
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_080DFECC:
	.4byte gRam
_080DFED0:
	.4byte 0x00000F52
_080DFED4:
	.4byte 0x00000F82
_080DFED8:
	.4byte 0x00001AE2
_080DFEDC:
	.4byte gUnknown_0817653C
_080DFEE0:
	.4byte gBow
_080DFEE4:
	.4byte 0x00000F92
_080DFEE8:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080DFE48

