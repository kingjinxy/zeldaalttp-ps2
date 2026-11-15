	THUMB_FUNC_START sub_080B03A4
sub_080B03A4: @ 0x080B03A4
	push {r4-r6,lr}
	ldr r5, _080B0404  @ =gRam
	ldr r1, _080B0408  @ =0x000017F0
	add r0, r5, r1
	ldrb r4, [r0]
	ldr r2, _080B040C  @ =0x000015DD
	add r0, r5, r2
	strb r4, [r0]
	ldr r3, _080B0410  @ =0x00000DF7
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C1768
	ldr r0, _080B0414  @ =0x00001830
	add r1, r5, r0
	ldrb r3, [r1]
	ldr r2, _080B0418  @ =0x00000DCF
	add r6, r5, r2
	add r4, r4, r6
	ldr r0, _080B041C  @ =gUnknown_0816E8E4
	add r0, r3, r0
	ldrb r2, [r0]
	ldrb r0, [r4]
	cmp r0, r2
	bcc _080B0428
	add r0, r3, r6
	strb r2, [r0]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #8
	bne _080B0428
	ldr r3, _080B0420  @ =0x000009AD
	add r1, r5, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B0424  @ =0x00000E15
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B045C
_080B0404:
	.4byte gRam
_080B0408:
	.4byte 0x000017F0
_080B040C:
	.4byte 0x000015DD
_080B0410:
	.4byte 0x00000DF7
_080B0414:
	.4byte 0x00001830
_080B0418:
	.4byte 0x00000DCF
_080B041C:
	.4byte gUnknown_0816E8E4
_080B0420:
	.4byte 0x000009AD
_080B0424:
	.4byte 0x00000E15
_080B0428:
	ldr r1, _080B0468  @ =gRam
	ldr r2, _080B046C  @ =0x00001830
	add r0, r1, r2
	ldrb r0, [r0]
	sub r0, r0, #1
	mov r3, #150
	lsl r3, r3, #4
	add r2, r1, r3
	strb r0, [r2]
	ldr r3, _080B0470  @ =0x000017F0
	add r0, r1, r3
	ldrb r3, [r0]
	ldr r0, _080B0474  @ =0x00000DCF
	add r4, r1, r0
	add r5, r3, r4
_080B0446:
	add r1, r3, r4
	ldrb r0, [r5]
	strb r0, [r1]
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	asr r0, r0, #24
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	bne _080B0446
_080B045C:
	bl sub_080B0478
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0468:
	.4byte gRam
_080B046C:
	.4byte 0x00001830
_080B0470:
	.4byte 0x000017F0
_080B0474:
	.4byte 0x00000DCF
	THUMB_FUNC_END sub_080B03A4

