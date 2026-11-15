	THUMB_FUNC_START sub_080E5FC0
sub_080E5FC0: @ 0x080E5FC0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E65C8
	ldr r3, _080E6074  @ =gRam
	ldr r1, _080E6078  @ =0x00000FC2
	add r0, r3, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080E6054
	ldr r2, _080E607C  @ =0x000016C4
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r6, _080E6080  @ =0x000016C5
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	sub r2, r2, #162
	add r0, r3, r2
	ldrb r2, [r0]
	sub r6, r6, #162
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #160
	lsl r0, r0, #15
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #159
	bhi _080E6054
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080E6084  @ =0x000016C1
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r6, r6, #1
	add r0, r3, r6
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #160
	lsl r0, r0, #15
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #159
	bhi _080E6054
	ldr r1, _080E6088  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #16
	strb r0, [r5]
_080E6054:
	ldr r0, _080E6074  @ =gRam
	ldr r2, _080E608C  @ =0x00000F92
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _080E6090  @ =gUnknown_08177670
	ldr r3, _080E6094  @ =0x00000FB2
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E6074:
	.4byte gRam
_080E6078:
	.4byte 0x00000FC2
_080E607C:
	.4byte 0x000016C4
_080E6080:
	.4byte 0x000016C5
_080E6084:
	.4byte 0x000016C1
_080E6088:
	.4byte 0x00000F52
_080E608C:
	.4byte 0x00000F92
_080E6090:
	.4byte gUnknown_08177670
_080E6094:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E5FC0

