	THUMB_FUNC_START sub_080B8960
sub_080B8960: @ 0x080B8960
	push {r4,lr}
	ldr r0, _080B8990  @ =gRam
	ldr r2, _080B8994  @ =0x000009AD
	add r1, r0, r2
	ldrb r3, [r1]
	add r2, r2, #85
	add r1, r0, r2
	ldrb r2, [r1]
	ldr r1, _080B8998  @ =0x00000A03
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r4, r0, #8
	orr r4, r4, r2
	ldr r1, _080B899C  @ =gUnknown_08170950
	lsr r0, r3, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r4, r0
	bcc _080B89D4
	cmp r3, #31
	bne _080B89A0
	mov r0, #7
	b _080B89A2
_080B8990:
	.4byte gRam
_080B8994:
	.4byte 0x000009AD
_080B8998:
	.4byte 0x00000A03
_080B899C:
	.4byte gUnknown_08170950
_080B89A0:
	mov r0, #3
_080B89A2:
	and r2, r2, r0
	cmp r2, #0
	bne _080B89E4
	bl sub_08069F08
	ldr r2, _080B89C8  @ =gRam
	ldr r3, _080B89CC  @ =0x0000099D
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B89E4
	ldr r0, _080B89D0  @ =0x000009AD
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B89F6
_080B89C8:
	.4byte gRam
_080B89CC:
	.4byte 0x0000099D
_080B89D0:
	.4byte 0x000009AD
_080B89D4:
	mov r0, #3
	and r2, r2, r0
	cmp r2, #0
	bne _080B89E4
	cmp r4, #31
	bhi _080B89E4
	bl sub_08069FF4
_080B89E4:
	add r1, r4, #1
	ldr r2, _080B8A30  @ =gRam
	ldr r3, _080B8A34  @ =0x00000A02
	add r0, r2, r3
	strb r1, [r0]
	lsr r1, r1, #8
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
_080B89F6:
	ldr r1, _080B8A38  @ =0x00000952
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r3, _080B8A3C  @ =0x00000A2C
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _080B8A40  @ =0x00000958
	add r0, r2, r1
	ldrh r1, [r0]
	add r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	mov r1, #149
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r1, [r0]
	sub r3, r3, #2
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _080B8A44  @ =0x00000956
	add r0, r2, r1
	ldrh r1, [r0]
	add r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B8A30:
	.4byte gRam
_080B8A34:
	.4byte 0x00000A02
_080B8A38:
	.4byte 0x00000952
_080B8A3C:
	.4byte 0x00000A2C
_080B8A40:
	.4byte 0x00000958
_080B8A44:
	.4byte 0x00000956
	THUMB_FUNC_END sub_080B8960

