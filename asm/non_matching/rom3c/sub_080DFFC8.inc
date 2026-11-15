	THUMB_FUNC_START sub_080DFFC8
sub_080DFFC8: @ 0x080DFFC8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080E002C  @ =gRam
	ldr r1, _080E0030  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080E0024
	bl sub_08133620
	ldr r1, _080E0034  @ =0x00000CF8
	add r0, r4, r1
	ldrh r5, [r0]
	cmp r5, #0
	bne _080E0024
	ldr r0, _080E0038  @ =0x00000F52
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #142
	mov r2, sp
	bl sub_080C9564
	bl sub_08133600
	ldr r1, _080E003C  @ =0x000009B5
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _080E0040  @ =0x000009D4
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080E0044  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080E0048  @ =0x0000051E
	add r0, r4, r1
	strh r5, [r0]
_080E0024:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080E002C:
	.4byte gRam
_080E0030:
	.4byte 0x00000996
_080E0034:
	.4byte 0x00000CF8
_080E0038:
	.4byte 0x00000F52
_080E003C:
	.4byte 0x000009B5
_080E0040:
	.4byte 0x000009D4
_080E0044:
	.4byte 0x0000099B
_080E0048:
	.4byte 0x0000051E
	THUMB_FUNC_END sub_080DFFC8

